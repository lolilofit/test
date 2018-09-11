#include "module1.h"
#include "module2.h"
#include <iostream>

int main(int argc, char** argv)
{
	std::cout << "Hello world!" << "\n";

	std::cout << Module1::getMyName() << "\n";
	std::cout << Module2::getMyName() << "\n";

	using namespace Module1;
	std::cout << getMyName() << "\n"; // (A)
	std::cout << Module2::getMyName() << "\n";

	//using namespace Module2; // (B)
	//std::cout << getMyName() << "\n"; // COMPILATION ERROR (C)
	using Module2::getMyName;
	std::cout << getMyName() << "\n";


	using Module2::getMyName; // (4)
	std::cout << getMyName() << "\n"; // (D)

	std::cout << Module1::Module3::getMyName() << "\n"; //Peter
	std::cout << Module3::getMyName() << "\n";          //Peter 
	std::cin.get();
}


//john james john james james (3)
