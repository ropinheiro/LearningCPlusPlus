#pragma once
#include <string>
using std::string;

#include <vector>
using std::vector;

class VectorPlayer
{
private:
    string GetSentence(vector<string> words);
    string GetSentence_OldWay(vector<string> words);
    void WriteSentence(vector<string> words);

public:
    VectorPlayer();
    void Play();
};
