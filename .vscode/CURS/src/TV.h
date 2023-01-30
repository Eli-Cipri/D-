#ifndef TV_H
#define TV_H
#include <iostream>

#pragma once

class TV
{
public:
    TV(int height, int width);
    ~TV();
    // trebuie initializat inaltimea si lungimea tv-ului
    // trebuie calculata si aria tv-ului

    int getArie()
    {
        return m_height * m_width;
    }

private:
    int m_height;
    int m_width;
};

#endif