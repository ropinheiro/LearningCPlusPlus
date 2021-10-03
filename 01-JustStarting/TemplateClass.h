#pragma once

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