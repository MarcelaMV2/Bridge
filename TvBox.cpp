#include <iostream>
#include <vector>
#include "Canal.cpp"
#include "Device.cpp"
using namespace std;
class TvBox: public Device{
private:
    int volumen=30;
   // vector <Canal> Canales;
   int canal = 1;
    bool estado=false;
    string marca;
public:
    bool isEnabled() const override{
        return estado;
    }

    void enable() override {
        estado = true;
    }
    void disable() override {
        estado = false;
    }

    int getVolume() const override{
        return volumen;
    }

    void setVolume(int _volumen) override{
        if(_volumen > 100){
            this->volumen=100;
        } else if(_volumen < 0) {
            this->volumen= 0;
        } else {
            this->volumen = _volumen;
        }
    }

    int getChannel() const override {
        return canal;
    }

    void setChannel(float _canal){
        this->canal = _canal;
    } 

    void printStatus() override {
        cout<<"------------------------------------"<<endl;
        cout<<"| I'm TVBox set."<<endl;
        cout<<"| I'm " <<(estado ? "enabled" : "disabled") <<endl;
        cout<<"| Current volume is " << volumen << "%"<<endl;
        cout<<"| Current channel is " << canal <<endl;
        cout<<"------------------------------------"<<endl;
    }
};