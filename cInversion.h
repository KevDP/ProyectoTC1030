#ifndef CINVERSION_H
#define CINVERSION_H
#include <iostream>
#include <sstream>
#include <string>
#include "cuenta.h"

using namespace std;

typedef unsigned uint;

class cInversión{

    private:

        int risk;

    public:

        int getRisk();
        void setRisk();
        void applyRisk();

};

#endif // CAHORRO_H


