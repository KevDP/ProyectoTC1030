#ifndef CCORRIENTE_H
#define CCORRIENTE_H
#include <iostream>
#include <fstream>
#include <string>
#include "cuenta.h"
#include "tarjeta.h"

using namespace std;

typedef unsigned uint;


class CCorriente : Cuenta, Tarjeta{


    public:

        CCorriente();
        CCorriente(uint _balance, string pass, string quest);
        CCorriente(const CCorriente &cc);

        void pagarServicio();
        void recargar();

};

    CCorriente::CCorriente() : Cuenta(){}

    CCorriente::Corriente(_balance, pass, quest) : Cuenta(uint _balance, string pass, string quest){}

    CCorriente::CCorriente(const CCorriente &cc) : Cuenta(cc.balance, cc.password, cc.question){}

        void CCorriente::pagarServicio(){
            string motivo;
            uint pCantidad;
            cout<<"\n Ingrese el concepto de su pago de servicio en una palabra: ";
            cin>>motivo;
                cout<<"\n Cantidad que desea depositar $";
                cin>>pCantidad;
                pedirCVV();                // Para completar el deposito es necesario pedir el CVV
            balance-=pCantidad; // Balance-= Balance -p_Cantidad
            cout<<"\n El concepto de su pago fue: "<<motivo<<endl;
            cout<<"\n Su fondo es de: $"<<getBalance()<<endl;

}

        void CCorriente::recargar(){
            int option;
                do {
                    cout<<"Elige la opción de la recarga: \n";
                    cout << "1. $20\n";
                    cout << "2. $30\n";
                    cout << "3. $50\n";
                    cout << "4. $100\n";
                    cout << "5. $200\n";
                    cout << "6. $500\n";
                    cin >> option;
                    switch (option) {
                        case 1 : balance-=20;
                        case 2 : balance-=30;
                        case 3 : balance-=50;
                        case 4 : balance-=100;
                        case 5 : balance-=200;
                        case 6 : balance-=500;
                            default: cout << "Wrong options\n"; break;
                    }
                    cout << "\n\n";
                    } while (option != 7);
        }


#endif // CCORRIENTE_H

