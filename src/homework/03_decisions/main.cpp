//write include statements
#include <iostream>
#include "decisions.h"

using std::cout; using std::cin;

int main() 
{
	
	auto option = 0;
	cout<<"1- Letter grade using if \n 2- Letter grade using switch \n 3- Exit \n\n Choose an option: \n";
	cin>>option;
	menu_select(option);

	return 0;
}


