// Practical_Week_3.cpp : Defines the entry point for the application.

#include "Practical_Week_3.h"
//#include "Pie.h"
#include "ApplePie.h"
#include "RaspberryPie.h"

using namespace std;

int main()
{
	/*Pie p;*/
	/*ApplePie applePie;
	RaspberryPie raspbPie;*/
	Pie* piePtr = nullptr;
	int selection = 0;

	while (true) {
		std::cout << "Select a type of pie: \n";
		std::cout << "1. Apple Pie\n";
		std::cout << "2. Raspberry Pie\n";
		std::cout << "Enter your choice: ";
		std::cin >> selection;

		if (selection == 1) {
			piePtr = new ApplePie();
			break;
		}
		else if (selection == 2) {
			piePtr = new RaspberryPie();
			break;
		}
		else {
			std::cout << "Invalid choice! Try again." << std::endl;
			std::cin.clear();
		}
	}

	std::cout << "You selected: " << piePtr->description() << std::endl;

	delete piePtr;
	return 0;

	/*std::cout << "Apple Pie Description: " << applePie.description() << std::endl;
	std::cout << "Raspberry Pie Description: " << raspbPie.description() << std::endl;*/
}
