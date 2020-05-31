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
        uint token;
    protected:
        uint balance;
        recargas rCelular;
    public:
        Tarjeta();
        Tarjeta(uint C_ID, uint _CVV, uint _balance);
        Tarjeta(const Tarjeta &t);
        void depositar();
        void pagarServicio();
        void retirar();
        string recargar();
        uint getBalance();
        void setBalance(uint _balance);
        uint getCVV();
        void pedirCVV();
        uint getToken();

};

    Tarjeta::Tarjeta(){
        CardID = 0;
        CVV = 0;
        balance = 0;
    }

    Tarjeta::Tarjeta(uint C_ID, uint _CVV, uint _balance){

        CardID = C_ID;
        CVV = _CVV;
        balance = _balance;

    }

    Tarjeta::Tarjeta(const Tarjeta &t){

        CardID = t.CardID;
        CVV = t.CVV;
        balance = t.balance;

    }

    uint Tarjeta::getToken(){

        return token;

    }

    uint Tarjeta::getBalance(){

        return balance;

    }

    void Tarjeta::setBalance(uint _balance){

        balance = _balance;

    }

    uint Tarjeta::getCVV(){

        return CVV;

    }

    void Tarjeta::depositar(){                  // Accion depositar
        uint dCantidad;
        cout<<"\n Cantidad que desea depositar $";
        cin>>dCantidad;
        //pedir_CVV();                // Para completar el deposito es necesario pedir el CVV
        balance+=dCantidad; // Balance+= Balance + dCantidad
        cout<<"\n El fondo es de: $"<<getBalance()<<endl;            // De esta manera, cada que se use un deposito de efectivo, se imprimir el Estado de cuenta actual.
    }

    void Tarjeta::retirar(){    // Accion retirar.
        uint rCantidad;
        cout<<"\n Cantidad que desea retirar: $";
        cin>>rCantidad;        // Cantidad a retirar.
        //pedir_CVV();            // Para retirar efectivo es necesario ingresar el CVV.
        balance-=rCantidad; // Balance-= Balance - rCantidad.
        cout<<"\n El fondo es de: $"<<getBalance()<<endl;            // De esta manera, cada que se use un retiro de efectivo, se desplegara el Estado de cuenta actual.
    }

    void Tarjeta::pagarServicio(){
        string motivo;
        uint pCantidad;
        cout<<"\n Ingrese el concepto de su pago de servicio en una palabra: ";
        cin>>motivo;
            cout<<"\n Cantidad que desea depositar $";
            cin>>pCantidad;
            //pedir_CVV();                // Para completar el deposito es necesario pedir el CVV
        balance-=pCantidad; // Balance-= Balance -p_Cantidad
        cout<<"\n El concepto de su pago fue: "<<motivo<<endl;
        cout<<"\n El fondo es de: $"<<getBalance()<<endl;

}

/*
    string Tarjeta::recargar(){
        string _rCelular;
        cout<<"\n Elige la opción de recarga de la recarga: uno = $20, dos = $30, tres = $50, cuatro = $100, cinco = $200, seis = $500"<<endl;
        cin>>_rCelular;
        switch(rCelular){
            case uno :
                Balance-=20;
                cout<<"\n El fondo es de: $"<<getBalance()<<endl;
                return 0;
            case dos :
                Balance-=30;
                cout<<"\n El fondo es de: $"<<getBalance()<<endl;
                return 0;
            case tres :
                Balance-=50;
                cout<<"\n El fondo es de: $"<<getBalance()<<endl;
                return 0;
            case cuatro :
                Balance-=100;
                cout<<"\n El fondo es de: $"<<getBalance()<<endl;
                return 0;
            case cinco :
                Balance-=200;
                cout<<"\n El fondo es de: $"<<getBalance()<<endl;
                return 0;
            case seis :
                Balance-=500;
                cout<<"\n El fondo es de: $"<<getBalance()<<endl;
                return 0;
            default : return "operación cancelada";
    }
}
*/

#endif // TARJETA_H
