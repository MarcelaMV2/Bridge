#pragma once
#include <iostream>
using namespace std;

class Remote{
public:
    virtual void power() = 0;
    virtual void volumeDown() = 0;
    virtual void volumeUp() = 0;
    virtual void channelDown() = 0;
    virtual void channelUp() = 0;
};