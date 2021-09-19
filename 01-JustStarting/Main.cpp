#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

void writeLine(string text)
{
    cout << text << endl;
}

string getSeparator()
{
    return "----------------------------------------------------------------";
}

string sayHelloTo(string somethingToSayHello)
{
    return "Hello, " + somethingToSayHello + "!";
}

int main()
{
    writeLine(getSeparator());
    writeLine(sayHelloTo("World"));

    string somethingToSayHello = "";
    string longestThingHellowed = "";

    while (somethingToSayHello != "bye")
    {
        writeLine(getSeparator());
        writeLine("[write 'bye' to exit]");
        writeLine(getSeparator());
        cout << "Tell me something else you want to say hello to: ";
        cin >> somethingToSayHello;
        writeLine(getSeparator());
        writeLine(sayHelloTo(somethingToSayHello));

        if (longestThingHellowed.length() < somethingToSayHello.length())
        {
            longestThingHellowed = somethingToSayHello;
        }
        writeLine("Longest thing hellowed so far: " + longestThingHellowed);

    }
}