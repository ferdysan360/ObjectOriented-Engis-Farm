#ifndef _SIDE_PRODUCT_HPP
#define _SIDE_PRODUCT_HPP
#include "Product.hpp"
using namespace std;

class SideProduct: public Product {
    private:
        const string name;
        const int type_sproduct;
        const int price; 
    public:
        SideProduct(string _name, int _type_sproduct, int _price) : name(_name), type_sproduct(_type_sproduct), price(_price){}
        //Tipe 1 + 4 = ChickenRolade
        //Tipe 1 + 5 = NasiHainan
        //Tipe 1 + 6 = AngsaGeprek
        //Tipe 1 + 7 = SapiOmelete
        //Tipe 1 + 8 = KudaBakarTelur
        //Tipe 1 + 9 = KambingGuling
        //TIpe 1 + 10 = SusuTelurMaduJahe
        //Tipe 11 + 11 = KapsulEkstrakSusuKuda
        //Tipe 12 + 12 = SusuKambingInstan
        // 
};


#endif