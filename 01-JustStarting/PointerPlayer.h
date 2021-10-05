#pragma once

#include <string>
using std::string;

class PointerPlayer
{
private:

public:
    PointerPlayer();
    void Play();
    string Obfuscate(string const& text);
};
