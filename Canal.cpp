#include <iostream>
using namespace std;
class Canal{
private:
    int nroCanal;
    string nombreCanal;
public:
    Canal(){
        this->nroCanal=0;
        this->nombreCanal=" ";
    }
    Canal(int _nro, string _canal){
        this->nroCanal= _nro;
        this->nombreCanal= _canal;
    }
};