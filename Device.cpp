#pragma once
#include <iostream>
using namespace std;

class Device {
public:
    virtual bool isEnabled() const = 0;
    virtual void enable() = 0;
    virtual void disable() = 0;
    virtual int getVolume() const = 0;
    virtual void setVolume(int percent) = 0;
    virtual int getChannel() const = 0;
    virtual void setChannel(float channel) = 0;
    virtual void printStatus() = 0;

    //virtual ~Device() {}
};
