#include <iostream>
#include "BasicRemote.cpp"
using namespace std;

class AdvancedRemote : public BasicRemote{
public:
    AdvancedRemote(Device *device) : BasicRemote(device){}

    void mute(){
        cout<<"Remote: mute"<<endl;
        device->setVolume(0);
    }
};