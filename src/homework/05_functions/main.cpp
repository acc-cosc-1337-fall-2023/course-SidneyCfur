#include "func.h";

int main() 
{
	auto exit = 'n';
	do
	{
		cout<<"Enter a number to select an option- \n\n 1- Get GC Content \n 2- Get DNA Complement \n 3- Exit \n";
		string input = "";
		cin>>input;

	if(input == "1"){
		cout<<"Enter a DNA sequence to get the GC content.\n use A,T,G, or C only\n\n";
		cin>>input;
		cout<<(get_gc_content(input) * 100)<<"%\n\n";
		}
	else if(input == "2"){
		cout<<"Enter a DNA sequence to get the DNA complement.\n use A,T,G, or C only\n\n";
		cin>>input;
		cout<<get_dna_complement(input)<<"\n\n";
		}
	else if(input == "3"){
		cout<<"Are you sure you want to exit? (y/n)\n";
		cin>>exit;
		}
	}
	while(exit == 'n' || exit == 'N');
	return 0;
}
