#pragma once

class TemplatePlayer
{
private:
    template <class T>
    T GetMax(T const& t1, T const& t2);

public:
    TemplatePlayer();
    void Play();
};