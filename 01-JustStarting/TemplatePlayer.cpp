#include "TemplatePlayer.h"
#include "TemplateClass.h"

#include <string>
using std::string;
#include "PlayWithStrings.h"

#include <iostream>
using std::cout;
using std::endl;

//
// Constants
//

//
// Constructors
//
TemplatePlayer::TemplatePlayer()
{}

// 
// Common operations
//
template <class T>
T TemplatePlayer::GetMax(T const& t1, T const& t2)
{
    return t1 > t2 ? t1 : t2; 
}

// 
// Main method
//
void TemplatePlayer::Play()
{
    writeHeader("PLAYING WITH TEMPLATES!!!");

    // Not using here writeLine() because converting all those types
    // to string is harder than just using the cout << overloads.
    int i = 1;
    int j = 2;
    cout << "Max of ints i=1 and j=2 is: " << GetMax(i, j) << endl;

    string m = "abc";
    string n = "def";
    cout << "Max of strings m=abc and n=def is: " << GetMax(m, n) << endl;

    bool x = true;
    bool y = false;
    cout << "Max of bools x=true and y=false is: " << GetMax(x, y) << endl;

    writeSeparator();
    writeHeader("... and now using template class!!!");

    TemplateClass<int> templateClassForInt;
    cout << "Max of ints i=1 and j=2 is: "
        << templateClassForInt.GetMin(i, j) << endl;

    TemplateClass<string> templateClassForString;
    cout << "Max of strings m=abc and n=def is: "
        << templateClassForString.GetMin(m, n) << endl;

    TemplateClass<bool> templateClassForBool;
    cout << "Max of bools x=true and y=false is: "
        << templateClassForBool.GetMin(x, y) << endl;

    writeSeparator();
    writeEmptyLine();
}