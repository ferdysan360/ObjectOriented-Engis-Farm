#ifndef _MEAT_PRODUCING_ANIMAL_HPP
#define _MEAT_PRODUCING_ANIMAL_HPP
#include <string>
#include "../FarmAnimal.hpp"
using namespace std;

class MeatProducingAnimal: public virtual FarmAnimal{
	public:
		MeatProducingAnimal();
		MeatProducingAnimal(int _x, int _y, string _voice, int _typeAnimal);
};


#endif