#ifndef _NASI_HAINAN_HPP
#define _NASI_HAINAN_HPP
#include "../SideProduct.hpp"
#include <string>
using namespace std;

class NasiHainan: public SideProduct {
    private:
        
    public:
        NasiHainan() : SideProduct("Nasi Hainan", 14, 20){}       
};


#endif