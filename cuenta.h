#ifndef CUENTA_H
#define CUENTA_H
#include <iostream>
#include <sstream>
#include <string>

using namespace std;


class Cuenta{

    protected:

        string password;
        uint balance;
        string question;
        uint token;


    public:

        Cuenta();
        Cuenta(uint _balance, string pass, string quest);
        Cuenta(const Cuenta &c);

        void depositar();
        void retirar();
        uint getBalance();
        void setBalance(uint _balance);
        string getPassword();
        void setPassword(string pass);
        string getQuestion();
        void setQuestion(string quest);



};

        Cuenta::Cuenta(){

            balance = 0;
            password = "1234567890";
            question = "none";


        }

        Cuenta::Cuenta(uint _balance, string pass, string quest){

            balance = _balance;
            password = pass;
            question = quest;

        }

        Cuenta::Cuenta(const Cuenta &c){

            balance = c.balance;

        }

        string Cuenta::getQuestion(){

            return question;

        }

        void Cuenta::setQuestion(string quest){

            question = quest;

        }

        string Cuenta::getPassword(){

            return password;

        }

        void Cuenta::setPassword(string pass){

            password = pass;

        }

        uint Cuenta::getBalance(){

            return balance;

        }

        void Cuenta::setBalance(uint _balance){

            balance = _balance;

        }

        void Cuenta::depositar(){                  // Accion depositar
            uint dCantidad;
                cout<<"\n Cantidad que desea depositar $";
                cin>>dCantidad;
            //pedir_CVV();                // Para completar el deposito es necesario pedir el CVV
            balance+=dCantidad; // Balance+= Balance + dCantidad
                cout<<"\n El fondo es de: $"<<getBalance()<<endl;            // De esta manera, cada que se use un deposito de efectivo, se imprimir el Estado de cuenta actual.
            }

        void Cuenta::retirar(){    // Accion retirar.
            uint rCantidad;
                cout<<"\n Cantidad que desea retirar: $";
                cin>>rCantidad;        // Cantidad a retirar.
            //pedir_CVV();            // Para retirar efectivo es necesario ingresar el CVV.
            balance-=rCantidad; // Balance-= Balance - rCantidad.
                cout<<"\n El fondo es de: $"<<getBalance()<<endl;            // De esta manera, cada que se use un retiro de efectivo, se desplegara el Estado de cuenta actual.
        }



#endif // CUENTA_H
