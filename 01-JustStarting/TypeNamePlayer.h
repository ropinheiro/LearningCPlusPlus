#pragma once

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;
#include "PlayWithStrings.h"

class TypeNamePlayer
{
private:
    template <class T>
    constexpr std::string_view GetTypeName();

public:
    TypeNamePlayer();
    void Play();
};