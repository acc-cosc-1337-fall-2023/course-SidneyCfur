//write include statement for switch header
#include "switch.h"
#include<iostream>
using std::cout; using std::cin; using std::string;
//Write code for function that accepts a num and returns a string 
//as follows:
//returns 'Option 1' when value 1
//returns 'Option 2' when value 2
//returns 'Option 3' when value 3
//returns 'Option 4' when value 4
//return 'Invalid Option' otherwise
void menu()
{
    display_menu();
    auto option = 0;
    cout<<"Enter a menu option \n";
    cin>>option;

}


void display_menu()
{
    cout<<"1-Option 1\n";
    cout<<"2-Option 2\n";
    cout<<"3-Option 3\n";
    cout<<"4-Option 4\n";
    cout<<"5-Exit\n";
}

void handle_menu_option(int num)
{
    switch(num)
    {
        case 1:
        cout<<"Option 1";
        case 2:
        case 3:
        case 4:
        case 5:
        default:

    }
}