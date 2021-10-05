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

// In this example, we use const& to be sure that this function
// won't change the contents of the text variable passed by reference.
string PointerPlayer::Obfuscate(string const& text)
{
    // Because we used const& text, we cannot do the following
    // two lines, as reverse changes the string's contents.

    // std::reverse(text.begin(), text.end());
    // return text;

    // Therefore, we have to do a copy first:
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