#pragma once

#include <array>
#include <vob/sta/huffman.h>

namespace vob::sta::detail
{
	struct InflateDecoderPair
	{
		// Attributes
		HuffmanDecoder<16, 287> m_literal;
		HuffmanDecoder<16, 32> m_distance;
	};

	// TODO : compute when full constexpr support by msvc
	static constexpr std::array<HuffmanEntry<16, 287>, 287> s_huffmanLiteralEntries = { {
		{0x0000, {0b00110000, 8}}
		, {0x0001, {0b00110001, 8}}
		, {0x0002, {0b00110010, 8}}
		, {0x0003, {0b00110011, 8}}
		, {0x0004, {0b00110100, 8}}
		, {0x0005, {0b00110101, 8}}
		, {0x0006, {0b00110110, 8}}
		, {0x0007, {0b00110111, 8}}
		, {0x0008, {0b00111000, 8}}
		, {0x0009, {0b00111001, 8}}
		, {0x000a, {0b00111010, 8}}
		, {0x000b, {0b00111011, 8}}
		, {0x000c, {0b00111100, 8}}
		, {0x000d, {0b00111101, 8}}
		, {0x000e, {0b00111110, 8}}
		, {0x000f, {0b00111111, 8}}
		, {0x0010, {0b01000000, 8}}
		, {0x0011, {0b01000001, 8}}
		, {0x0012, {0b01000010, 8}}
		, {0x0013, {0b01000011, 8}}
		, {0x0014, {0b01000100, 8}}
		, {0x0015, {0b01000101, 8}}
		, {0x0016, {0b01000110, 8}}
		, {0x0017, {0b01000111, 8}}
		, {0x0018, {0b01001000, 8}}
		, {0x0019, {0b01001001, 8}}
		, {0x001a, {0b01001010, 8}}
		, {0x001b, {0b01001011, 8}}
		, {0x001c, {0b01001100, 8}}
		, {0x001d, {0b01001101, 8}}
		, {0x001e, {0b01001110, 8}}
		, {0x001f, {0b01001111, 8}}
		, {0x0020, {0b01010000, 8}}
		, {0x0021, {0b01010001, 8}}
		, {0x0022, {0b01010010, 8}}
		, {0x0023, {0b01010011, 8}}
		, {0x0024, {0b01010100, 8}}
		, {0x0025, {0b01010101, 8}}
		, {0x0026, {0b01010110, 8}}
		, {0x0027, {0b01010111, 8}}
		, {0x0028, {0b01011000, 8}}
		, {0x0029, {0b01011001, 8}}
		, {0x002a, {0b01011010, 8}}
		, {0x002b, {0b01011011, 8}}
		, {0x002c, {0b01011100, 8}}
		, {0x002d, {0b01011101, 8}}
		, {0x002e, {0b01011110, 8}}
		, {0x002f, {0b01011111, 8}}
		, {0x0030, {0b01100000, 8}}
		, {0x0031, {0b01100001, 8}}
		, {0x0032, {0b01100010, 8}}
		, {0x0033, {0b01100011, 8}}
		, {0x0034, {0b01100100, 8}}
		, {0x0035, {0b01100101, 8}}
		, {0x0036, {0b01100110, 8}}
		, {0x0037, {0b01100111, 8}}
		, {0x0038, {0b01101000, 8}}
		, {0x0039, {0b01101001, 8}}
		, {0x003a, {0b01101010, 8}}
		, {0x003b, {0b01101011, 8}}
		, {0x003c, {0b01101100, 8}}
		, {0x003d, {0b01101101, 8}}
		, {0x003e, {0b01101110, 8}}
		, {0x003f, {0b01101111, 8}}
		, {0x0040, {0b01110000, 8}}
		, {0x0041, {0b01110001, 8}}
		, {0x0042, {0b01110010, 8}}
		, {0x0043, {0b01110011, 8}}
		, {0x0044, {0b01110100, 8}}
		, {0x0045, {0b01110101, 8}}
		, {0x0046, {0b01110110, 8}}
		, {0x0047, {0b01110111, 8}}
		, {0x0048, {0b01111000, 8}}
		, {0x0049, {0b01111001, 8}}
		, {0x004a, {0b01111010, 8}}
		, {0x004b, {0b01111011, 8}}
		, {0x004c, {0b01111100, 8}}
		, {0x004d, {0b01111101, 8}}
		, {0x004e, {0b01111110, 8}}
		, {0x004f, {0b01111111, 8}}
		, {0x0050, {0b10000000, 8}}
		, {0x0051, {0b10000001, 8}}
		, {0x0052, {0b10000010, 8}}
		, {0x0053, {0b10000011, 8}}
		, {0x0054, {0b10000100, 8}}
		, {0x0055, {0b10000101, 8}}
		, {0x0056, {0b10000110, 8}}
		, {0x0057, {0b10000111, 8}}
		, {0x0058, {0b10001000, 8}}
		, {0x0059, {0b10001001, 8}}
		, {0x005a, {0b10001010, 8}}
		, {0x005b, {0b10001011, 8}}
		, {0x005c, {0b10001100, 8}}
		, {0x005d, {0b10001101, 8}}
		, {0x005e, {0b10001110, 8}}
		, {0x005f, {0b10001111, 8}}
		, {0x0060, {0b10010000, 8}}
		, {0x0061, {0b10010001, 8}}
		, {0x0062, {0b10010010, 8}}
		, {0x0063, {0b10010011, 8}}
		, {0x0064, {0b10010100, 8}}
		, {0x0065, {0b10010101, 8}}
		, {0x0066, {0b10010110, 8}}
		, {0x0067, {0b10010111, 8}}
		, {0x0068, {0b10011000, 8}}
		, {0x0069, {0b10011001, 8}}
		, {0x006a, {0b10011010, 8}}
		, {0x006b, {0b10011011, 8}}
		, {0x006c, {0b10011100, 8}}
		, {0x006d, {0b10011101, 8}}
		, {0x006e, {0b10011110, 8}}
		, {0x006f, {0b10011111, 8}}
		, {0x0070, {0b10100000, 8}}
		, {0x0071, {0b10100001, 8}}
		, {0x0072, {0b10100010, 8}}
		, {0x0073, {0b10100011, 8}}
		, {0x0074, {0b10100100, 8}}
		, {0x0075, {0b10100101, 8}}
		, {0x0076, {0b10100110, 8}}
		, {0x0077, {0b10100111, 8}}
		, {0x0078, {0b10101000, 8}}
		, {0x0079, {0b10101001, 8}}
		, {0x007a, {0b10101010, 8}}
		, {0x007b, {0b10101011, 8}}
		, {0x007c, {0b10101100, 8}}
		, {0x007d, {0b10101101, 8}}
		, {0x007e, {0b10101110, 8}}
		, {0x007f, {0b10101111, 8}}
		, {0x0080, {0b10110000, 8}}
		, {0x0081, {0b10110001, 8}}
		, {0x0082, {0b10110010, 8}}
		, {0x0083, {0b10110011, 8}}
		, {0x0084, {0b10110100, 8}}
		, {0x0085, {0b10110101, 8}}
		, {0x0086, {0b10110110, 8}}
		, {0x0087, {0b10110111, 8}}
		, {0x0088, {0b10111000, 8}}
		, {0x0089, {0b10111001, 8}}
		, {0x008a, {0b10111010, 8}}
		, {0x008b, {0b10111011, 8}}
		, {0x008c, {0b10111100, 8}}
		, {0x008d, {0b10111101, 8}}
		, {0x008e, {0b10111110, 8}}
		, {0x008f, {0b10111111, 8}}
		, {0x0090, {0b110010000, 9}}
		, {0x0091, {0b110010001, 9}}
		, {0x0092, {0b110010010, 9}}
		, {0x0093, {0b110010011, 9}}
		, {0x0094, {0b110010100, 9}}
		, {0x0095, {0b110010101, 9}}
		, {0x0096, {0b110010110, 9}}
		, {0x0097, {0b110010111, 9}}
		, {0x0098, {0b110011000, 9}}
		, {0x0099, {0b110011001, 9}}
		, {0x009a, {0b110011010, 9}}
		, {0x009b, {0b110011011, 9}}
		, {0x009c, {0b110011100, 9}}
		, {0x009d, {0b110011101, 9}}
		, {0x009e, {0b110011110, 9}}
		, {0x009f, {0b110011111, 9}}
		, {0x00a0, {0b110100000, 9}}
		, {0x00a1, {0b110100001, 9}}
		, {0x00a2, {0b110100010, 9}}
		, {0x00a3, {0b110100011, 9}}
		, {0x00a4, {0b110100100, 9}}
		, {0x00a5, {0b110100101, 9}}
		, {0x00a6, {0b110100110, 9}}
		, {0x00a7, {0b110100111, 9}}
		, {0x00a8, {0b110101000, 9}}
		, {0x00a9, {0b110101001, 9}}
		, {0x00aa, {0b110101010, 9}}
		, {0x00ab, {0b110101011, 9}}
		, {0x00ac, {0b110101100, 9}}
		, {0x00ad, {0b110101101, 9}}
		, {0x00ae, {0b110101110, 9}}
		, {0x00af, {0b110101111, 9}}
		, {0x00b0, {0b110110000, 9}}
		, {0x00b1, {0b110110001, 9}}
		, {0x00b2, {0b110110010, 9}}
		, {0x00b3, {0b110110011, 9}}
		, {0x00b4, {0b110110100, 9}}
		, {0x00b5, {0b110110101, 9}}
		, {0x00b6, {0b110110110, 9}}
		, {0x00b7, {0b110110111, 9}}
		, {0x00b8, {0b110111000, 9}}
		, {0x00b9, {0b110111001, 9}}
		, {0x00ba, {0b110111010, 9}}
		, {0x00bb, {0b110111011, 9}}
		, {0x00bc, {0b110111100, 9}}
		, {0x00bd, {0b110111101, 9}}
		, {0x00be, {0b110111110, 9}}
		, {0x00bf, {0b110111111, 9}}
		, {0x00c0, {0b111000000, 9}}
		, {0x00c1, {0b111000001, 9}}
		, {0x00c2, {0b111000010, 9}}
		, {0x00c3, {0b111000011, 9}}
		, {0x00c4, {0b111000100, 9}}
		, {0x00c5, {0b111000101, 9}}
		, {0x00c6, {0b111000110, 9}}
		, {0x00c7, {0b111000111, 9}}
		, {0x00c8, {0b111001000, 9}}
		, {0x00c9, {0b111001001, 9}}
		, {0x00ca, {0b111001010, 9}}
		, {0x00cb, {0b111001011, 9}}
		, {0x00cc, {0b111001100, 9}}
		, {0x00cd, {0b111001101, 9}}
		, {0x00ce, {0b111001110, 9}}
		, {0x00cf, {0b111001111, 9}}
		, {0x00d0, {0b111010000, 9}}
		, {0x00d1, {0b111010001, 9}}
		, {0x00d2, {0b111010010, 9}}
		, {0x00d3, {0b111010011, 9}}
		, {0x00d4, {0b111010100, 9}}
		, {0x00d5, {0b111010101, 9}}
		, {0x00d6, {0b111010110, 9}}
		, {0x00d7, {0b111010111, 9}}
		, {0x00d8, {0b111011000, 9}}
		, {0x00d9, {0b111011001, 9}}
		, {0x00da, {0b111011010, 9}}
		, {0x00db, {0b111011011, 9}}
		, {0x00dc, {0b111011100, 9}}
		, {0x00dd, {0b111011101, 9}}
		, {0x00de, {0b111011110, 9}}
		, {0x00df, {0b111011111, 9}}
		, {0x00e0, {0b111100000, 9}}
		, {0x00e1, {0b111100001, 9}}
		, {0x00e2, {0b111100010, 9}}
		, {0x00e3, {0b111100011, 9}}
		, {0x00e4, {0b111100100, 9}}
		, {0x00e5, {0b111100101, 9}}
		, {0x00e6, {0b111100110, 9}}
		, {0x00e7, {0b111100111, 9}}
		, {0x00e8, {0b111101000, 9}}
		, {0x00e9, {0b111101001, 9}}
		, {0x00ea, {0b111101010, 9}}
		, {0x00eb, {0b111101011, 9}}
		, {0x00ec, {0b111101100, 9}}
		, {0x00ed, {0b111101101, 9}}
		, {0x00ee, {0b111101110, 9}}
		, {0x00ef, {0b111101111, 9}}
		, {0x00f0, {0b111110000, 9}}
		, {0x00f1, {0b111110001, 9}}
		, {0x00f2, {0b111110010, 9}}
		, {0x00f3, {0b111110011, 9}}
		, {0x00f4, {0b111110100, 9}}
		, {0x00f5, {0b111110101, 9}}
		, {0x00f6, {0b111110110, 9}}
		, {0x00f7, {0b111110111, 9}}
		, {0x00f8, {0b111111000, 9}}
		, {0x00f9, {0b111111001, 9}}
		, {0x00fa, {0b111111010, 9}}
		, {0x00fb, {0b111111011, 9}}
		, {0x00fc, {0b111111100, 9}}
		, {0x00fd, {0b111111101, 9}}
		, {0x00fe, {0b111111110, 9}}
		, {0x00ff, {0b111111111, 9}}
		, {0x0100, {0b0000000, 7}}
		, {0x0101, {0b0000001, 7}}
		, {0x0102, {0b0000010, 7}}
		, {0x0103, {0b0000011, 7}}
		, {0x0104, {0b0000100, 7}}
		, {0x0105, {0b0000101, 7}}
		, {0x0106, {0b0000110, 7}}
		, {0x0107, {0b0000111, 7}}
		, {0x0108, {0b0001000, 7}}
		, {0x0109, {0b0001001, 7}}
		, {0x010a, {0b0001010, 7}}
		, {0x010b, {0b0001011, 7}}
		, {0x010c, {0b0001100, 7}}
		, {0x010d, {0b0001101, 7}}
		, {0x010e, {0b0001110, 7}}
		, {0x010f, {0b0001111, 7}}
		, {0x0110, {0b0010000, 7}}
		, {0x0111, {0b0010001, 7}}
		, {0x0112, {0b0010010, 7}}
		, {0x0113, {0b0010011, 7}}
		, {0x0114, {0b0010100, 7}}
		, {0x0115, {0b0010101, 7}}
		, {0x0116, {0b0010110, 7}}
		, {0x0117, {0b0010111, 7}}
		, {0x0118, {0b11000000, 8}}
		, {0x0119, {0b11000001, 8}}
		, {0x011a, {0b11000010, 8}}
		, {0x011b, {0b11000011, 8}}
		, {0x011c, {0b11000100, 8}}
		, {0x011d, {0b11000101, 8}}
		, {0x011e, {0b11000110, 8}}
	} };

