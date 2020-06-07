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
        Cliente();
        Cliente(uint _ID, string n, uint _age, string e, uint p, string a);
        Cliente(const Cliente &cl);

        uint getID();
        string getName();
        uint getAge();
        string getEmail();
        uint getPhone();
        string getAdress();
        void setEmail(string e);
        void setPhone(uint p);
        void setAddress(string a);

};

    Cliente::Cliente(){

        ID = 0;
        name = "undefined";
        age = 0;
        email = "undefined";
        phone = 0;
        address = "undefined";
    }

    Cliente::Cliente(uint _ID, string n, uint _age, string e, uint p, string a){

        ID = _ID;
        name = n;
        age = _age;
        email = e;
        phone = p;
        address = a;

}

    Cliente::Cliente(const Cliente &cl){

        ID = cl.ID;
        name = cl.name;
        age = cl.age;
        email = cl.email;
        phone = cl.phone;
        address = cl.address;

    }

    uint Cliente::getID(){

        return ID;

    }

    string Cliente::getName(){

        return name;

    }

    uint Cliente::getAge(){

        return age;

    }

    string Cliente::getEmail(){

        return email;

    }

    uint Cliente::getPhone(){

        return phone;

    }

    string Cliente::getAdress(){

        return address;

    }

    void Cliente::setEmail(string e){

        email = e;

    }

    void Cliente::setPhone(uint p){

        phone = p;

    }

    void Cliente::setAddress(string a){

        address = a;

    }
#endif // CLIENTE_H
