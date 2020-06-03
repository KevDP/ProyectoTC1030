#ifndef TARJETA_H
#define TARJETA_H
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

enum recargas {uno, dos, tres, cuatro, cinco, seis};

typedef unsigned int uint;

class Tarjeta{

    private:
        uint cardID;
        uint CVV;

    public:
        Tarjeta();
        Tarjeta(uint C_ID, uint _CVV, uint _balance);
        Tarjeta(const Tarjeta &t);

        uint getCVV();
        void pedirCVV();

};

    Tarjeta::Tarjeta(){
        CardID = 0;
        CVV = 0;
    }

    Tarjeta::Tarjeta(uint C_ID, uint _CVV, uint _balance){

        CardID = C_ID;
        CVV = _CVV;

    }

    Tarjeta::Tarjeta(const Tarjeta &t){

        CardID = t.CardID;
        CVV = t.CVV;

    }



    uint Tarjeta::getCVV(){

        return CVV;

    }



#endif // TARJETA_H
