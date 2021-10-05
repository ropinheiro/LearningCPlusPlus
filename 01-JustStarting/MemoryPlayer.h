#pragma once

#include <string>
using std::string;

class MemoryPlayer
{
private:
    string someText;

public:
    MemoryPlayer();
    MemoryPlayer(string someText);
    ~MemoryPlayer(void);
    void Play();
    string GetText() const;
};
