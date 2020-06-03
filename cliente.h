#ifndef CLIENTE_H
#define CLIENTE_H
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

typedef unsigned int uint;

class Cliente{

    private:
        uint ID;
        string name;
        uint age;
        string email;
        uint phone;
        string address;

    public:
        DatosTarjeta();
        DatosTarjeta(uint _ID, string n, uint _age, string e, uint p, string a);
        DatosTarjeta(const DatosTarjeta &d_t);

        uint getID();
        string getName();
        uint getAge();
        string getEmail();
        uint getPhone();
        string getAdress();
        void setEmail();
        void setPhone();
        void setAdress();

};

    DatosTarjeta::DatosTarjeta(){

        ID = 0;
        name = "undefined";
        age = 0;
        email = "undefined";
        phone = 0;
        address = "undefined";
    }

    DatosTarjeta::DatosTarjeta(uint _ID, string n, uint _age, string e, uint p, string a){

        ID = _ID;
        name = n;
        age = _age;
        email = e;
        phone = p;
        address = a;

}

    DatosTarjeta::DatosTarjeta(const DatosTarjeta &d){

        ID = d.ID;
        name = d.name;
        age = d.age;
        email = d.email;
        phone = d.phone;
        address = d.address;

    }

    uint DatosTarjeta::getID(){

        return ID;

    }

    string DatosTarjeta::getName(){

        return name;

    }

    uint DatosTarjeta::getAge(){

        return age;

    }

    string DatosTarjeta::getEmail(){

        return email;

    }

    uint DatosTarjeta::getPhone(){

        return phone;

    }

    string DatosTarjeta::getAdress(){

        return address;

    }

    void setEmail(string e){

        email = e;

    }

    void setPhone(uint p){

        phone = p;

    }

    void setAddress(string a){

        address = a;

    }
#endif // CLIENTE_H
