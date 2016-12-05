/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on December 5th, 2016, 10:00 AM
 * Purpose: Display full name with structure
 */

//System Libraries Here
#include <iostream>
#include <string>
using namespace std;

//User Libraries Here
#include "Array.h"


//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    Name names;
    
    //Input or initialize values Here
    cout<<"Please type in your first name: \n";
    cin>>names.First;
    cout<<"Please type in your Middle name: \n";
    cin>>names.Middle;
    cout<<"Please type in your last name: \n";
    cin>>names.Last[20];
    //Process/Calculations Here
    
    //Output Located Here
    cout<<"Your full name is "<<names.First<<"."<<names.Middle<<"."<<names.Last[20]<<endl;

    //Exit
    return 0;
}

