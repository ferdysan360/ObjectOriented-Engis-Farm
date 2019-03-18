#ifndef _SUSU_TELUR_MADU_JAHE_HPP
#define _SUSU_TELUR_MADU_JAHE_HPP
#include "SideProduct.hpp"
#include <string>
using namespace std;

class SusuTelurMaduJahe: public SideProduct {
    private:
        const string name = "Susu Telur Madu Jahe";
        const int type_sproduct = 8;
        const int price = 5; 
    public:
        string getName_SProduct(); // return name
        int getType_SProduct(); //return typeSProduct;        
        int getPrice_Sproduct(); //return price;        
};


#endif