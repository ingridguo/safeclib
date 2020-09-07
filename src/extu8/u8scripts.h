/* ex: set ro ft=c: -*- mode: c; buffer-read-only: t -*-
 * generated by gen-u8scripts.pl from unicode Scripts-13.0.0.txt, do not modify!
 *
 * u8scripts.h
 *
 * September 2020, Reini Urban
 *
 * Copyright (c) 2020 by Reini Urban
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use,
 * copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following
 * conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT.  IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 *------------------------------------------------------------------
 */

/* Compile optimized sorted unicode decision list with Latin/Common/Inherited combined,
   and holes (script: Unknown) skipped,
   because they are not needed when checking mixed script combinations.
*/
struct _u8_script_range_t {
  uint32_t from;
  const char *name;
};

/* holes are also Latin/Common/Inherited */
static const struct _u8_script_range_t _u8_script_ranges[] = {
  { 0x0, NULL },
  { 0x2ea, "Bopomofo" },
  { 0x2ec, NULL },
  { 0x370, "Greek" },
  { 0x374, NULL },
  { 0x375, "Greek" },
  { 0x37e, NULL },
  { 0x37f, "Greek" },
  { 0x385, NULL },
  { 0x386, "Greek" },
  { 0x387, NULL },
  { 0x388, "Greek" },
  { 0x3e2, "Coptic" },
  { 0x3f0, "Greek" },
  { 0x400, "Cyrillic" },
  { 0x485, NULL },
  { 0x487, "Cyrillic" },
  { 0x531, "Armenian" },
  { 0x591, "Hebrew" },
  { 0x600, "Arabic" },
  { 0x605, NULL },
  { 0x606, "Arabic" },
  { 0x60c, NULL },
  { 0x60d, "Arabic" },
  { 0x61b, NULL },
  { 0x61c, "Arabic" },
  { 0x61f, NULL },
  { 0x620, "Arabic" },
  { 0x640, NULL },
  { 0x641, "Arabic" },
  { 0x64b, NULL },
  { 0x656, "Arabic" },
  { 0x670, NULL },
  { 0x671, "Arabic" },
  { 0x6dd, NULL },
  { 0x6de, "Arabic" },
  { 0x700, "Syriac" },
  { 0x750, "Arabic" },
  { 0x780, "Thaana" },
  { 0x7c0, "Nko" },
  { 0x800, "Samaritan" },
  { 0x840, "Mandaic" },
  { 0x860, "Syriac" },
  { 0x8a0, "Arabic" },
  { 0x8e2, NULL },
  { 0x8e3, "Arabic" },
  { 0x900, "Devanagari" },
  { 0x951, NULL },
  { 0x955, "Devanagari" },
  { 0x964, NULL },
  { 0x966, "Devanagari" },
  { 0x980, "Bengali" },
  { 0xa01, "Gurmukhi" },
  { 0xa81, "Gujarati" },
  { 0xb01, "Oriya" },
  { 0xb82, "Tamil" },
  { 0xc00, "Telugu" },
  { 0xc80, "Kannada" },
  { 0xd00, "Malayalam" },
  { 0xd81, "Sinhala" },
  { 0xe01, "Thai" },
  { 0xe3f, NULL },
  { 0xe40, "Thai" },
  { 0xe81, "Lao" },
  { 0xf00, "Tibetan" },
  { 0xfd5, NULL },
  { 0xfd9, "Tibetan" },
  { 0x1000, "Myanmar" },
  { 0x10a0, "Georgian" },
  { 0x10fb, NULL },
  { 0x10fc, "Georgian" },
  { 0x1100, "Hangul" },
  { 0x1200, "Ethiopic" },
  { 0x13a0, "Cherokee" },
  { 0x1400, "Canadian_Aboriginal" },
  { 0x1680, "Ogham" },
  { 0x16a0, "Runic" },
  { 0x16eb, NULL },
  { 0x16ee, "Runic" },
  { 0x1700, "Tagalog" },
  { 0x1720, "Hanunoo" },
  { 0x1735, NULL },
  { 0x1740, "Buhid" },
  { 0x1760, "Tagbanwa" },
  { 0x1780, "Khmer" },
  { 0x1800, "Mongolian" },
  { 0x1802, NULL },
  { 0x1804, "Mongolian" },
  { 0x1805, NULL },
  { 0x1806, "Mongolian" },
  { 0x18b0, "Canadian_Aboriginal" },
  { 0x1900, "Limbu" },
  { 0x1950, "Tai_Le" },
  { 0x1980, "New_Tai_Lue" },
  { 0x19e0, "Khmer" },
  { 0x1a00, "Buginese" },
  { 0x1a20, "Tai_Tham" },
  { 0x1ab0, NULL },
  { 0x1b00, "Balinese" },
  { 0x1b80, "Sundanese" },
  { 0x1bc0, "Batak" },
  { 0x1c00, "Lepcha" },
  { 0x1c50, "Ol_Chiki" },
  { 0x1c80, "Cyrillic" },
  { 0x1c90, "Georgian" },
  { 0x1cc0, "Sundanese" },
  { 0x1cd0, NULL },
  { 0x1d26, "Greek" },
  { 0x1d2b, "Cyrillic" },
  { 0x1d2c, NULL },
  { 0x1d5d, "Greek" },
  { 0x1d62, NULL },
  { 0x1d66, "Greek" },
  { 0x1d6b, NULL },
  { 0x1d78, "Cyrillic" },
  { 0x1d79, NULL },
  { 0x1dbf, "Greek" },
  { 0x1dc0, NULL },
  { 0x1f00, "Greek" },
  { 0x10000, "Linear_B" },
  { 0x10100, NULL },
  { 0x10140, "Greek" },
  { 0x10190, NULL },
  { 0x101a0, "Greek" },
  { 0x101d0, NULL },
  { 0x10280, "Lycian" },
  { 0x102a0, "Carian" },
  { 0x102e0, NULL },
  { 0x10300, "Old_Italic" },
  { 0x10330, "Gothic" },
  { 0x10350, "Old_Permic" },
  { 0x10380, "Ugaritic" },
  { 0x103a0, "Old_Persian" },
  { 0x10400, "Deseret" },
  { 0x10450, "Shavian" },
  { 0x10480, "Osmanya" },
  { 0x104b0, "Osage" },
  { 0x10500, "Elbasan" },
  { 0x10530, "Caucasian_Albanian" },
  { 0x10600, "Linear_A" },
  { 0x10800, "Cypriot" },
  { 0x10840, "Imperial_Aramaic" },
  { 0x10860, "Palmyrene" },
  { 0x10880, "Nabataean" },
  { 0x108e0, "Hatran" },
  { 0x10900, "Phoenician" },
  { 0x10920, "Lydian" },
  { 0x10980, "Meroitic_Hieroglyphs" },
  { 0x109a0, "Meroitic_Cursive" },
  { 0x10a00, "Kharoshthi" },
  { 0x10a60, "Old_South_Arabian" },
  { 0x10a80, "Old_North_Arabian" },
  { 0x10ac0, "Manichaean" },
  { 0x10b00, "Avestan" },
  { 0x10b40, "Inscriptional_Parthian" },
  { 0x10b60, "Inscriptional_Pahlavi" },
  { 0x10b80, "Psalter_Pahlavi" },
  { 0x10c00, "Old_Turkic" },
  { 0x10c80, "Old_Hungarian" },
  { 0x10d00, "Hanifi_Rohingya" },
  { 0x10e60, "Arabic" },
  { 0x10e80, "Yezidi" },
  { 0x10f00, "Old_Sogdian" },
  { 0x10f30, "Sogdian" },
  { 0x10fb0, "Chorasmian" },
  { 0x10fe0, "Elymaic" },
  { 0x11000, "Brahmi" },
  { 0x11080, "Kaithi" },
  { 0x110d0, "Sora_Sompeng" },
  { 0x11100, "Chakma" },
  { 0x11150, "Mahajani" },
  { 0x11180, "Sharada" },
  { 0x111e1, "Sinhala" },
  { 0x11200, "Khojki" },
  { 0x11280, "Multani" },
  { 0x112b0, "Khudawadi" },
  { 0x11300, "Grantha" },
  { 0x1133b, NULL },
  { 0x1133c, "Grantha" },
  { 0x11400, "Newa" },
  { 0x11480, "Tirhuta" },
  { 0x11580, "Siddham" },
  { 0x11600, "Modi" },
  { 0x11660, "Mongolian" },
  { 0x11680, "Takri" },
  { 0x11700, "Ahom" },
  { 0x11800, "Dogra" },
  { 0x118a0, "Warang_Citi" },
  { 0x11900, "Dives_Akuru" },
  { 0x119a0, "Nandinagari" },
  { 0x11a00, "Zanabazar_Square" },
  { 0x11a50, "Soyombo" },
  { 0x11ac0, "Pau_Cin_Hau" },
  { 0x11c00, "Bhaiksuki" },
  { 0x11c70, "Marchen" },
  { 0x11d00, "Masaram_Gondi" },
  { 0x11d60, "Gunjala_Gondi" },
  { 0x11ee0, "Makasar" },
  { 0x11fb0, "Lisu" },
  { 0x11fc0, "Tamil" },
  { 0x12000, "Cuneiform" },
  { 0x13000, "Egyptian_Hieroglyphs" },
  { 0x14400, "Anatolian_Hieroglyphs" },
  { 0x16800, "Bamum" },
  { 0x16a40, "Mro" },
  { 0x16ad0, "Bassa_Vah" },
  { 0x16b00, "Pahawh_Hmong" },
  { 0x16e40, "Medefaidrin" },
  { 0x16f00, "Miao" },
  { 0x16fe0, "Tangut" },
  { 0x16fe1, "Nushu" },
  { 0x16fe2, NULL },
  { 0x16fe4, "Khitan_Small_Script" },
  { 0x16ff0, "Han" },
  { 0x17000, "Tangut" },
  { 0x18b00, "Khitan_Small_Script" },
  { 0x18d00, "Tangut" },
  { 0x1b000, "Katakana" },
  { 0x1b001, "Hiragana" },
  { 0x1b164, "Katakana" },
  { 0x1b170, "Nushu" },
  { 0x1bc00, "Duployan" },
  { 0x1bca0, NULL },
  { 0x1d200, "Greek" },
  { 0x1d2e0, NULL },
  { 0x1d800, "SignWriting" },
  { 0x1e000, "Glagolitic" },
  { 0x1e100, "Nyiakeng_Puachue_Hmong" },
  { 0x1e2c0, "Wancho" },
  { 0x1e800, "Mende_Kikakui" },
  { 0x1e900, "Adlam" },
  { 0x1ec71, NULL },
  { 0x1ee00, "Arabic" },
  { 0x1f000, NULL },
  { 0x1f200, "Hiragana" },
  { 0x1f201, NULL },
};
