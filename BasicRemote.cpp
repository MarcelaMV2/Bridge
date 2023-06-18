#pragma once
#include <iostream>
#include "Remote.cpp"
#include "Device.cpp"
using namespace std;

class BasicRemote : public Remote {
protected:
    Device *device;
public:
    BasicRemote(){
        device=nullptr;
    }

    BasicRemote(Device* _device){
        this->device = _device;
    }

    void power()override{
        cout<<"Remote: power toggle"<<endl;
        if(device->isEnabled()){
            device->disable();
        } else {
            device->enable();
        }
    }
    void volumeDown() override {
        cout<<"Remote: volume down"<<endl;
        device->setVolume(device->getVolume()-10);
    }

    void volumeUp() override {
        cout<<"Remote: volume up"<<endl;
        device->setVolume(device->getVolume()+10);
    }

    void channelDown() override {
        cout<<"Remote: channel down"<<endl;
        device->setChannel(device->getChannel()-1);
    }

    void channelUp() override {
        cout<<"Remote: channel up"<<endl;
        device->setChannel(device->getChannel()+1);
    } 
};