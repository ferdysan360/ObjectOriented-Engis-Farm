#ifndef _EGG_HPP
#define _EGG_HPP
#include "../FarmProduct.hpp"
using namespace std;

class Egg: public FarmProduct {
    private:
    
    public:
        Egg(string _name, int _type_fproduct, int _price) : FarmProduct(_name, _type_fproduct, _price){}
};


#endif