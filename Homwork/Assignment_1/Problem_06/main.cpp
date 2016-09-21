/* 
   File:   main
   Author: Renwei Miao
   Created on September 20, 2016, 10:20 PM
   Purpose:  
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <cstdlib>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    double payAmount= 2200.0;//Hold amount of pay the employee earns
    int payPeriods= 26;//Hold the number of pay periods in a year
    int annualPay;//Hold the employee's total annual pay
    //Input values
    
    //Process values -> Map inputs to Outputs
    annualPay= payAmount*payPeriods;
    //Display Output
    cout<<"The employee's total annual pay is   $"<<annualPay<<endl;
    //Exit Program
    return 0;
}