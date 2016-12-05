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
    float futVal, anlInterest, numYears,PresentVal;
    
    //Input or initialize values Here
   
    cout<<"How much future value you want in the account: $"; //ask for input
    cin>>futVal;
    cout<<"Input annual interest rate: ";
    cin>>anlInterest;
    cout<<"Input the numbers of year: ";
    cin>>numYears;
          
    PresentVal=presentValue(futVal,anlInterest,numYears);      
    
    cout<<"The amount that you need to deposit today is $"<<PresentVal<<endl;
    //Exit
    return 0;
}
float presentValue(float F,float r,float n)
{
    float P;
    
    P=F/(pow(1+r,n));
    
    return P;
    
   
}