	static constexpr std::array<HuffmanEntry<16, 32>, 32> s_huffmanDistanceEntries = { {
		{0x0000, {0b00000, 5}}
		, {0x0001, {0b00001, 5}}
		, {0x0002, {0b00010, 5}}
		, {0x0003, {0b00011, 5}}
		, {0x0004, {0b00100, 5}}
		, {0x0005, {0b00101, 5}}
		, {0x0006, {0b00110, 5}}
		, {0x0007, {0b00111, 5}}
		, {0x0008, {0b01000, 5}}
		, {0x0009, {0b01001, 5}}
		, {0x000a, {0b01010, 5}}
		, {0x000b, {0b01011, 5}}
		, {0x000c, {0b01100, 5}}
		, {0x000d, {0b01101, 5}}
		, {0x000e, {0b01110, 5}}
		, {0x000f, {0b01111, 5}}
		, {0x0010, {0b10000, 5}}
		, {0x0011, {0b10001, 5}}
		, {0x0012, {0b10010, 5}}
		, {0x0013, {0b10011, 5}}
		, {0x0014, {0b10100, 5}}
		, {0x0015, {0b10101, 5}}
		, {0x0016, {0b10110, 5}}
		, {0x0017, {0b10111, 5}}
		, {0x0018, {0b11000, 5}}
		, {0x0019, {0b11001, 5}}
		, {0x001a, {0b11010, 5}}
		, {0x001b, {0b11011, 5}}
		, {0x001c, {0b11100, 5}}
		, {0x001d, {0b11101, 5}}
		, {0x001e, {0b11110, 5}}
		, {0x001f, {0b11111, 5}}
	} };

	// TODO : in c++20 std::sort is constexpr, else sort it
	static InflateDecoderPair s_inflateDecoderPair = {
		makeHuffmanDecoder(s_huffmanLiteralEntries)
		, makeHuffmanDecoder(s_huffmanDistanceEntries)
	};
}