/* 
   File:   main
   Author: Renwei Miao
   Created on September 18, 2016, 10:12   PM
   Purpose:  
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <cstdlib>
#include <iomanip>   //Set precision
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    double mealCharge= 88.67;
    double TaxPercent= 0.0675;
    double TipPercent= 0.2;
    double taxAmounmt, tipAmount, TotalBill;
    

    //Process values -> Map inputs to Outputs
    cout<<fixed<<setprecision(2)<<endl;
    taxAmounmt= mealCharge*TaxPercent; 
    tipAmount= mealCharge*TipPercent;
    TotalBill= mealCharge+ taxAmounmt+tipAmount; //Calculate the total bill
    
    //Display Output
    cout<<"The meal cost will be $"<<mealCharge<<endl;
    cout<<"The tax amount will be $"<<taxAmounmt<<endl;
    cout<<"The tip amount will be $"<<tipAmount<<endl;
    cout<<"The total bill will be $"<<TotalBill<<endl;      
   
    //Exit Program
    return 0;
}