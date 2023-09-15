//write include statement for decisions header
#include<iostream>
#include"if.h"
#include "switch.h"
using std::cout; using std::cin; using std::string;
//Write code for function(s) code here

string get_letter_grade_using_if(int grade)
{
    string result;

    if(grade < 51){
        result = "F";
    }
    else if(grade < 66){
        result = "D";
    }
    else if(grade < 76){
        result = "C";
    }
    else if(grade < 86){
        result = "B";
    }
    else {
        result = "A";
    }
    return result;

}

string get_letter_grade_using_switch(int grade)
{
    string result;

    switch(grade){
    case 1 ... 50:
    result = "F";
    break;

    case 51 ... 65:
    result = "D";
    break;

    case 66 ... 75:
    result = "C";
    break;

    case 76 ... 85:
    result = "B";
    break;

    case 86 ... 100:
    result = "A";
    break;
    }

    return result;

}