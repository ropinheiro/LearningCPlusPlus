#include "PointerPlayer.h"

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
// Constructors
//
PointerPlayer::PointerPlayer()
{}

// 
// Common operations
//
string PointerPlayer::Obfuscate(string text)
{
    std::string copy(text);
    std::reverse(copy.begin(), copy.end());
    return copy;
}

// 
// Main method
//
void PointerPlayer::Play()
{
    writeHeader("PLAYING WITH POINTERS!!!");

    string someInput = "";
    while (someInput != "bye")
    {
        writeLine("[write 'bye' to exit]");
        writeSeparator();

        cout << "Write something: ";
        cin >> someInput;
        writeSeparator();

        PointerPlayer pointerPlayer;
        PointerPlayer* pointerPlayerPointer = &pointerPlayer;
        writeLine("Obfuscated: " + pointerPlayerPointer->Obfuscate(someInput));
        writeSeparator();
    }
    writeEmptyLine();
}