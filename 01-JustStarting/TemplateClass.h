#pragma once

#include <string>
using std::string;

template <class T>
class TemplateClass
{
private:

public:
    T GetMin(T const& t1, T const& t2)
    {
        return t1 < t2 ? t1 : t2;
    }
};

// This is a specialization for bool values
template <>
class TemplateClass<bool>
{
private:

public:
    // Instead of returning a bool value (that gets written as 0 or 1
    // when converting to string) return hardcoded strings T/F.
    string GetMin(bool const& t1, bool const& t2)
    {
        bool result = t1 < t2 ? t1 : t2;
        return result ? "T" : "F";
    }
};
