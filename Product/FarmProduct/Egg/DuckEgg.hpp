#ifndef _DUCK_EGG_HPP
#define _DUCK_EGG_HPP
#include "../Egg.hpp"
#include <string>
using namespace std;

class DuckEgg : public Egg {
    private:

    public:
        DuckEgg(): Egg("Duck Egg",2, 20){}
};

#endif