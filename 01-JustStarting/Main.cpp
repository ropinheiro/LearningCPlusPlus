#include "PlayWithStrings.h"
#include "TypeNamePlayer.h"
#include "VectorPlayer.h"
#include "TemplatePlayer.h"

int main()
{
    TypeNamePlayer typeNamePlayer;
    typeNamePlayer.Play();

    playWithStrings();

    // This already instantiates with default constructor!
    // Not like C# or Java, where you have to do "new (...)".
    VectorPlayer vectorPlayer;
    vectorPlayer.Play();

    TemplatePlayer templatePlayer;
    templatePlayer.Play();
}