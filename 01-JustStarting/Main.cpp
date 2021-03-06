#include "MemoryPlayer.h"
#include "PlayWithStrings.h"
#include "PointerPlayer.h"
#include "SharedPointerPlayer.h"
#include "TemplatePlayer.h"
#include "TypeNamePlayer.h"
#include "VectorPlayer.h"

int main()
{
    // This already instantiates with default constructor!
    // Not like C# or Java, where you have to do "new (...)".
    //TypeNamePlayer typeNamePlayer;
    //typeNamePlayer.Play();

    //MemoryPlayer memoryPlayer;
    //memoryPlayer.Play();

    //playWithStrings();

    //VectorPlayer vectorPlayer;
    //vectorPlayer.Play();

    //TemplatePlayer templatePlayer;
    //templatePlayer.Play();

    //PointerPlayer pointerPlayer;
    //pointerPlayer.Play();

    SharedPointerPlayer sharedPointerPlayer;
    sharedPointerPlayer.Play();

}