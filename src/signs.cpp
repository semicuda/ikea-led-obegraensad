#include "signs.h"

std::vector<int> letterU = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x60, 0x06, 0x60, 0x06, 0x60, 0x06, 0x60, 0x06, 0x60, 0x06, 0x60, 0x07, 0xe0, 0x03, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

std::vector<int> letterR = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xc0, 0x06, 0x60, 0x06, 0x60, 0x06, 0x40, 0x07, 0x80, 0x06, 0x60, 0x06, 0x60, 0x06, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

std::vector<int> degreeSymbol = {
    0x33, 0x00, 0x00};

std::vector<int> minusSymbol = {
    0x00, 0xF0, 0x00};

std::vector<std::vector<int>> smallNumbers = {
    {0x75, 0x55, 0x70}, // 0
    {0x13, 0x11, 0x10}, // 1
    {0x71, 0x74, 0x70}, // 2
    {0x71, 0x71, 0x70}, // 3
    {0x55, 0x71, 0x10}, // 4
    {0x74, 0x71, 0x70}, // 5
    {0x74, 0x75, 0x70}, // 6
    {0x71, 0x11, 0x10}, // 7
    {0x75, 0x75, 0x70}, // 8
    {0x75, 0x71, 0x70}  // 9
};

// bitCount: 8
std::vector<std::vector<int>> bigNumbers = {
    {0x3e, 0x63, 0x73, 0x6b, 0x67, 0x63, 0x3e}, // 0
    {0x03, 0x07, 0x0f, 0x03, 0x03, 0x03, 0x03}, // 1
    {0x7e, 0x03, 0x03, 0x3e, 0x60, 0x63, 0x7f}, // 2
    {0x3e, 0x63, 0x03, 0x1f, 0x03, 0x63, 0x3e}, // 3
    {0x63, 0x63, 0x63, 0x3f, 0x03, 0x03, 0x03}, // 4
    {0x7f, 0x63, 0x60, 0x7e, 0x03, 0x63, 0x3e}, // 5
    {0x3e, 0x63, 0x60, 0x7e, 0x63, 0x63, 0x3e}, // 6
    {0x7f, 0x43, 0x07, 0x0c, 0x18, 0x18, 0x18}, // 7
    {0x3e, 0x63, 0x63, 0x3e, 0x63, 0x63, 0x3e}, // 8
    {0x3e, 0x63, 0x63, 0x3f, 0x03, 0x63, 0x3e}  // 9
};

std::vector<std::vector<int>> oldNumbers = {
    {0b01111000, 0b11111100, 0b11001100, 0b11001100, 0b11001100, 0b11111100, 0b01111000}, // 0
    {0b00110000, 0b01110000, 0b00110000, 0b00110000, 0b00110000, 0b00110000, 0b00110000}, // 1
    {0b01111000, 0b11111100, 0b00001100, 0b00111000, 0b01100000, 0b11111100, 0b11111100}, // 2
    {0b01111000, 0b11111100, 0b00001100, 0b01111100, 0b00001100, 0b11111100, 0b01111000}, // 3
    {0b11001100, 0b11001100, 0b11111100, 0b01111100, 0b00001100, 0b00001100, 0b00001100}, // 4
    {0b11111100, 0b11111100, 0b11000000, 0b11111000, 0b00001100, 0b11111100, 0b11111000}, // 5
    {0b01111000, 0b11111100, 0b11000000, 0b11111000, 0b11001100, 0b11111100, 0b01111000}, // 6
    {0b11111100, 0b11111100, 0b00011000, 0b00110000, 0b00110000, 0b00110000, 0b00110000}, // 7
    {0b01111000, 0b11111100, 0b11001100, 0b01111000, 0b11001100, 0b11111100, 0b01111000}, // 8
    {0b01111000, 0b11111100, 0b11001100, 0b01111100, 0b00001100, 0b11111100, 0b01111000}, // 9
};

std::vector<std::vector<int>> weatherIcons = {
    {0x03, 0x80, 0x06, 0x70, 0x1C, 0x18, 0x32, 0x06, 0x1F, 0xFC},                                     // cloudy
    {0x03, 0x80, 0x06, 0x70, 0x1C, 0x18, 0x30, 0x46, 0x1C, 0x9C, 0x01, 0xC0, 0x00, 0x80, 0x01, 0x00}, // thunderstorm
    {0x04, 0x20, 0x03, 0xc0, 0x0b, 0xd0, 0x03, 0xc0, 0x04, 0x20},                                     // clear
    {0x00, 0x38, 0x07, 0x7C, 0x0C, 0xFC, 0x38, 0x38, 0x62, 0x0C, 0x3F, 0xF8},                         // mostly or partly cloudy
    {0x03, 0x80, 0x06, 0x70, 0x1C, 0x18, 0x32, 0x06, 0x1F, 0xFC, 0x0A, 0x48, 0x0A, 0x48, 0x0A, 0x48}, // rain
    {0x03, 0x80, 0x06, 0x70, 0x1C, 0x18, 0x32, 0x06, 0x1F, 0xFC, 0x05, 0x20, 0x08, 0x48, 0x02, 0x20}, // snow
    {0x03, 0xFC, 0x3F, 0x00, 0x07, 0xFE, 0x7F, 0x00, 0x03, 0xF8, 0x3F, 0x80},                         // fog
};

