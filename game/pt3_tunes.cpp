#include <Arduino.h>
#include "tunes.h"

const uint8_t mario[] PROGMEM = {
0x50, 0x72, 0x6f, 0x54, 0x72, 0x61, 0x63, 0x6b, 0x65, 0x72, 0x20, 0x33, 0x2e, 0x35, 0x20, 0x63, 
0x6f, 0x6d, 0x70, 0x69, 0x6c, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x6f, 0x66, 0x20, 0x20, 0x20, 
0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x4d, 0x61, 0x72, 0x69, 0x6f, 0x20, 0x28, 0x4c, 0x65, 0x76, 
0x65, 0x6c, 0x20, 0x31, 0x2d, 0x31, 0x29, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x62, 
0x79, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x47, 0x4f, 0x47, 0x49, 0x4e, 0x20, 0x6f, 
0x6e, 0x20, 0x32, 0x32, 0x2e, 0x30, 0x31, 0x2e, 0x32, 0x30, 0x30, 0x32, 0x2e, 0x20, 0x20, 0x20, 
0x20, 0x20, 0x20, 
/* +99 */
0x01, 0x07, 0x0e, 0x01, 
/* +103 */
0xd8, 0x00, 0x00, 0x00, 0x40, 0x04, 0x9e, 0x04, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x05, 0x17, 0x05, 0x2d, 0x05, 0x43, 
0x05, 0x59, 0x05, 0x66, 0x05, 0x7c, 0x05, 0x92, 0x05, 0xa8, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
/* 201(c9) - order */
0x00, 0x03, 0x03, 0x06, 0x06, 0x09, 0x00, 
/* dx */
0x03, 0x03, 0x0c, 0x0c, 0x09, 0x00, 0x0c, 0xff, 0xf6, 0x00, 0x09, 0x01, 0x1d, 0x01, 0x31, 0x01, 
0x5b, 0x01, 0x85, 0x01, 0xaf, 0x01, 0xf8, 0x01, 0x41, 0x02, 0x85, 0x02, 0xc6, 0x02, 0x07, 0x03, 
/* fx */
0x32, 0x03, 0x8b, 0x03, 0xed, 0x03, 0xf0, 0x02, 0xb1, 0x01, 0x84, 0xb1, 0x02, 0x84, 0x84, 0xb1, 
0x01, 0x80, 0xb1, 0x02, 0x84, 0xb1, 0x08, 0x87, 0x00, 0xf0, 0x02, 0xb1, 0x01, 0x7a, 0xb1, 0x02, 
0x7a, 0x7a, 0xb1, 0x01, 0x7a, 0xb1, 0x02, 0x7a, 0xb1, 0x04, 0x7f, 0x7b, 0x00, 0xf0, 0x02, 0xb1, 
0x01, 0x6a, 0xb1, 0x02, 0x6a, 0x6a, 0xb1, 0x01, 0x6a, 0xb1, 0x02, 0x6a, 0xb1, 0x04, 0x7b, 0x6f, 
0x00, 0xf0, 0x02, 0xb1, 0x03, 0x80, 0x7b, 0x78, 0xb1, 0x02, 0x7d, 0x7f, 0xb1, 0x01, 0x7e, 0xb1, 
0x02, 0x7d, 0xf2, 0x04, 0xb1, 0x04, 0x7b, 0xf0, 0x02, 0xb1, 0x02, 0x89, 0xb1, 0x01, 0x85, 0xb1, 
0x02, 0x87, 0x84, 0xb1, 0x01, 0x80, 0x82, 0xb1, 0x03, 0x7f, 0x00, 0xf0, 0x02, 0xb1, 0x03, 0x78, 
0x74, 0x6f, 0xb1, 0x02, 0x74, 0x76, 0xb1, 0x01, 0x75, 0xb1, 0x02, 0x74, 0xf3, 0x04, 0xb1, 0x04, 
0x74, 0xf0, 0x02, 0xb1, 0x02, 0x80, 0xb1, 0x01, 0x7d, 0xb1, 0x02, 0x7f, 0x7d, 0xb1, 0x01, 0x78, 
0x79, 0xb1, 0x03, 0x76, 0x00, 0xf0, 0x02, 0xb1, 0x03, 0x6f, 0x6c, 0x68, 0xb1, 0x02, 0x6d, 0x6f, 
0xb1, 0x01, 0x6e, 0xb1, 0x02, 0x6d, 0xf1, 0x04, 0xb1, 0x04, 0x6c, 0xf0, 0x02, 0xb1, 0x02, 0x79, 
0xb1, 0x01, 0x76, 0xb1, 0x02, 0x78, 0x74, 0xb1, 0x01, 0x71, 0x73, 0xb1, 0x03, 0x6f, 0x00, 0xb1, 
0x02, 0xd0, 0xf0, 0x02, 0xb1, 0x01, 0x87, 0x86, 0x85, 0xb1, 0x02, 0x83, 0x84, 0xb1, 0x01, 0x7c, 
0x7d, 0xb1, 0x02, 0x80, 0xb1, 0x01, 0x7d, 0x80, 0xb1, 0x03, 0x82, 0xb1, 0x01, 0x87, 0x86, 0x85, 
0xb1, 0x02, 0x83, 0x84, 0x8c, 0xb1, 0x01, 0x8c, 0xb1, 0x06, 0x8c, 0xb1, 0x01, 0x87, 0x86, 0x85, 
0xb1, 0x02, 0x83, 0x84, 0xb1, 0x01, 0x7c, 0x7d, 0xb1, 0x02, 0x80, 0xb1, 0x01, 0x7d, 0x80, 0xb1, 
0x03, 0x82, 0x83, 0x82, 0xb1, 0x08, 0x80, 0x00, 0xb1, 0x02, 0xd0, 0xf0, 0x02, 0xb1, 0x01, 0x84, 
0x83, 0x82, 0xb1, 0x02, 0x7f, 0x80, 0xb1, 0x01, 0x78, 0x79, 0xb1, 0x02, 0x7b, 0xb1, 0x01, 0x74, 
0x78, 0xb1, 0x03, 0x79, 0xb1, 0x01, 0x84, 0x83, 0x82, 0xb1, 0x02, 0x7f, 0x80, 0x85, 0xb1, 0x01, 
0x85, 0xb1, 0x06, 0x85, 0xb1, 0x01, 0x84, 0x83, 0x82, 0xb1, 0x02, 0x7f, 0x80, 0xb1, 0x01, 0x78, 
0x79, 0xb1, 0x02, 0x7b, 0xb1, 0x01, 0x74, 0x78, 0xb1, 0x03, 0x79, 0x7c, 0x7e, 0xb1, 0x08, 0x78, 
0x00, 0xf0, 0x02, 0xb1, 0x03, 0x68, 0x6f, 0xb1, 0x02, 0x74, 0xb1, 0x03, 0x6d, 0xb1, 0x01, 0x74, 
0xb1, 0x02, 0x74, 0x6d, 0xb1, 0x03, 0x68, 0x6c, 0xb1, 0x01, 0x6f, 0xb1, 0x02, 0x74, 0x87, 0xb1, 
0x01, 0x87, 0xb1, 0x02, 0x87, 0x6f, 0xb1, 0x03, 0x68, 0x6f, 0xb1, 0x02, 0x74, 0xb1, 0x03, 0x6d, 
0xb1, 0x01, 0x74, 0xb1, 0x02, 0x74, 0x6d, 0x68, 0xb1, 0x03, 0x70, 0x72, 0x74, 0xb1, 0x01, 0x6f, 
0xb1, 0x02, 0x6f, 0x68, 0x00, 0xb1, 0x01, 0x80, 0xb1, 0x02, 0x80, 0x80, 0xb1, 0x01, 0x80, 0xb1, 
0x02, 0x82, 0xb1, 0x01, 0x84, 0xb1, 0x02, 0x80, 0xb1, 0x01, 0x7d, 0xb1, 0x04, 0x7b, 0xb1, 0x01, 
0x80, 0xb1, 0x02, 0x80, 0x80, 0xb1, 0x01, 0x80, 0x82, 0xb1, 0x09, 0x84, 0xb1, 0x01, 0x80, 0xb1, 
0x02, 0x80, 0x80, 0xb1, 0x01, 0x80, 0xb1, 0x02, 0x82, 0xb1, 0x01, 0x84, 0xb1, 0x02, 0x80, 0xb1, 
0x01, 0x7d, 0xb1, 0x04, 0x7b, 0x00, 0xb1, 0x01, 0x7c, 0xb1, 0x02, 0x7c, 0x7c, 0xb1, 0x01, 0x7c, 
0xb1, 0x02, 0x7e, 0xb1, 0x01, 0x7b, 0xb1, 0x02, 0x78, 0xb1, 0x01, 0x78, 0xb1, 0x04, 0x74, 0xb1, 
0x01, 0x7c, 0xb1, 0x02, 0x7c, 0x7c, 0xb1, 0x01, 0x7c, 0x7e, 0xb1, 0x09, 0x7b, 0xb1, 0x01, 0x7c, 
0xb1, 0x02, 0x7c, 0x7c, 0xb1, 0x01, 0x7c, 0xb1, 0x02, 0x7e, 0xb1, 0x01, 0x7b, 0xb1, 0x02, 0x78, 
0xb1, 0x01, 0x78, 0xb1, 0x04, 0x74, 0x00, 0xb1, 0x03, 0x64, 0x6b, 0xb1, 0x02, 0x70, 0xb1, 0x03, 
0x6f, 0x68, 0xb1, 0x02, 0x63, 0xb1, 0x03, 0x64, 0x6b, 0xb1, 0x02, 0x70, 0xb1, 0x03, 0x6f, 0x68, 
0xb1, 0x02, 0x63, 0xb1, 0x03, 0x64, 0x6b, 0xb1, 0x02, 0x70, 0xb1, 0x03, 0x6f, 0x68, 0xb1, 0x02, 
0x63, 0x00, 0xf0, 0x02, 0xb1, 0x01, 0x84, 0xb1, 0x02, 0x80, 0xb1, 0x03, 0x7b, 0xb1, 0x02, 0x7c, 
0xb1, 0x01, 0x7d, 0xb1, 0x02, 0x85, 0xb1, 0x01, 0x85, 0xb1, 0x04, 0x7d, 0xf4, 0x04, 0x7f, 0x45, 
0x89, 0xf0, 0x02, 0xb1, 0x01, 0x84, 0xb1, 0x02, 0x80, 0xb1, 0x01, 0x7d, 0xb1, 0x04, 0x7b, 0xb1, 
0x01, 0x84, 0xb1, 0x02, 0x80, 0xb1, 0x03, 0x7b, 0xb1, 0x02, 0x7c, 0xb1, 0x01, 0x7d, 0xb1, 0x02, 
0x85, 0xb1, 0x01, 0x85, 0xb1, 0x04, 0x7d, 0xb1, 0x01, 0x7f, 0xb1, 0x02, 0x85, 0xb1, 0x01, 0x85, 
0xf6, 0x04, 0xb1, 0x04, 0x85, 0xf0, 0x02, 0xb1, 0x08, 0x80, 0x00, 0xf0, 0x02, 0xb1, 0x01, 0x80, 
0xb1, 0x02, 0x7d, 0xb1, 0x03, 0x78, 0xb1, 0x02, 0x78, 0xb1, 0x01, 0x79, 0xb1, 0x02, 0x80, 0xb1, 
0x01, 0x80, 0xb1, 0x04, 0x79, 0xf4, 0x04, 0x7b, 0x46, 0x85, 0xf0, 0x02, 0xb1, 0x01, 0x80, 0xb1, 
0x02, 0x7d, 0xb1, 0x01, 0x79, 0xb1, 0x04, 0x78, 0xb1, 0x01, 0x80, 0xb1, 0x02, 0x7d, 0xb1, 0x03, 
0x78, 0xb1, 0x02, 0x78, 0xb1, 0x01, 0x79, 0xb1, 0x02, 0x80, 0xb1, 0x01, 0x80, 0xb1, 0x04, 0x79, 
0xb1, 0x01, 0x7b, 0xb1, 0x02, 0x82, 0xb1, 0x01, 0x82, 0xf7, 0x04, 0xb1, 0x04, 0x82, 0xf0, 0x02, 
0xb1, 0x01, 0x7b, 0xb1, 0x02, 0x78, 0xb1, 0x01, 0x78, 0xb1, 0x04, 0x74, 0x00, 0xf0, 0x02, 0xb1, 
0x03, 0x68, 0xb1, 0x01, 0x6e, 0xb1, 0x02, 0x6f, 0x74, 0x6d, 0x6d, 0xb1, 0x01, 0x74, 0x74, 0xb1, 
0x02, 0x6d, 0xb1, 0x03, 0x6a, 0xb1, 0x01, 0x6d, 0xb1, 0x02, 0x6f, 0x73, 0x6f, 0x6f, 0xb1, 0x01, 
0x74, 0x74, 0xb1, 0x02, 0x6f, 0xb1, 0x03, 0x68, 0xb1, 0x01, 0x6e, 0xb1, 0x02, 0x6f, 0x74, 0x6d, 
0x6d, 0xb1, 0x01, 0x74, 0x74, 0xb1, 0x02, 0x6d, 0xb1, 0x01, 0x6f, 0xb1, 0x02, 0x6f, 0xb1, 0x01, 
0x6f, 0xf8, 0x04, 0xb1, 0x04, 0x6f, 0xf0, 0x02, 0xb1, 0x02, 0x74, 0x6f, 0xb1, 0x04, 0x68, 0x00, 
0x16, 0x17, 0x00, 0x8d, 0x00, 0x00, 0x00, 0x8d, 0x00, 0x00, 0x00, 0x8d, 0x00, 0x00, 0x00, 0x8c, 
0x00, 0x00, 0x00, 0x8c, 0x00, 0x00, 0x00, 0x89, 0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00, 0x84, 
0x00, 0x00, 0x00, 0x83, 0x00, 0x00, 0x00, 0x83, 0x00, 0x00, 0x00, 0x83, 0x00, 0x00, 0x00, 0x82, 
0x00, 0x00, 0x00, 0x82, 0x00, 0x00, 0x00, 0x82, 0x00, 0x00, 0x00, 0x85, 0x00, 0x00, 0x00, 0x85, 
0x00, 0x00, 0x00, 0x85, 0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00, 0x83, 0x00, 0x00, 0x00, 0x81, 
0x00, 0x00, 0x00, 0x81, 0x00, 0x00, 0x00, 0x81, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x1d, 
0x00, 0x8d, 0x00, 0x00, 0x00, 0x8d, 0x00, 0x00, 0x00, 0x8d, 0x00, 0x00, 0x00, 0x8c, 0x00, 0x00, 
0x00, 0x8c, 0x00, 0x00, 0x00, 0x89, 0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00, 0x85, 0x00, 0x00, 
0x00, 0x85, 0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00, 0x8d, 0x00, 0x00, 0x00, 0x8d, 0x00, 0x00, 
0x00, 0x8d, 0x00, 0x00, 0x00, 0x8c, 0x00, 0x00, 0x00, 0x8c, 0x00, 0x00, 0x00, 0x89, 0x00, 0x00, 
0x00, 0x84, 0x00, 0x00, 0x00, 0x85, 0x00, 0x00, 0x00, 0x85, 0x00, 0x00, 0x00, 0x8d, 0x00, 0x00, 
0x00, 0x8d, 0x00, 0x00, 0x00, 0x8d, 0x00, 0x00, 0x00, 0x8c, 0x00, 0x00, 0x00, 0x8c, 0x00, 0x00, 
0x00, 0x88, 0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00, 0x85, 0x00, 0x00, 0x00, 0x85, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x13, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x0c, 0x13, 0x14, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 
0x09, 0x09, 0x0c, 0x13, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 
0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x0b, 0x0a, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x13, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfc, 0x13, 0x14, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xfd, 0x13, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xfe, 
0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfd, 0x13, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x04,
};

