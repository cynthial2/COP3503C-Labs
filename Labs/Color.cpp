// COP3503C: Lab 8 (Color.cpp)
// Last edited: 11/28/22

#include "Color.h"

Color::Color() {
    hexValue = "0x------";
    name = "blank";
}
void Color::SetValue(int _value) {
    value = _value;
}
void Color::SetName(const char* _name) {
    name = _name;
    //std::cout << GetName() << std::endl;
}

// Accessors
unsigned char Color::GetR() const {
    // shift to the right by 16
    unsigned char R = (value >> 16);
    // AND result with 255 to see which bits are on
    R &= 255;
    return R;
}
unsigned char Color::GetG() const {
    // shift to the right by 8
    unsigned char G = (value >> 8);
    // AND result with 255 to see which bits are on
    G &= 255;
    return G;
}
unsigned char Color::GetB() const {
    // shift to the right by 0
    unsigned char B = value;
    // AND result with 255 to see which bits are on
    B &= 255;
    return B;
}
char HexHelper(int value) {
    if (value == 0) {
        return '0';
    }
    else if (value == 1) {
        return '1';
    }
    else if (value == 2) {
        return '2';
    }
    else if (value == 3) {
        return '3';
    }
    else if (value == 4) {
        return '4';
    }
    else if (value == 5) {
        return '5';
    }
    else if (value == 6) {
        return '6';
    }
    else if (value == 7) {
        return '7';
    }
    else if (value == 8) {
        return '8';
    }
    else if (value == 9) {
        return '9';
    }
    else if (value == 10) {
        return 'A';
    }
    else if (value == 11) {
        return 'B';
    }
    else if (value == 12) {
        return 'C';
    }
    else if (value == 13) {
        return 'D';
    }
    else if (value == 14) {
        return 'E';
    }
    else if (value == 15) {
        return 'F';
    }
    else {
        return '-';
    }
}
std::string Color::GetHexValue() const {
    // color value divided 16 > 1st digit
    // color value modululus 16 (get remainder) > 2nd digit
    std::string temp = hexValue;
    temp[2] = HexHelper(((int)GetR()) / 16);
    temp[3] = HexHelper(((int)GetR()) % 16);
    temp[4] = HexHelper(((int)GetG()) / 16);
    temp[5] = HexHelper(((int)GetG()) % 16);
    temp[6] = HexHelper(((int)GetB()) / 16);
    temp[7] = HexHelper(((int)GetB()) % 16);
    return temp;
}
std::string Color::GetName() const {
    //std::cout << name.size();
    return name;
}