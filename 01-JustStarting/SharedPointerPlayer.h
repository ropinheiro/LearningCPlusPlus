#pragma once

#include <string>
using std::string;

#include <memory>

class SharedPointerThing {
public:
    string someText;
};

class SharedPointerPlayer
{
private:
    std::shared_ptr<SharedPointerThing> thing;

public:
    SharedPointerPlayer();
    void Play();
    void AddThing(string name);
    string GetThingName() const
    {
        return thing ? thing->someText : "<nothing!>";
    }
};
#pragma once
