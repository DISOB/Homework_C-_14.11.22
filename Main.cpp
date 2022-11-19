#include "Func.h"


int main()
{
	List* array = nullptr;
	People first;
	first.grade = 5;
	first.id = 12;
	first.name = "Petya";

	addEmployee(&array, first);

	People second;
	second.grade = 6;
	second.id = 13;
	second.name = "Vanya";

	addEmployee(&array, second);


	People third;
	third.grade = 9;
	third.id = 10;
	third.name = "Ilya";

	addEmployee(&array, third);

	

	//deleteEmployee(10, &array);
	//deleteEmployee(12, &array);


	std::cout << findEmployee(11, array) << std::endl;
	std::cout << findEmployee("Vavnya", array) << std::endl;
	
	deleteList(&array);

	return 0;
}