// COP3503C: Lab 8 (Color.h)
// Last edited: 11/28/22

#include <iostream>
#pragma once

class Color {
public:
    std::string name;
    int value;

    unsigned char R;
    unsigned char G;
    unsigned char B;

    std::string hexValue;

public:

    Color();

    void SetValue(int _value);
    void SetName(const char *_name);
    //void SetName(std::string &_name);

    // Accessors
    unsigned char GetR() const;
    unsigned char GetG() const;
    unsigned char GetB() const;
    std::string GetHexValue() const;
    std::string GetName() const;

};