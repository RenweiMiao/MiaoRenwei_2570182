/* 
 * File:   main.cpp
 * Author: Renwei Miao
 * Created on October 3rd, 2016, 10:47 AM
 * Purpose: Body Mass Index 
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    double weight,height;
    double BMI;
    //Input or initialize values Here
    cout<<"Please input your weight :";
    cin>>weight;
    cout<<"Please input your height :";
    cin>>height;
    
    //Process/Calculations Here
    BMI =(weight*703)/(height^2);
    
    //Output Located Here
    if(BMI<18.5)
    {
        cout<<"You are underweight.";
    }
    else if(BMI>25)
    {
        cout<<"You are overweight.";
    }

    //Exit
    return 0;
}

