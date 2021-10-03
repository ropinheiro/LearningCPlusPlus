#pragma once

#include "TypeNamePlayer.h"

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;
#include "PlayWithStrings.h"

//
// Constants
//

//
// Constructors
//
TypeNamePlayer::TypeNamePlayer()
{}

// 
// Common operations
//
// Credits: https://stackoverflow.com/a/20170989
template <class T>
constexpr
std::string_view
TypeNamePlayer::GetTypeName()
{
    using namespace std;
#ifdef __clang__
    string_view p = __PRETTY_FUNCTION__;
    return string_view(p.data() + 34, p.size() - 34 - 1);
#elif defined(__GNUC__)
    string_view p = __PRETTY_FUNCTION__;
#  if __cplusplus < 201402
    return string_view(p.data() + 36, p.size() - 36 - 1);
#  else
    return string_view(p.data() + 49, p.find(';', 49) - 49);
#  endif
#elif defined(_MSC_VER)
    string_view p = __FUNCSIG__;
    // Old code:
    // return string_view(p.data() + 84, p.size() - 84 - 7);
    // I had to tweak the original numbers (see line above) because it was
    // cropping the answer in the wrong places at least using VS2019.
    // I think that's because I put the method inside a class, therefore
    // messing up a bit with the output this code produces :)
    // Note: the 6 at the end is to remove the "(void)" final part.
    string textToSkip = "TypeNamePlayer::GetTypeName";
    int lengthToSkip = 77 + textToSkip.length();
    return string_view(p.data() + lengthToSkip, p.size() - lengthToSkip - 6);
#endif
}

// 
// Main method
//
void TypeNamePlayer::Play()
{
    writeHeader("PLAYING WITH TYPE NAMES!!!");

    int i = 3;
    writeLine("int i:");
    writeLine(GetTypeName<decltype(i)>());

    string j = "lol";
    writeLine("string j:");
    writeLine(GetTypeName<decltype(j)>());

    bool k = true;
    writeLine("bool k:");
    writeLine(GetTypeName<decltype(k)>());

    writeSeparator();
    writeEmptyLine();
}