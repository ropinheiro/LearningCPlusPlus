#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;
using std::string_view;

//
// Constants
//
size_t SEPARATOR_LENGTH = 75;
char NORMAL_SEPARATOR_CHAR = '-';
char HEADER_SEPARATOR_CHAR = '=';

// Create a string with the same character repeated a given number of times
string NORMAL_SEPARATOR = string(SEPARATOR_LENGTH, NORMAL_SEPARATOR_CHAR);
string HEADER_SEPARATOR = string(SEPARATOR_LENGTH, HEADER_SEPARATOR_CHAR);

// 
// Common generation of strings
//
string sayHelloTo(string somethingToSayHello)
{
    return "Hello, " + somethingToSayHello + "!";
}

string getHeaderText(string_view text)
{
    size_t remainingLength = HEADER_SEPARATOR.length() - text.length();

    size_t leftPartLength = remainingLength / 2;
    size_t rightPartLength = remainingLength - leftPartLength;

    string leftPart = string(leftPartLength - 1, HEADER_SEPARATOR_CHAR);
    string rightPart = string(rightPartLength - 1, HEADER_SEPARATOR_CHAR);

    // We have to use std::string::output because string_view still do not
    // work with the +operator overload, at least in C++ 17.
    std::string output;
    output.append(leftPart).append(" ").append(text).append(" ").append(rightPart);
    return output;
}

// 
// Common formatted string writing
//
void writeLine(string_view text)
{
    cout << text << endl;
}

void writeEmptyLine()
{
    cout << endl;
}

void writeHeader(string_view text)
{
    writeLine(HEADER_SEPARATOR);
    writeLine(getHeaderText(text));
    writeLine(HEADER_SEPARATOR);
}

void writeSeparator()
{
    writeLine(NORMAL_SEPARATOR);
}

// 
// Main method
//
void playWithStrings()
{
    writeHeader("PLAYING WITH STRINGS!!!");

    string somethingToSayHello = "";
    string longestThingHellowed = "";

    while (somethingToSayHello != "bye")
    {
        writeLine("[write 'bye' to exit]");
        writeSeparator();
        cout << "Tell me something else you want to say hello to: ";
        cin >> somethingToSayHello;
        writeSeparator();
        writeLine(sayHelloTo(somethingToSayHello));

        if (longestThingHellowed.length() < somethingToSayHello.length())
        {
            longestThingHellowed = somethingToSayHello;
        }
        writeLine("Longest thing hellowed so far: " + longestThingHellowed);
        writeSeparator();
    }

    writeEmptyLine();
}