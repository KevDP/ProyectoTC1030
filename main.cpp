#include <iostream>
#include "tarjeta.h"

using namespace std;

int main()
{
    Tarjeta T_1(443112122, 343,1000);
    cout<<"CVV:"<<T_1.getCVV()<<endl;
    T_1.depositar();
    T_1.retirar();
    T_1.pagarServicio();
    T_1.recargar();

    return 0;
}
