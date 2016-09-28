/* 
 * File:   main.cpp
 * Author: Renwei Miao
 * Created on September 21th, 2016, 10:35 AM
 * Purpose:  Calculate a car's gas mileage
 */



//System Libraries Here
#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float gasHold;
    float milesDrive;
    float MPG;
    //Input or initialize values Here
    cout<<fixed<<setprecision(2)<<showpoint<<endl;
    
    cout<<"Enter the number of gallons of gas the car can hold :";
    cin>> gasHold;
    
    cout<<"Enter the number of miles can be driven :";
    cin>> milesDrive;
    
    
    //Process/Calculations Here
    MPG= milesDrive/gasHold;
    //Output Located Here
    cout<<"the number of miles maybe driven per gallon of gas :";
    cout<<MPG<<"miles/gallon"<<endl;

    //Exit
    return 0;
}
