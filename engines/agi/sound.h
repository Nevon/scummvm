/* ScummVM - Graphic Adventure Engine
 *
 * ScummVM is the legal property of its developers, whose names
 * are too numerous to list here. Please refer to the COPYRIGHT
 * file distributed with this source distribution.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef AGI_SOUND_H
#define AGI_SOUND_H

namespace Audio {
class Mixer;
class SoundHandle;
}

namespace Agi {

#define SOUND_EMU_NONE  0
#define SOUND_EMU_PC    1
#define SOUND_EMU_PCJR  2
#define SOUND_EMU_MAC   3
#define SOUND_EMU_AMIGA 4
#define SOUND_EMU_APPLE2GS 5
#define SOUND_EMU_COCO3 6
#define SOUND_EMU_MIDI 7

/**
 * AGI sound note structure.
 */
struct AgiNote {
	uint16 duration;    ///< Note duration
	uint16 freqDiv;     ///< Note frequency divisor (10-bit)
	uint8  attenuation; ///< Note volume attenuation (4-bit)

	/** Reads an AgiNote through the given pointer. */
	void read(const uint8 *ptr) {
		duration = READ_LE_UINT16(ptr);
		uint16 freqByte0 = *(ptr + 2); // Bits 4-9 of the frequency divisor
		uint16 freqByte1 = *(ptr + 3); // Bits 0-3 of the frequency divisor
		// Merge the frequency divisor's bits together into a single variable
		freqDiv = ((freqByte0 & 0x3F) << 4) | (freqByte1 & 0x0F);
		attenuation = *(ptr + 4) & 0x0F;
	}
};

/**
 * AGI sound resource types.
 * It's probably coincidence that all the values here are powers of two
 * as they're simply the different used values in AGI sound resources'
 * starts (The first 16-bit little endian word, to be precise).
 */
enum AgiSoundEmuType {
	AGI_SOUND_SAMPLE    = 0x0001,
	AGI_SOUND_MIDI      = 0x0002,
	AGI_SOUND_4CHN      = 0x0008
};

class SoundMgr;

class SoundGen {
public:
	SoundGen(AgiBase *vm, Audio::Mixer *pMixer);
	virtual ~SoundGen();

	virtual void play(int resnum) = 0;
	virtual void stop(void) = 0;

	AgiBase *_vm;

	Audio::Mixer *_mixer;
	Audio::SoundHandle *_soundHandle;

	uint32 _sampleRate;
};

/**
 * AGI sound resource structure.
 */
class AgiSound {
public:
	AgiSound() : _isPlaying(false), _isValid(false) {}
	virtual ~AgiSound() {}
	virtual void play()      { _isPlaying = true; }
	virtual void stop()      { _isPlaying = false; }
	virtual bool isPlaying() { return _isPlaying; }
	virtual uint16 type() = 0;

	/**
	 * A named constructor for creating different types of AgiSound objects
	 * from a raw sound resource.
	 *
	 * NOTE: This function should take responsibility for freeing the raw resource
	 * from memory using free() or delegate the responsibility onwards to some other
	 * function!
	 */
	static AgiSound *createFromRawResource(uint8 *data, uint32 len, int resnum, int soundemu);

protected:
	bool _isPlaying;    ///< Is the sound playing?
	bool _isValid;      ///< Is this a valid sound object?
};

class PCjrSound : public AgiSound {
public:
	PCjrSound(uint8 *data, uint32 len, int resnum);
	~PCjrSound() override { free(_data); }
	uint16 type() override { return _type; }
	const uint8 *getVoicePointer(uint voiceNum);
	uint8 *getData() { return _data; }
	uint32 getLength() { return _len; }
protected:
	uint8 *_data; ///< Raw sound resource data
	uint32 _len;  ///< Length of the raw sound resource
	uint16 _type; ///< Sound resource type
};

class SoundMgr {

public:
	SoundMgr(AgiBase *agi, Audio::Mixer *pMixer);
	~SoundMgr();

	void setVolume(uint8 volume);

	void unloadSound(int);
	void startSound(int, int);
	void stopSound();

	void soundIsFinished();

private:
	int _endflag;
	AgiBase *_vm;

	SoundGen *_soundGen;

	int _playingSound;
};

} // End of namespace Agi

#endif /* AGI_SOUND_H */
