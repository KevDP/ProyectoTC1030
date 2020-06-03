#ifndef CAHORRO_H
#define CAHORRO_H
#include <iostream>
#include <sstream>
#include <string>
#include "cliente.h"

using namespace std;

typedef unsigned uint;

class cAhorro{

    private:

        uint interest;

    public:

        uint getInterest();
        void setInterest();
        void applyInterest();

};

#endif // CAHORRO_H
