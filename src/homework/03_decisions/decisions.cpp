//write include statement for decisions header
#include<iostream>
#include"if.h"
#include "switch.h"
using std::cout; using std::cin; using std::string;
//Write code for function(s) code here

std::string get_letter_grade_using_if(int grade)
{
    string result;

    if(grade < 60){
        result = "F";
    }
    else if(grade < 70){
        result = "D";
    }
    else if(grade < 80){
        result = "C";
    }
    else if(grade < 90){
        result = "B";
    }
    else {
        result = "A";
    }
    return result;

}

std::string get_letter_grade_using_switch(int grade)
{
    string result;

    switch(grade){
    case 0 ... 59:
    result = "F";
    break;

    case 60 ... 69:
    result = "D";
    break;

    case 70 ... 79:
    result = "C";
    break;

    case 80 ... 89:
    result = "B";
    break;

    case 90 ... 100:
    result = "A";
    break;
    }

    return result;

}

int get_num_grade(){
    int grade = 0;
    cout<<"Enter a number between 0 and 100: \n\n";
    cin>>grade;
    if(grade < 0||grade > 100){
        cout<<"Number out of range";
        return(0);
    }
    return grade;
}

void menu_select(int num){

	switch (num)
	{
	case 1:
		cout<< get_letter_grade_using_if(get_num_grade())<<"\n";
		break;
	case 2:
        cout<< get_letter_grade_using_switch(get_num_grade())<<"\n";
		break;
	case 3:
        cout<<"Exit";
		break;
	default:
		break;
	}
}

