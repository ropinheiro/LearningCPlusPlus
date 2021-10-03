#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

#include "PlayWithStrings.h"
#include "TypeNamePlayer.h"
#include "VectorPlayer.h"

int main()
{
    TypeNamePlayer typeNamePlayer;
    typeNamePlayer.Play();

    playWithStrings();

    // This already instantiates with default constructor!
    // Not like C# or Java, where you have to do "new (...)".
    VectorPlayer vectorPlayer;
    vectorPlayer.Play();
}