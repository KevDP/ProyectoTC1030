#ifndef CINVERSION_H
#define CINVERSION_H
#include <iostream>
#include <sstream>
#include <string>
#include "cuenta.h"
#include "tarjeta.h"

using namespace std;

typedef unsigned uint;

class CInversion : Cuenta, Tarjeta{

    private:

        int risk;

    public:

        CInversion();
        CInversion(uint _balance, string pass, string quest, int r);
        CInversion(const CInversion &ci);

        int getRisk();
        void applyRisk();

};


    CInversion::CInversion() : Cuenta(){

        risk = 0;

    }

    CInversion::CInversion(_balance, pass, quest, r) : Cuenta(uint _balance, string pass, string quest){

        risk = r;

    }

    CInversion::CInversion(const CInversion &ci) : Cuenta(ci.balance, ci.password, ci.question){


        risk = ci.risk;

    }

    int CInversion::getRisk(){

        return risk;

    }

    void CInversion::applyRisk(){
        uint balance;
        pedirCVV();
        balance=getBalance();
            cout<<"Su índice de riesgo fue de: "<<getRisk()<<endl;
        balance=balance*risk;
            cout<<"Su fondo actual es de: "<<balance<<endl;
    }



#endif // CAHORRO_H


