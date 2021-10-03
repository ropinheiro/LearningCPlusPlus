#pragma once

#include <string>
using std::string_view;

class TypeNamePlayer
{
private:
    template <class T>
    constexpr string_view GetTypeName();

public:
    TypeNamePlayer();
    void Play();
};