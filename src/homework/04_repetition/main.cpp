//write include statements
#include <iostream>
#include "repetition.h"
//write using statements
using std::cout; using std::cin;

int main() 
{
	
	auto exit = 'n';
	do
	{
		cout<<"Enter a number to select and option- \n\n 1- Factorial \n 2- Greatest Common Divisor \n 3- Exit \n";
		auto choice1 = 0;
		auto choice2 = 0;
		cin>>choice1;

	if(choice1 == 1){
		cout<<"Enter one number for factorial.\n";
		cin>>choice1;
		cout<<factorial(choice1)<<"\n\n";
		}
	else if(choice1 == 2){
		cout<<"Enter two numbers to compare for the greatest common divisor.\n";
		cin>>choice1;
		cin>>choice2;
		cout<<gcd(choice1,choice2)<<"\n\n";
		}
	else if(choice1 == 3){
		cout<<"Are you sure you want to exit? (y/n)\n";
		cin>>exit;
		}
	}
	while(exit == 'n' || exit == 'N');
	return 0;
}
