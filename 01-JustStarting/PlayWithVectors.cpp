#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;
#include "PlayWithStrings.h"

#include <vector>
using std::vector;

//
// Constants
//

// 
// Common operations
//
string getSentence(vector<string> words)
{
    string sentence = "";
    for (int wordPosition = 0; wordPosition < words.size(); wordPosition++)
    {
        sentence = sentence + " " + words[wordPosition];
    }
    return sentence;
}

// 
// Common formatted string writing
//
void writeSentence(vector<string> words)
{
    cout << getSentence(words) << endl;
}

// 
// Main method
//
void playWithVectors()
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
        writeSeparator();

        writeLine("Current sentence so far:");
        words.push_back(someInput);
        writeSentence(words);
        writeSeparator();
    }

    writeEmptyLine();
}