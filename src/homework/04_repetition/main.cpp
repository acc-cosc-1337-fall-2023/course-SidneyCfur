//write include statements
#include <iostream>
#include "repetition.h"
//write using statements
using std::cout; using std::cin;

int main() 
{
	auto choice1 = 0;
	auto choice2 = 0;
	auto exit = 'n';
	do
	{
		cout<<"1- Factorial \n 2- Greatest Common Divisor \n 3- Exit";
		cin>>choice1;
		switch(choice1){
		case 1:
		cout<<"Enter one number for factorial.\n";
		cin>>choice1;
		cout<<factorial(choice1);
		break;
		case 2:
		cout<<"Enter two numbers to compare fore greatest common divisor.\n";
		cin>>choice1;
		cin>>choice2;
		cout<<gcd(choice1,choice2);
		break;
		case 3:
		cout<<"Are you sure you want to exit? (y/n)\n";
		cin>>exit;
		break;
		}
	}
	while(exit != 'n');
	return 0;
}
