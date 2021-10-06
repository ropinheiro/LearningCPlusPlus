#include "SharedPointerPlayer.h"

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
SharedPointerPlayer::SharedPointerPlayer()
{
    writeLine("Constructing...");
}

// No need for a destructor, the shared pointer slears everything by itself.

// 
// Common operations
//
void SharedPointerPlayer::AddThing(string name)
{
    thing.reset();
    thing = std::make_shared<SharedPointerThing>();
    thing->someText = name;
    writeLine("New thing! His name is: " + GetThingName());
}

// 
// Main method
//
void SharedPointerPlayer::Play()
{
    writeHeader("PLAYING WITH SHARED POINTERS!!!");

    {
        SharedPointerPlayer player;

        player.AddThing("First");
        string s1 = player.GetThingName();

        player.AddThing("Second");
        writeLine("The thing in s1 is (still): " + s1);
    }

    writeEmptyLine();
}