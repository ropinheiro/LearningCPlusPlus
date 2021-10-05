#include "MemoryPlayer.h"

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;
using std::string_view;
#include "PlayWithStrings.h"

//
// Constants
//

//
// Constructors / Destructors
//
MemoryPlayer::MemoryPlayer()
{}

MemoryPlayer::MemoryPlayer(string someText) : someText(someText)
{
    writeLine("Constructing: " + someText);
}

MemoryPlayer::~MemoryPlayer(void)
{
    writeLine("Destroying: " + someText);
}

// 
// Common operations
//
string MemoryPlayer::GetText() const
{
    return someText;
}

// 
// Main method
//
void MemoryPlayer::Play()
{
    writeHeader("PLAYING WITH MEMORY!!!");

    // This creates a local scope that...
    {
        MemoryPlayer localPlayer("local");
    }
    // ... will be destroyed at the end.

    // This will run the constructor...
    MemoryPlayer* anotherPlayer = new MemoryPlayer("another player");
    // ... and this is some intermediate call...
    writeLine("Getting the text: " + anotherPlayer->GetText());
    // ... and finally this runs the destructor...
    delete anotherPlayer;

    writeEmptyLine();
}