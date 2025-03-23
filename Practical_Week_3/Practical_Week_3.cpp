// Practical_Week_3.cpp : Defines the entry point for the application.

#include "Practical_Week_3.h"
//#include "Pie.h"
#include "ApplePie.h"
#include "RaspberryPie.h"

using namespace std;

int main()
{
	/*Pie p;*/
	ApplePie applePie;
	RaspberryPie raspbPie;

	std::cout << "Apple Pie Description: " << applePie.description() << std::endl;
	std::cout << "Raspberry Pie Description: " << raspbPie.description() << std::endl;

	return 0;
}
