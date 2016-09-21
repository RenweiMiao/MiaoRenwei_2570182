/* 
   File:   main
   Author: Renwei Miao
   Created on September 17, 2016, 9:18 PM
   Purpose: Compute total sales  
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
    int Purchase =95;
    double StTaxRate =0.04;
    double CtryTaxRate =0.02;    
    double StTax, CtryTax; 
    double totalTax;
    //Input values
    
    //Process values -> Map inputs to Outputs
    StTax=Purchase*StTaxRate; //Calculate the state sales tax
    CtryTax=Purchase*CtryTaxRate; //Calculate the country sales tax
    totalTax=Purchase+StTax+CtryTax; //Get the total sales tax
    //Display Output
    cout<<"The total sales tax you need to pay is $"<<totalTax<<endl;
    
    //Exit Program
    return 0;
}