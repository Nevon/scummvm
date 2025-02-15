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
 *
 * This file is dual-licensed.
 * In addition to the GPLv3 license mentioned above, this code is also
 * licensed under LGPL 2.1. See LICENSES/COPYING.LGPL file for the
 * full text of the license.
 *
 */

/* Detection tables for Fascination. */

#ifndef GOB_DETECTION_TABLES_FASCIN_H
#define GOB_DETECTION_TABLES_FASCIN_H

// -- DOS VGA Floppy (1 disk) --

{ // Supplied by scoriae
	{
		"fascination",
		"VGA",
		AD_ENTRY1s("disk0.stk", "c14330d052fe4da5a441ac9d81bc5891", 1061955),
		EN_ANY,
		kPlatformDOS,
		ADGF_NO_FLAGS,
		GUIO2(GUIO_NOSUBTITLES, GUIO_NOSPEECH)
	},
	kGameTypeFascination,
	kFeaturesAdLib,
	"disk0.stk", 0, 0
},
{
	{
		"fascination",
		"VGA",
		AD_ENTRY1s("disk0.stk", "e8ab4f200a2304849f462dc901705599", 183337),
		FR_FRA,
		kPlatformDOS,
		ADGF_NO_FLAGS,
		GUIO2(GUIO_NOSUBTITLES, GUIO_NOSPEECH)
	},
	kGameTypeFascination,
	kFeaturesAdLib,
	"disk0.stk", 0, 0
},

// -- DOS VGA Floppy (3 disks) --

{ // Supplied by alex86r in bug report #5691
	{
		"fascination",
		"VGA 3 disks edition",
		AD_ENTRY1s("disk0.stk", "ab3dfdce43917bc806812959d692fc8f", 1061929),
		IT_ITA,
		kPlatformDOS,
		ADGF_NO_FLAGS,
		GUIO2(GUIO_NOSUBTITLES, GUIO_NOSPEECH)
	},
	kGameTypeFascination,
	kFeaturesAdLib,
	"disk0.stk", 0, 0
},
{
	{
		"fascination",
		"VGA 3 disks edition",
		AD_ENTRY1s("disk0.stk", "a50a8495e1b2d67699fb562cb98fc3e2", 1064387),
		FR_FRA,
		kPlatformDOS,
		ADGF_NO_FLAGS,
		GUIO2(GUIO_NOSUBTITLES, GUIO_NOSPEECH)
	},
	kGameTypeFascination,
	kFeaturesAdLib,
	"disk0.stk", 0, 0
},
{
	{
		"fascination",
		"Censored",
		AD_ENTRY1s("intro.stk", "d6e45ce548598727e2b5587a99718eba", 1055909),
		HE_ISR,
		kPlatformDOS,
		ADGF_NO_FLAGS,
		GUIO2(GUIO_NOSUBTITLES, GUIO_NOSPEECH)
	},
	kGameTypeFascination,
	kFeaturesAdLib,
	"intro.stk", 0, 0
},
{ // Supplied by windlepoons in bug report #4371
	{
		"fascination",
		"VGA 3 disks edition",
		AD_ENTRY1s("disk0.stk", "3a24e60a035250189643c86a9ceafb97", 1062480),
		DE_DEU,
		kPlatformDOS,
		ADGF_NO_FLAGS,
		GUIO2(GUIO_NOSUBTITLES, GUIO_NOSPEECH)
	},
	kGameTypeFascination,
	kFeaturesAdLib,
	"disk0.stk", 0, 0
},

// -- DOS VGA CD --

