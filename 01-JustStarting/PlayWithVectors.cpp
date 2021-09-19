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
// Common generation of vectors
//

// 
// Common formatted string writing
//

// 
// Main method
//
void playWithVectors()
{
    writeHeader("PLAYING WITH VECTORS!!!");

    string someInput = "";
    while (someInput != "bye")
    {
        writeLine("[write 'bye' to exit]");
        writeSeparator();

        cout << "TODO... ask input for some vector game: ";
        cin >> someInput;
        writeSeparator();
    }

    writeEmptyLine();
}