const uint8_t cantina[] PROGMEM = {
0x50, 0x72, 0x6f, 0x54, 0x72, 0x61, 0x63, 0x6b, 0x65, 0x72, 0x20, 0x33, 0x2e, 0x34, 0x20, 0x63, 
0x6f, 0x6d, 0x70, 0x69, 0x6c, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x6f, 0x66, 0x20, 0x49, 0x6e, 
0x20, 0x53, 0x74, 0x61, 0x72, 0x20, 0x57, 0x61, 0x72, 0x73, 0x20, 0x50, 0x55, 0x42, 0x20, 0x20, 
0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x62, 
0x79, 0x20, 0x4d, 0x61, 0x73, 0x74, 0x2f, 0x46, 0x74, 0x4c, 0x20, 0x31, 0x32, 0x2e, 0x30, 0x32, 
0x2e, 0x39, 0x39, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
0x20, 0x20, 0x20, 0x01, 0x06, 0x07, 0x00, 0xd1, 0x00, 0x00, 0x00, 0x60, 0x06, 0x00, 0x00, 0xbe, 
0x06, 0x00, 0x00, 0x28, 0x07, 0x8e, 0x07, 0x14, 0x08, 0x9a, 0x08, 0x00, 0x00, 0xa8, 0x08, 0x00, 
0x00, 0xe6, 0x08, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0x08, 0x01, 0x09, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x09, 0x0d, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x09, 0x00, 0x03, 0x09, 0x06, 0x0c, 0x06, 0x0f, 
0xff, 0xf5, 0x00, 0x7d, 0x01, 0x02, 0x02, 0x6b, 0x02, 0xaf, 0x02, 0xf8, 0x02, 0x43, 0x03, 0x89, 
0x03, 0xcc, 0x03, 0x02, 0x04, 0x4a, 0x04, 0x95, 0x04, 0xd4, 0x04, 0x18, 0x05, 0x5e, 0x05, 0x95, 
0x05, 0xdd, 0x05, 0x20, 0x06, 0xf0, 0x1e, 0xbf, 0x00, 0x2f, 0xb1, 0x02, 0x7f, 0x10, 0x0e, 0x80, 
0x1e, 0x00, 0x20, 0x1e, 0x86, 0x10, 0x0e, 0x80, 0x1e, 0x00, 0x2f, 0x1e, 0x7f, 0x10, 0x0e, 0x80, 
0x1e, 0x00, 0x20, 0x1e, 0x86, 0x10, 0x0e, 0x80, 0x1e, 0x00, 0x2f, 0x1e, 0x7f, 0x10, 0x0e, 0x80, 
0x1e, 0x00, 0x35, 0x1e, 0x7d, 0x10, 0x0e, 0x80, 0x1e, 0x00, 0x28, 0x1e, 0x82, 0x10, 0x0e, 0x80, 
0x1e, 0x00, 0x2f, 0x1e, 0x7f, 0x10, 0x0e, 0x80, 0x1e, 0x00, 0x2f, 0x1e, 0x7f, 0x10, 0x0e, 0x80, 
0x1e, 0x00, 0x20, 0x1e, 0x86, 0x10, 0x0e, 0x80, 0x1e, 0x00, 0x2f, 0x1e, 0x7f, 0x10, 0x0e, 0x80, 
0x1e, 0x00, 0x20, 0x1e, 0x86, 0x10, 0x0e, 0x80, 0x1e, 0x00, 0x23, 0x1e, 0x84, 0x10, 0x0e, 0x80, 
0x1e, 0x00, 0x23, 0x1e, 0x84, 0x10, 0x0e, 0x80, 0x1e, 0x00, 0x35, 0x1e, 0x7d, 0x1e, 0x00, 0x2f, 
0x10, 0x7f, 0x1e, 0x00, 0x2d, 0x1e, 0x80, 0x1e, 0x00, 0x2a, 0x10, 0x81, 0x00, 0xff, 0x14, 0xcf, 
0xb1, 0x01, 0x85, 0xcb, 0x85, 0xcf, 0x8a, 0xcb, 0x85, 0xcf, 0x85, 0xcb, 0x8a, 0xcf, 0x8a, 0xcb, 
0x85, 0xce, 0x85, 0xdc, 0x8a, 0xcd, 0xd0, 0xcf, 0x85, 0xca, 0xd0, 0xc9, 0xd0, 0xc8, 0xd0, 0xc7, 
0xd0, 0xda, 0xcf, 0x85, 0x8a, 0x85, 0x8a, 0xcb, 0x8a, 0xcf, 0x84, 0x83, 0x82, 0xdc, 0x81, 0xcd, 
0xd0, 0xda, 0xca, 0x80, 0x81, 0xdc, 0xcf, 0x7e, 0xca, 0xd0, 0xc9, 0xd0, 0xc8, 0xd0, 0xda, 0xcf, 
0x85, 0xcb, 0x7e, 0xcf, 0x8a, 0xcb, 0x85, 0xcf, 0x85, 0xcb, 0x8a, 0xcf, 0x8a, 0xcb, 0x85, 0xcf, 
0x85, 0x8a, 0xcb, 0x85, 0xdc, 0xcf, 0x85, 0xca, 0xd0, 0xc9, 0xd0, 0xc8, 0xd0, 0xc7, 0xd0, 0xda, 
0xcf, 0x83, 0xcb, 0x82, 0xdc, 0xcf, 0x83, 0xce, 0xd0, 0xcd, 0xd0, 0xda, 0xcf, 0x82, 0x83, 0xcb, 
0x82, 0xcf, 0x88, 0xdc, 0x86, 0xcc, 0xd0, 0xcf, 0x85, 0xca, 0xd0, 0xc9, 0xd0, 0xcf, 0x83, 0xcc, 
0xd0, 0x00, 0xf7, 0x14, 0xca, 0xb1, 0x02, 0x7b, 0x41, 0xcd, 0x90, 0x47, 0xca, 0x7b, 0x41, 0xcd, 
0x90, 0x47, 0xca, 0xb1, 0x01, 0x7b, 0xb1, 0x02, 0x7a, 0x7b, 0xb1, 0x01, 0x7a, 0xb1, 0x02, 0x7b, 
0x7b, 0xb1, 0x01, 0x7b, 0xb1, 0x02, 0x7a, 0xb1, 0x01, 0x7a, 0x78, 0xc9, 0x76, 0xb1, 0x02, 0x73, 
0x46, 0xcd, 0x87, 0x47, 0xca, 0x6f, 0x41, 0xcd, 0x90, 0x47, 0xca, 0x7b, 0x41, 0xcd, 0x90, 0x47, 
0xca, 0x7b, 0x41, 0xcd, 0x90, 0x47, 0xca, 0xb1, 0x01, 0x7b, 0xb1, 0x02, 0x7a, 0x7b, 0xb1, 0x01, 
0x7a, 0xb1, 0x02, 0x7b, 0x78, 0xb1, 0x01, 0x78, 0x77, 0x78, 0x77, 0xb1, 0x02, 0x78, 0xb1, 0x01, 
0x76, 0xb1, 0x02, 0x74, 0xb1, 0x03, 0x73, 0xb1, 0x02, 0x71, 0x00, 0xf0, 0x1e, 0xbf, 0x00, 0x2f, 
0xb1, 0x02, 0x7f, 0x10, 0x0e, 0x80, 0x1e, 0x00, 0x20, 0x1e, 0x86, 0x10, 0x0e, 0x80, 0x1e, 0x00, 
0x2f, 0x1e, 0x7f, 0x10, 0x0e, 0x80, 0x1e, 0x00, 0x20, 0x1e, 0x86, 0x10, 0x0e, 0x80, 0x1e, 0x00, 
0x35, 0x1e, 0x7d, 0x10, 0x0e, 0x80, 0x1e, 0x00, 0x35, 0x1e, 0x7d, 0x10, 0x0e, 0x80, 0x1e, 0x00, 
0x28, 0x1e, 0x82, 0x10, 0x0e, 0x80, 0x1e, 0x00, 0x2f, 0x1e, 0x7f, 0x10, 0x0e, 0x80, 0x00, 0xff, 
0x14, 0xcf, 0xb1, 0x01, 0x85, 0xcb, 0x85, 0xcf, 0x8a, 0xcb, 0x85, 0xcf, 0x85, 0xcb, 0x8a, 0xcf, 
0x8a, 0xcb, 0x85, 0xce, 0x85, 0xdc, 0xcf, 0x8a, 0xca, 0xd0, 0xcf, 0x85, 0xca, 0xd0, 0xc9, 0xd0, 
0xc8, 0xd0, 0xc7, 0xd0, 0xda, 0xcf, 0x88, 0xca, 0x88, 0xdc, 0xcf, 0x88, 0xcd, 0xd0, 0xcc, 0xd0, 
0xda, 0xcf, 0x85, 0x83, 0xcb, 0x85, 0xdc, 0xcf, 0x81, 0xcd, 0xd0, 0xcc, 0xd0, 0xcb, 0xd0, 0xcf, 
0x7e, 0xcd, 0xd0, 0xcc, 0xd0, 0xcb, 0xd0, 0x00, 0xf7, 0x14, 0xca, 0xb1, 0x02, 0x7b, 0x41, 0xcd, 
0x90, 0x47, 0xca, 0x7b, 0x41, 0xcd, 0x90, 0x47, 0xca, 0xb1, 0x01, 0x7b, 0xb1, 0x02, 0x7a, 0x7b, 
0xb1, 0x01, 0x7a, 0xb1, 0x02, 0x7b, 0xd3, 0xb1, 0x01, 0x86, 0xc6, 0xd0, 0xca, 0x86, 0xc9, 0xd0, 
0xc8, 0xd0, 0xda, 0xca, 0x84, 0xd3, 0xb1, 0x02, 0x86, 0xb1, 0x01, 0x87, 0xc8, 0xd0, 0xf6, 0x14, 
0xcd, 0xb1, 0x02, 0x87, 0xf7, 0x06, 0xca, 0xb1, 0x01, 0x84, 0xc8, 0xd0, 0xf1, 0x14, 0xcd, 0xb1, 
0x02, 0x84, 0x00, 0xf0, 0x1e, 0xbf, 0x00, 0x2f, 0xb1, 0x02, 0x7f, 0x10, 0x0e, 0x80, 0x1e, 0x00, 
0x20, 0x1e, 0x86, 0x10, 0x0e, 0x80, 0x1e, 0x00, 0x2f, 0x1e, 0x7f, 0x10, 0x0e, 0x80, 0x1e, 0x00, 
0x20, 0x1e, 0x86, 0x10, 0x0e, 0x80, 0x1e, 0x00, 0x2f, 0x1e, 0x7f, 0x10, 0x0e, 0x80, 0x1e, 0x00, 
0x20, 0x1e, 0x86, 0x10, 0x0e, 0x80, 0x1e, 0x00, 0x2f, 0x1e, 0x7f, 0x1e, 0x00, 0x21, 0x10, 0xb1, 
0x04, 0x85, 0xbf, 0x00, 0x20, 0xb1, 0x02, 0x86, 0x00, 0xb1, 0x01, 0xd0, 0xff, 0x14, 0xcf, 0x8a, 
0x85, 0xcb, 0x8a, 0xcf, 0x8a, 0xcb, 0x8a, 0xdc, 0xcd, 0x85, 0xcc, 0xd0, 0xcb, 0xd0, 0xda, 0xcf, 
0x8a, 0x85, 0xcb, 0x8a, 0xcf, 0x8a, 0xcb, 0x85, 0xdc, 0xcd, 0x85, 0xcc, 0xd0, 0xcb, 0xd0, 0xda, 
0xcf, 0x8a, 0x85, 0xcb, 0x8a, 0xcf, 0x8a, 0x85, 0x84, 0xdc, 0x81, 0xcd, 0xd0, 0xcc, 0xd0, 0xcb, 
0xd0, 0xcf, 0x7e, 0xca, 0xd0, 0xc7, 0xd0, 0xc3, 0xd0, 0xc2, 0xd0, 0x00, 0xb1, 0x01, 0xd0, 0xf7, 
0x14, 0xca, 0x87, 0x87, 0x86, 0xb1, 0x02, 0x87, 0xb1, 0x03, 0x84, 0xb1, 0x01, 0x87, 0x87, 0x86, 
0xb1, 0x02, 0x87, 0xb1, 0x03, 0x84, 0xb1, 0x01, 0x87, 0x87, 0x86, 0x84, 0x7f, 0x7d, 0xd3, 0xcc, 
0x87, 0xcb, 0xd0, 0xca, 0xd0, 0xc9, 0xd0, 0xcc, 0x84, 0xcb, 0xd0, 0xca, 0xd0, 0xc9, 0xd0, 0xc8, 
0xd0, 0x00, 0xf0, 0x1e, 0xbf, 0x00, 0x1e, 0xb1, 0x02, 0x87, 0x10, 0x0e, 0x80, 0x1e, 0x00, 0x1e, 
0x1e, 0x87, 0x10, 0x0e, 0x80, 0x1e, 0x00, 0x28, 0x1e, 0x82, 0x10, 0x0e, 0x80, 0x1e, 0x00, 0x2f, 
0x1e, 0x7f, 0x10, 0x0e, 0x80, 0x1e, 0x00, 0x21, 0x1e, 0x85, 0x10, 0x0e, 0x80, 0x1e, 0x00, 0x35, 
0x1e, 0x7d, 0x10, 0x0e, 0x80, 0x1e, 0x00, 0x28, 0x1e, 0x82, 0x1e, 0x00, 0x2a, 0x10, 0x81, 0x1e, 
0x00, 0x2f, 0x1e, 0x7f, 0x1e, 0x00, 0x35, 0x10, 0x7d, 0x00, 0xff, 0x14, 0xcf, 0xb1, 0x01, 0x7e, 
0xdc, 0x7e, 0xce, 0xd0, 0xda, 0xcf, 0x80, 0xdc, 0x81, 0xce, 0xd0, 0xcd, 0xd0, 0xda, 0xcf, 0x84, 
0xdc, 0x85, 0xce, 0xd0, 0xcd, 0xd0, 0xda, 0xcf, 0x87, 0xdc, 0xb1, 0x02, 0x88, 0xce, 0xb1, 0x01, 
0xd0, 0xcd, 0xd0, 0xda, 0xcf, 0x8b, 0xcb, 0x8b, 0xcf, 0x8a, 0xcb, 0x8b, 0xcf, 0x84, 0x85, 0xcd, 
0xd0, 0xdc, 0xcf, 0x81, 0xce, 0xd0, 0xcd, 0xd0, 0xc7, 0xd0, 0xc6, 0xd0, 0xc3, 0xd0, 0xc2, 0xd0, 
0xc1, 0xb1, 0x02, 0xd0, 0x00, 0xf7, 0x14, 0xcb, 0xb1, 0x01, 0x74, 0x75, 0x76, 0xcc, 0x77, 0x78, 
0x79, 0xcd, 0x7a, 0x7b, 0x7c, 0xce, 0x7d, 0x7e, 0x7f, 0xcf, 0x80, 0xce, 0x81, 0xcd, 0x82, 0xcc, 
0x83, 0xf0, 0x0a, 0xcd, 0x80, 0xca, 0xd0, 0xcd, 0x80, 0xca, 0xd0, 0xcd, 0x80, 0x80, 0xcc, 0xd0, 
0xcf, 0x80, 0xce, 0xb1, 0x02, 0xd0, 0xd7, 0xcd, 0xb1, 0x01, 0x50, 0x50, 0xcc, 0xb1, 0x02, 0x50, 
0xd6, 0xce, 0x54, 0x00, 0xf0, 0x1e, 0xbf, 0x00, 0x2f, 0xb1, 0x02, 0x7f, 0x10, 0x0e, 0x80, 0x1e, 
0x00, 0x20, 0x1e, 0x86, 0x10, 0x0e, 0x80, 0x1e, 0x00, 0x2f, 0x1e, 0x7f, 0x10, 0x0e, 0x80, 0x1e, 
0x00, 0x20, 0x1e, 0x86, 0x10, 0x0e, 0x80, 0x1e, 0x00, 0x2f, 0x1e, 0x7f, 0x10, 0x0e, 0x80, 0x1e, 
0x00, 0x20, 0x1e, 0x86, 0x10, 0x0e, 0x80, 0x1e, 0x00, 0x32, 0x1e, 0x7e, 0x10, 0x0e, 0x7f, 0x1e, 
0x00, 0x35, 0x1e, 0x7d, 0x10, 0x0e, 0x81, 0x00, 0xc1, 0xb1, 0x01, 0xd0, 0xff, 0x14, 0xcf, 0x8a, 
0x85, 0xcb, 0x8a, 0xcf, 0x8a, 0xcb, 0x8a, 0xdc, 0xcd, 0x85, 0xcc, 0xd0, 0xcb, 0xd0, 0xda, 0xcf, 
0x8a, 0x85, 0xcb, 0x8a, 0xcf, 0x8a, 0xcb, 0x85, 0xdc, 0xcd, 0x85, 0xcc, 0xd0, 0xcb, 0xd0, 0xda, 
0xcf, 0x8a, 0xb1, 0x02, 0x85, 0xb1, 0x01, 0x8a, 0x8a, 0x85, 0xdc, 0xcd, 0x89, 0xcc, 0xd0, 0xcb, 
0xd0, 0xca, 0xd0, 0xcd, 0x85, 0xcc, 0xd0, 0xcb, 0xd0, 0xca, 0xd0, 0xc9, 0xd0, 0x00, 0xc7, 0xb1, 
0x01, 0xd0, 0xf7, 0x14, 0xca, 0x87, 0x87, 0x86, 0xb1, 0x02, 0x87, 0xb1, 0x03, 0x84, 0xb1, 0x01, 
0x87, 0x87, 0x86, 0xb1, 0x02, 0x87, 0xb1, 0x03, 0x84, 0xb1, 0x01, 0x87, 0x87, 0x86, 0x87, 0x84, 
0x7f, 0xd3, 0xcc, 0x83, 0xcb, 0xd0, 0xca, 0xd0, 0xc9, 0xd0, 0xcc, 0x82, 0xcb, 0xd0, 0xca, 0xd0, 
0xc9, 0xd0, 0xc8, 0xd0, 0x00, 0xf0, 0x1e, 0xbf, 0x00, 0x1e, 0xb1, 0x02, 0x87, 0x10, 0x0e, 0x80, 
0x1e, 0x00, 0x1c, 0x1e, 0x88, 0x10, 0x0e, 0x80, 0x1e, 0x00, 0x1b, 0x1e, 0x89, 0x10, 0x0e, 0x80, 
0x1e, 0x00, 0x2f, 0x1e, 0x7f, 0x10, 0x0e, 0x80, 0x1e, 0x00, 0x21, 0x1e, 0x85, 0x10, 0x0e, 0x80, 
0x1e, 0x00, 0x35, 0x1e, 0x7d, 0x10, 0x0e, 0x80, 0x1e, 0x00, 0x28, 0x1e, 0x82, 0x1e, 0x00, 0x2a, 
0x10, 0x81, 0x1e, 0x00, 0x2f, 0x1e, 0x7f, 0x1e, 0x00, 0x35, 0x10, 0x7d, 0x00, 0xff, 0x14, 0xcf, 
0xb1, 0x01, 0x86, 0x86, 0xb1, 0x02, 0x86, 0xb1, 0x01, 0x87, 0x87, 0xb1, 0x02, 0x87, 0xb1, 0x01, 
0x88, 0x88, 0xcd, 0xd0, 0xdc, 0x8a, 0xcc, 0xd0, 0xcb, 0xd0, 0xca, 0xd0, 0xc9, 0xd0, 0xda, 0xcf, 
0x8b, 0xcb, 0x8b, 0xcf, 0x8a, 0xcb, 0x8b, 0xcf, 0x84, 0x85, 0xcd, 0xd0, 0xdc, 0xcf, 0x81, 0xce, 
0xd0, 0xcd, 0xd0, 0xc7, 0xd0, 0xc6, 0xd0, 0xc3, 0xd0, 0xc2, 0xd0, 0xc1, 0xb1, 0x02, 0xd0, 0x00, 
0xf7, 0x14, 0xcb, 0xb1, 0x02, 0x74, 0xb1, 0x01, 0x74, 0xcc, 0xd0, 0xb1, 0x02, 0x75, 0xcd, 0x75, 
0xb1, 0x01, 0x76, 0xce, 0xb1, 0x02, 0x77, 0xd3, 0xcc, 0xb1, 0x01, 0x78, 0xcb, 0xd0, 0xca, 0xd0, 
0xc9, 0xd0, 0xc8, 0xd0, 0xf0, 0x0a, 0xcd, 0x80, 0xca, 0xd0, 0xcd, 0x80, 0xca, 0xd0, 0xcd, 0x80, 
0x80, 0xcc, 0xd0, 0xcf, 0x80, 0xce, 0xd0, 0xd1, 0xcf, 0x6f, 0xb1, 0x02, 0x6f, 0x6f, 0x6f, 0x00, 
0x16, 0x17, 0x00, 0x0f, 0x29, 0xfe, 0x00, 0x18, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x17, 
0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00, 0x16, 0x00, 0x00, 0x00, 0x16, 0x00, 0x00, 0x00, 0x17, 
0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x17, 
0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00, 0x16, 0x00, 0x00, 0x00, 0x16, 0x00, 0x00, 0x00, 0x15, 
0x00, 0x00, 0x00, 0x15, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x13, 
0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x01, 0x90, 0x00, 0x00, 0x14, 0x1a, 
0x01, 0x8e, 0x00, 0x00, 0x01, 0x8e, 0x00, 0x00, 0x01, 0x8d, 0x00, 0x00, 0x01, 0x8d, 0x00, 0x00, 
0x01, 0x8c, 0x00, 0x00, 0x01, 0x8c, 0x00, 0x00, 0x01, 0x8c, 0x00, 0x00, 0x01, 0x8c, 0x00, 0x00, 
0x01, 0x8c, 0x00, 0x00, 0x01, 0x8c, 0x00, 0x00, 0x01, 0x8c, 0x00, 0x00, 0x01, 0x8c, 0x00, 0x00, 
0x01, 0x8c, 0x00, 0x00, 0x01, 0x8c, 0x00, 0x00, 0x01, 0x8c, 0x00, 0x00, 0x01, 0x8c, 0x00, 0x00, 
0x01, 0x8c, 0x00, 0x00, 0x01, 0x8c, 0x00, 0x00, 0x01, 0x8c, 0x00, 0x00, 0x01, 0x8c, 0x00, 0x00, 
0x01, 0x8c, 0x01, 0x00, 0x01, 0x8c, 0x03, 0x00, 0x01, 0x8c, 0x01, 0x00, 0x01, 0x8c, 0xff, 0xff, 
0x01, 0x8c, 0xfd, 0xff, 0x01, 0x8c, 0xff, 0xff, 0x18, 0x19, 0x05, 0x0f, 0x00, 0x01, 0x07, 0x0e, 
0x80, 0x01, 0x09, 0x0e, 0x00, 0x02, 0x0b, 0x1e, 0x00, 0x00, 0x0b, 0x1e, 0x00, 0x00, 0x01, 0x1e, 
0x00, 0x00, 0x01, 0x1e, 0x00, 0x00, 0x01, 0x1d, 0x00, 0x00, 0x01, 0x1d, 0x00, 0x00, 0x01, 0x1d, 
0x00, 0x00, 0x01, 0x1c, 0x00, 0x00, 0x01, 0x1c, 0x00, 0x00, 0x01, 0x1c, 0x00, 0x00, 0x01, 0x1c, 
0x00, 0x00, 0x01, 0x1b, 0x00, 0x00, 0x01, 0x1a, 0x00, 0x00, 0x01, 0x19, 0x00, 0x00, 0x01, 0x18, 
0x00, 0x00, 0x01, 0x17, 0x00, 0x00, 0x01, 0x16, 0x00, 0x00, 0x01, 0x14, 0x00, 0x00, 0x01, 0x13, 
0x00, 0x00, 0x01, 0x12, 0x00, 0x00, 0x01, 0x11, 0x00, 0x00, 0x01, 0x90, 0x00, 0x00, 0x20, 0x21, 
0x09, 0x1e, 0x00, 0x00, 0x0b, 0x1d, 0x00, 0x00, 0x0b, 0x1d, 0x00, 0x00, 0x09, 0x1c, 0x00, 0x00, 
0x05, 0x1c, 0x00, 0x00, 0x03, 0x1a, 0x00, 0x00, 0x03, 0x19, 0x00, 0x00, 0x03, 0x18, 0x00, 0x00, 
0x01, 0x17, 0x00, 0x00, 0x01, 0x17, 0x00, 0x00, 0x01, 0x16, 0x00, 0x00, 0x01, 0x15, 0x00, 0x00, 
0x01, 0x15, 0x00, 0x00, 0x01, 0x14, 0x00, 0x00, 0x01, 0x13, 0x00, 0x00, 0x01, 0x12, 0x00, 0x00, 
0x01, 0x11, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 
0x01, 0x80, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 
0x01, 0x80, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 
0x01, 0x80, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 
0x01, 0x80, 0x00, 0x00, 0x20, 0x21, 0x01, 0x1d, 0x00, 0x00, 0x01, 0x1c, 0x00, 0x00, 0x01, 0x1a, 
0x00, 0x00, 0x01, 0x18, 0x00, 0x00, 0x01, 0x16, 0x00, 0x00, 0x01, 0x16, 0x00, 0x00, 0x01, 0x15, 
0x00, 0x00, 0x01, 0x15, 0x00, 0x00, 0x01, 0x13, 0x00, 0x00, 0x01, 0x13, 0x00, 0x00, 0x01, 0x00, 
0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x01, 0x80, 
0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x01, 0x80, 
0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x01, 0x80, 
0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x01, 0x80, 
0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x01, 0x80, 
0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x02, 0x03, 0x01, 0x1d, 0x00, 0x00, 
0x01, 0x19, 0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0x0e, 0x0f, 0x00, 0x8f, 0x00, 0x00, 0x00, 0x8e, 
0x00, 0x00, 0x00, 0x8d, 0x00, 0x00, 0x00, 0x8c, 0x00, 0x00, 0x00, 0x8b, 0x00, 0x00, 0x00, 0x8a, 
0x00, 0x00, 0x00, 0x89, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x87, 0x00, 0x00, 0x00, 0x86, 
0x00, 0x00, 0x01, 0x85, 0x00, 0x00, 0x01, 0x84, 0x00, 0x00, 0x01, 0x83, 0x00, 0x00, 0x01, 0x82, 
0x00, 0x00, 0x01, 0x81, 0x00, 0x00, 0x03, 0x04, 0x01, 0x8e, 0x00, 0x00, 0x01, 0x8e, 0x00, 0x00, 
0x01, 0x8d, 0x00, 0x00, 0x01, 0x8c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x90, 0x00, 0x00, 0x00, 0x01, 
0x00, 0x00, 0x04, 0x00, 0xfb, 0xf7, 0xf4, 0x00, 0x04, 0x00, 0xfb, 0xf8, 0xf4, 0x01, 0x02, 0x0c, 
0x00, 0x00, 0x02, 0x06, 0xfa, 
};