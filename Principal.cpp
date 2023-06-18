#include <iostream>
#include "Device.cpp"
#include "Radio.cpp"
#include "Tv.cpp"
#include "AdvancedRemote.cpp"
#include "BasicRemote.cpp"
using namespace std;
void testDevice(Device* device){
    cout<<"Pruebas con control Remoto basico"<<endl;
    BasicRemote* basicRemote = new BasicRemote(device);
    basicRemote->power();
    device->printStatus();

    cout<<"Pruebas con control Remoto avanzado"<<endl;
    AdvancedRemote* advancedRemote = new AdvancedRemote(device);
    advancedRemote->power();
    advancedRemote->mute();
    device->printStatus();
}
int main(){
    testDevice(new Tv());
    testDevice(new Radio());
    return 0;
}

