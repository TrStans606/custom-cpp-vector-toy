#include <array>
#include <string>
#include <cstddef>
#include <iostream>
#include "c_vector.h"


int main() {
	//std::array<int,3> hi = {1,2,3};
	int* hi = new int[4] {1,2,3,4};

	std::cout << "The original array is size 4 and {1,2,3,4}"  << std::endl;
	
	//std::cout << hi[1] << std::endl;

	C_vector catto(hi,4);
	catto.add(5);
	std::cout << "This vector is size " << catto.length() << " and item 5 is "<< catto.get_item(4) << std::endl;
	catto.add(6);

	std::cout << "This vector is size " << catto.length() << " and item 6 is "<< catto.get_item(5) << std::endl;

	catto.pop();

	std::cout << "This vector is size post pop " << catto.length() << " and item 6 is gone "<< catto.get_item(5) << std::endl;

	//std::cout << catto.get_item(3) << std::endl;
	catto.erase(0);

	std::cout << "This vector is size post erase " << catto.length() << " and item 1 is now "<< catto.get_item(0) << std::endl;

	char* lol = new char[3] {'A','B','C'};
	std::cout << "The original array is size 3 and {a,b,c}"  << std::endl;

	C_vector ratto(lol,3);

	ratto.add('D');
	std::cout << "This vector is size " << ratto.length() << " and item 4 is "<< ratto.get_item(3) << std::endl;
	ratto.add('E');
	std::cout << "This vector is size " << ratto.length() << " and item 5 is "<< ratto.get_item(4) << std::endl;


	return(0);
}
