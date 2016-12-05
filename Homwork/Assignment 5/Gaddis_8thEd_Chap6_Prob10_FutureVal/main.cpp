/* 
 * File:   main.cpp
 * Author: Renwei Miao
 * Created on November 11th, 2016, 12:30 AM
 * Purpose: Tossing the coin
 */

//System Libraries Here
#include <iostream>  //I/O
#include <cstdlib>   //Random
#include <ctime>     //Time
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
float presentValue(float,float,float);
    
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float PresentVal, monInterest, numMonths,futureVal;
    
    //Input or initialize values Here
   
    cout<<"Please enter account present value: $"; //ask for input
    cin>>PresentVal;
    cout<<"Input annual interest rate: ";
    cin>>monInterest;
    cout<<"Input the numbers of year: ";
    cin>>numMonths;
    
    //Output values
    futureVal=presentValue(PresentVal,monInterest,numMonths);      
    
    cout<<"The amount that you will have after "<<numMonths<<" month is $"<<futureVal<<endl;
    
    //Exit
    return 0;
}
float presentValue(float P,float i,float t)
{
    float F;
    
    F=P*(pow(1+i,t));
    
    return F;
}