// system font based on https://github.com/MakeMagazinDE/Obegraensad by DR. ARMIN ZINK
std::vector<std::vector<int>> system6x7 =
    {
        {0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000},
        {0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000},
        {0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000},
        {0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000},
        {0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000},
        {0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000},
        {0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000},
        {0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000},
        {0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000},
        {0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000},
        {0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000},
        {0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000},
        {0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000},
        {0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000},
        {0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000},
        {0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000},
        {0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000},
        {0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000},
        {0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000},
        {0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000},
        {0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000},
        {0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000},
        {0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000},
        {0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000},
        {0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000},
        {0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000},
        {0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000},
        {0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000},
        {0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000},
        {0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000},
        {0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000},
        {0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000},
        {0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000},
        {0b00100000, 0b00100000, 0b00100000, 0b00100000, 0b00100000, 0b00000000, 0b00100000}, // !
        {0b01010000, 0b01010000, 0b01010000, 0b00000000, 0b00000000, 0b00000000, 0b00000000}, // "
        {0b01010000, 0b01010000, 0b11111000, 0b01010000, 0b11111000, 0b01010000, 0b01010000}, // #
        {0b00100000, 0b01111000, 0b10100000, 0b01110000, 0b00101000, 0b11110000, 0b00100000}, // $
        {0b11000000, 0b11001000, 0b00010000, 0b00100000, 0b01000000, 0b10011000, 0b00011000}, // %
        {0b01100000, 0b10010000, 0b10100000, 0b01000000, 0b10101000, 0b10010000, 0b01101000}, // &
        {0b01100000, 0b00100000, 0b01000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000}, // '
        {0b00010000, 0b00100000, 0b01000000, 0b01000000, 0b01000000, 0b00100000, 0b00010000}, // (
        {0b01000000, 0b00100000, 0b00010000, 0b00010000, 0b00010000, 0b00100000, 0b01000000}, // )
        {0b00000000, 0b01010000, 0b00100000, 0b11111000, 0b00100000, 0b01010000, 0b00000000}, // *
        {0b00000000, 0b00100000, 0b00100000, 0b11111000, 0b00100000, 0b00100000, 0b00000000}, // +
        {0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b01100000, 0b00100000, 0b01000000}, // ,
        {0b00000000, 0b00000000, 0b00000000, 0b11111000, 0b00000000, 0b00000000, 0b00000000}, // -
        {0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b01100000, 0b01100000}, // .
        {0b00000000, 0b00001000, 0b00010000, 0b00100000, 0b01000000, 0b10000000, 0b00000000}, // /
        {0b01111000, 0b11111100, 0b11001100, 0b11001100, 0b11001100, 0b11111100, 0b01111000}, // 0
        {0b00110000, 0b01110000, 0b00110000, 0b00110000, 0b00110000, 0b00110000, 0b00110000}, // 1
        {0b01111000, 0b11111100, 0b00001100, 0b00111000, 0b01100000, 0b11111100, 0b11111100}, // 2
        {0b01111000, 0b11111100, 0b00001100, 0b01111100, 0b00001100, 0b11111100, 0b01111000}, // 3
        {0b11001100, 0b11001100, 0b11111100, 0b01111100, 0b00001100, 0b00001100, 0b00001100}, // 4
        {0b11111100, 0b11111100, 0b11000000, 0b11111000, 0b00001100, 0b11111100, 0b11111000}, // 5
        {0b01111000, 0b11111100, 0b11000000, 0b11111000, 0b11001100, 0b11111100, 0b01111000}, // 6
        {0b11111100, 0b11111100, 0b00011000, 0b00110000, 0b00110000, 0b00110000, 0b00110000}, // 7
        {0b01111000, 0b11111100, 0b11001100, 0b01111000, 0b11001100, 0b11111100, 0b01111000}, // 8
        {0b01111000, 0b11111100, 0b11001100, 0b01111100, 0b00001100, 0b11111100, 0b01111000}, // 9
        {0b00000000, 0b01100000, 0b01100000, 0b00000000, 0b01100000, 0b01100000, 0b00000000}, // :
        {0b00000000, 0b01100000, 0b01100000, 0b00000000, 0b01100000, 0b00100000, 0b01000000}, // ;
        {0b00001000, 0b00010000, 0b00100000, 0b01000000, 0b00100000, 0b00010000, 0b00001000}, // <
        {0b00000000, 0b00000000, 0b11111000, 0b00000000, 0b11111000, 0b00000000, 0b00000000}, // =
        {0b10000000, 0b01000000, 0b00100000, 0b00010000, 0b00100000, 0b01000000, 0b10000000}, // >
        {0b01110000, 0b10001000, 0b00001000, 0b00010000, 0b00100000, 0b00000000, 0b00100000}, // ?
        {0b01110000, 0b10001000, 0b00001000, 0b01101000, 0b10101000, 0b10101000, 0b01110000}, // @
        {0b01110000, 0b10001000, 0b10001000, 0b10001000, 0b11111000, 0b10001000, 0b10001000}, // A
        {0b11110000, 0b10001000, 0b10001000, 0b11110000, 0b10001000, 0b10001000, 0b11110000}, // B
        {0b01110000, 0b10001000, 0b10000000, 0b10000000, 0b10000000, 0b10001000, 0b01110000}, // C
        {0b11100000, 0b10010000, 0b10001000, 0b10001000, 0b10001000, 0b10010000, 0b11100000}, // D
        {0b11111000, 0b10000000, 0b10000000, 0b11110000, 0b10000000, 0b10000000, 0b11111000}, // E
        {0b11111000, 0b10000000, 0b10000000, 0b11100000, 0b10000000, 0b10000000, 0b10000000}, // F
        {0b01110000, 0b10001000, 0b10000000, 0b10000000, 0b10011000, 0b10001000, 0b01110000}, // G
        {0b10001000, 0b10001000, 0b10001000, 0b11111000, 0b10001000, 0b10001000, 0b10001000}, // H
        {0b01110000, 0b00100000, 0b00100000, 0b00100000, 0b00100000, 0b00100000, 0b01110000}, // I
        {0b00111000, 0b00010000, 0b00010000, 0b00010000, 0b00010000, 0b10010000, 0b01100000}, // J
        {0b10001000, 0b10010000, 0b10100000, 0b11000000, 0b10100000, 0b10010000, 0b10001000}, // K
        {0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b10000000, 0b11111000}, // L
        {0b10001000, 0b11011000, 0b10101000, 0b10001000, 0b10001000, 0b10001000, 0b10001000}, // M
        {0b10001000, 0b10001000, 0b11001000, 0b10101000, 0b10011000, 0b10001000, 0b10001000}, // N
        {0b01110000, 0b10001000, 0b10001000, 0b10001000, 0b10001000, 0b10001000, 0b01110000}, // O
        {0b11110000, 0b10001000, 0b10001000, 0b11110000, 0b10000000, 0b10000000, 0b10000000}, // P
        {0b01110000, 0b10001000, 0b10001000, 0b10001000, 0b10101000, 0b10010000, 0b01101000}, // Q
        {0b11110000, 0b10001000, 0b10001000, 0b11110000, 0b10100000, 0b10010000, 0b10001000}, // R
        {0b01111000, 0b10000000, 0b10000000, 0b01110000, 0b00001000, 0b00001000, 0b11110000}, // S
        {0b11111000, 0b00100000, 0b00100000, 0b00100000, 0b00100000, 0b00100000, 0b00100000}, // T
        {0b10001000, 0b10001000, 0b10001000, 0b10001000, 0b10001000, 0b10001000, 0b01110000}, // U
        {0b10001000, 0b10001000, 0b10001000, 0b10001000, 0b10001000, 0b01010000, 0b00100000}, // V
        {0b10001000, 0b10001000, 0b10001000, 0b10101000, 0b10101000, 0b11011000, 0b10001000}, // W
        {0b10001000, 0b10001000, 0b01010000, 0b00100000, 0b01010000, 0b10001000, 0b10001000}, // X
        {0b10001000, 0b10001000, 0b01010000, 0b00100000, 0b00100000, 0b00100000, 0b00100000}, // Y
        {0b11111000, 0b00001000, 0b00010000, 0b00100000, 0b01000000, 0b10000000, 0b11111000}, // Z
        {0b00111000, 0b00100000, 0b00100000, 0b00100000, 0b00100000, 0b00100000, 0b00111000}, // [
        {0b00000000, 0b10000000, 0b01000000, 0b00100000, 0b00010000, 0b00001000, 0b00000000}, // "
        {0b11100000, 0b00100000, 0b00100000, 0b00100000, 0b00100000, 0b00100000, 0b11100000}, // ]
        {0b00100000, 0b01010000, 0b10001000, 0b00000000, 0b00000000, 0b00000000, 0b00000000}, // ^
        {0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b11111000}, // _
        {0b01000000, 0b00100000, 0b00010000, 0b00000000, 0b00000000, 0b00000000, 0b00000000}, // `
        {0b00000000, 0b00000000, 0b01110000, 0b00001000, 0b01111000, 0b10001000, 0b01111000}, // a
        {0b10000000, 0b10000000, 0b10110000, 0b11001000, 0b10001000, 0b10001000, 0b11110000}, // b
        {0b00000000, 0b00000000, 0b01110000, 0b10000000, 0b10000000, 0b10001000, 0b01110000}, // c
        {0b00001000, 0b00001000, 0b01101000, 0b10011000, 0b10001000, 0b10001000, 0b01111000}, // d
        {0b00000000, 0b00000000, 0b01110000, 0b10001000, 0b11111000, 0b10000000, 0b01110000}, // e
        {0b00110000, 0b01001000, 0b01000000, 0b11100000, 0b01000000, 0b01000000, 0b01000000}, // f
        {0b00000000, 0b00000000, 0b01111000, 0b10001000, 0b01111000, 0b00001000, 0b00110000}, // g
        {0b10000000, 0b10000000, 0b10110000, 0b11001000, 0b10001000, 0b10001000, 0b10001000}, // h
        {0b00100000, 0b00000000, 0b01100000, 0b00100000, 0b00100000, 0b00100000, 0b01110000}, // i
        {0b00010000, 0b00000000, 0b00110000, 0b00010000, 0b00010000, 0b10010000, 0b01100000}, // j
        {0b01000000, 0b01000000, 0b01001000, 0b01010000, 0b01100000, 0b01010000, 0b01001000}, // k
        {0b01100000, 0b00100000, 0b00100000, 0b00100000, 0b00100000, 0b00100000, 0b01110000}, // l
        {0b00000000, 0b00000000, 0b11010000, 0b10101000, 0b10101000, 0b10001000, 0b10001000}, // m
        {0b00000000, 0b00000000, 0b10110000, 0b11001000, 0b10001000, 0b10001000, 0b10001000}, // n
        {0b00000000, 0b00000000, 0b01110000, 0b10001000, 0b10001000, 0b10001000, 0b01110000}, // o
        {0b00000000, 0b00000000, 0b11110000, 0b10001000, 0b11110000, 0b10000000, 0b10000000}, // p
        {0b00000000, 0b00000000, 0b01101000, 0b10011000, 0b01111000, 0b00001000, 0b00001000}, // q
        {0b00000000, 0b00000000, 0b10110000, 0b11001000, 0b10000000, 0b10000000, 0b10000000}, // r
        {0b00000000, 0b00000000, 0b01110000, 0b10000000, 0b01110000, 0b00001000, 0b11110000}, // s
        {0b01000000, 0b01000000, 0b11100000, 0b01000000, 0b01000000, 0b01001000, 0b00110000}, // t
        {0b00000000, 0b00000000, 0b10001000, 0b10001000, 0b10001000, 0b10011000, 0b01101000}, // u
        {0b00000000, 0b00000000, 0b10001000, 0b10001000, 0b10001000, 0b01010000, 0b00100000}, // v
        {0b00000000, 0b00000000, 0b10001000, 0b10001000, 0b10101000, 0b10101000, 0b01010000}, // w
        {0b00000000, 0b00000000, 0b10001000, 0b01010000, 0b00100000, 0b01010000, 0b10001000}, // x
        {0b00000000, 0b00000000, 0b10001000, 0b10001000, 0b01111000, 0b00001000, 0b01110000}, // y
        {0b00000000, 0b00000000, 0b11111000, 0b00010000, 0b00100000, 0b01000000, 0b11111000}, // z
        {0b00010000, 0b00100000, 0b00100000, 0b01000000, 0b00100000, 0b00100000, 0b00010000}, // {
        {0b00100000, 0b00100000, 0b00100000, 0b00100000, 0b00100000, 0b00100000, 0b00100000}, // |
        {0b01000000, 0b00100000, 0b00100000, 0b00010000, 0b00100000, 0b00100000, 0b01000000}, // }
        {0b00000000, 0b00100000, 0b00010000, 0b11111000, 0b00010000, 0b00100000, 0b00000000}, // ->
        {0b00000000, 0b00100000, 0b01000000, 0b11111000, 0b01000000, 0b00100000, 0b00000000}, // <-
};