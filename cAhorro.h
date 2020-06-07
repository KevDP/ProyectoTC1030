#ifndef CAHORRO_H
#define CAHORRO_H
#include <iostream>
#include <sstream>
#include <string>
#include "cliente.h"
#include "tarjeta.h"

using namespace std;

typedef unsigned uint;

class CAhorro : Cuenta, Tarjeta{

    private:

        uint interest;

    public:

        CAhorro();
        CAhorro(uint _balance, string pass, string quest, uint inter);
        CAhorro(const CAhorro &ca);

        uint getInterest();
        void setInterest(uint interest);
        void applyInterest();

};

    CAhorro::CAhorro() : Cuenta(){

        interest = 0;

    }

    CAhorro::CAhorro(_balance, pass, quest, inter) : Cuenta(uint _balance, string pass, string quest){

        interest = inter;

    }

    CAhorro::CAhorro(const CAhorro &ca) : Cuenta(ca.balance, ca.password, ca.question){

        interest = ca.interest;

    }

    uint CAhorro::getInterest(){

        return interest;

    }

    void CAhorro::setInterest(uint inter){

        interest = inter;

    }

    void CAhorro::applyInterest(){
        uint balance;
        pedirCVV();
        balance=getBalance();
            cout<<"Su índice de riesgo fue de: "<<getInterest()<<endl;
        balance=balance*getInterest();
            cout<<"Su fondo actual es de: "<<balance<<endl;
    }





#endif // CAHORRO_H
