#ifndef TARJETA_H
#define TARJETA_H
#include <iostream>
#include <sstream>
#include <string>

using namespace std;



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
        cardID = 0;
        CVV = 0;
    }

    Tarjeta::Tarjeta(uint C_ID, uint _CVV, uint _balance){

        cardID = C_ID;
        CVV = _CVV;

    }

    Tarjeta::Tarjeta(const Tarjeta &t){

        cardID = t.cardID;
        CVV = t.CVV;

    }



    uint Tarjeta::getCVV(){

        return CVV;

    }

    void Tarjeta::pedirCVV(){
            uint InCVV;
            cout<<"Ingrese el CVV de su tarjeta \n ";
            cin>>InCVV;
            if(InCVV == getCVV()){       // Coincidir el CVV ingresado con el encapsulado.
                cout<<"Ingresado con exito \n ";
            }
            else{
                while(InCVV != getCVV()){        // Mientras no coincida, mandar� error y se pedir� de nuevo.
                    cout<<"El CVV no coincide, intenta de nuevo \n ";
                    cin>>InCVV;
                }
            }
        ;}



#endif // TARJETA_H
