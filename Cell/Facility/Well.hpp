//Kelas : Well.hpp

#ifndef _WELL_H
#define _WELL_H
#include <iostream>
#include "../Facility.hpp"
#define MAX_WATER 100
using namespace std;

class Well : public Facility{
    private:
        
    public:
        Well();

        void getWater(int* waterBag);
};
#endif