{
	{
		"fascination",
		"CD (Censored)",
		AD_ENTRY1s("intro.stk", "9c61e9c22077f72921f07153e37ccf01", 545953),
		EN_ANY,
		kPlatformDOS,
		ADGF_CD,
		GUIO1(GUIO_NOSUBTITLES)
	},
	kGameTypeFascination,
	kFeaturesCD,
	"intro.stk", 0, 0
},
{
	{
		"fascination",
		"CD (Censored)",
		AD_ENTRY1s("intro.stk", "9c61e9c22077f72921f07153e37ccf01", 545953),
		FR_FRA,
		kPlatformDOS,
		ADGF_CD,
		GUIO1(GUIO_NOSUBTITLES)
	},
	kGameTypeFascination,
	kFeaturesCD,
	"intro.stk", 0, 0
},
{
	{
		"fascination",
		"CD (Censored)",
		AD_ENTRY1s("intro.stk", "9c61e9c22077f72921f07153e37ccf01", 545953),
		DE_DEU,
		kPlatformDOS,
		ADGF_CD,
		GUIO1(GUIO_NOSUBTITLES)
	},
	kGameTypeFascination,
	kFeaturesCD,
	"intro.stk", 0, 0
},
{
	{
		"fascination",
		"CD (Censored)",
		AD_ENTRY1s("intro.stk", "9c61e9c22077f72921f07153e37ccf01", 545953),
		IT_ITA,
		kPlatformDOS,
		ADGF_CD,
		GUIO1(GUIO_NOSUBTITLES)
	},
	kGameTypeFascination,
	kFeaturesCD,
	"intro.stk", 0, 0
},
{
	{
		"fascination",
		"CD (Censored)",
		AD_ENTRY1s("intro.stk", "9c61e9c22077f72921f07153e37ccf01", 545953),
		ES_ESP,
		kPlatformDOS,
		ADGF_CD,
		GUIO1(GUIO_NOSUBTITLES)
	},
	kGameTypeFascination,
	kFeaturesCD,
	"intro.stk", 0, 0
},
{ // From bug #7069
	{
		"fascination",
		"",
		AD_ENTRY1s("disk0.stk", "fbf73d7919e1a6752d924eccc14838d7", 190498),
		ES_ESP,
		kPlatformDOS,
		ADGF_NO_FLAGS,
		GUIO2(GUIO_NOSUBTITLES, GUIO_NOSPEECH)
	},
	kGameTypeFascination,
	kFeaturesNone,
	"disk0.stk", 0, 0
},

// -- Amiga --

{
	{
		"fascination",
		"",
		AD_ENTRY1s("disk0.stk", "68b1c01564f774c0b640075fbad1b695", 189968),
		DE_DEU,
		kPlatformAmiga,
		ADGF_NO_FLAGS,
		GUIO2(GUIO_NOSUBTITLES, GUIO_NOSPEECH)
	},
	kGameTypeFascination,
	kFeaturesNone,
	"disk0.stk", 0, 0
},
{
	{
		"fascination",
		"",
		AD_ENTRY1s("disk0.stk", "7062117e9c5adfb6bfb2dac3ff74df9e", 189951),
		EN_ANY,
		kPlatformAmiga,
		ADGF_NO_FLAGS,
		GUIO2(GUIO_NOSUBTITLES, GUIO_NOSPEECH)
	},
	kGameTypeFascination,
	kFeaturesNone,
	"disk0.stk", 0, 0
},
{
	{
		"fascination",
		"",
		AD_ENTRY1s("disk0.stk", "55c154e5a3e8e98afebdcff4b522e1eb", 190005),
		FR_FRA,
		kPlatformAmiga,
		ADGF_NO_FLAGS,
		GUIO2(GUIO_NOSUBTITLES, GUIO_NOSPEECH)
	},
	kGameTypeFascination,
	kFeaturesNone,
	"disk0.stk", 0, 0
},
{
	{
		"fascination",
		"",
		AD_ENTRY1s("disk0.stk", "7691827fff35df7799f14cfd6be178ad", 189931),
		IT_ITA,
		kPlatformAmiga,
		ADGF_NO_FLAGS,
		GUIO2(GUIO_NOSUBTITLES, GUIO_NOSPEECH)
	},
	kGameTypeFascination,
	kFeaturesNone,
	"disk0.stk", 0, 0
},

{ // Supplied by CaptainHIT in bug report #11592
	{
		"fascination",
		"",
		AD_ENTRY1s("disk0.stk", "be68d6609da9ded9489dc2c4523035d2", 190030),
		ES_ESP,
		kPlatformAmiga,
		ADGF_NO_FLAGS,
		GUIO2(GUIO_NOSUBTITLES, GUIO_NOSPEECH)
	},
	kGameTypeFascination,
	kFeaturesNone,
	"disk0.stk", 0, 0
},

// -- Atari ST --

{
	{
		"fascination",
		"",
		AD_ENTRY1s("disk0.stk", "aff9fcc619f4dd19eae228affd0d34c8", 189964),
		EN_ANY,
		kPlatformAtariST,
		ADGF_NO_FLAGS,
		GUIO2(GUIO_NOSUBTITLES, GUIO_NOSPEECH)
	},
	kGameTypeFascination,
	kFeaturesNone,
	"disk0.stk", 0, 0
},

#endif // GOB_DETECTION_TABLES_FASCIN_H
