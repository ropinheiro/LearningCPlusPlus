#include "VectorPlayer.h"

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;
#include "PlayWithStrings.h"

#include <vector>
using std::vector;

#include <algorithm>
using std::sort;


//
// Constants
//

//
// Constructors
//
VectorPlayer::VectorPlayer()
{}

// 
// Common operations
//
string VectorPlayer::GetSentence(vector<string> words)
{
    string sentence = "";
    for (auto word:words)
    {
        sentence = sentence + " " + word;
    }
    return sentence;
}

// I did this first, then learned a better way with syntactic sugar
// (see above the getSentence function)
string VectorPlayer::GetSentence_OldWay(vector<string> words)
{
    string sentence = "";
    for (size_t wordPosition = 0; wordPosition < words.size(); wordPosition++)
    {
        sentence = sentence + " " + words[wordPosition];
    }
    return sentence;
}

// 
// Common formatted string writing
//
void VectorPlayer::WriteSentence(vector<string> words)
{
    cout << GetSentence(words) << endl;
}

// 
// Main method
//
void VectorPlayer::Play()
{
    writeHeader("PLAYING WITH VECTORS!!!");

    vector<string> words;
    string someInput = "";
    while (someInput != "bye")
    {
        writeLine("[write 'bye' to exit]");
        writeSeparator();

        cout << "Write a word: ";
        cin >> someInput;
        words.push_back(someInput);
        writeSeparator();

        writeLine("Current sentence so far:");
        WriteSentence(words);
        writeSeparator();
    }

    sort(begin(words), end(words));
    writeLine("Finally, the words alphabetically ordered:");
    WriteSentence(words);
    writeSeparator();

    writeEmptyLine();
}