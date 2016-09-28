/* 
   File:   main
   Author: Renwei Miao
   Created on September 27, 2016, 8:47 PM
   Purpose:Display the total monthly cost of these expenses, and the total annual cost of these expenses.
in the class 
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <cstdlib>
#include <iomanip>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int LoanPay,insrncPay,gasPay,
        oilPay,tiresPay,maintPay;//Declare variables of several costs
    int totMonthPay;
    int totAnnualPay;
    //Input values
    cout<<"Enter your loan payment per month: ";
    cin>>LoanPay;
    cout<<"Enter your insurance cost per month: ";
    cin>>insrncPay;
    cout<<"Enter your gas cost per month: ";
    cin>>gasPay;
    cout<<"Enter your oil cost per month: ";
    cin>>oilPay;
    cout<<"Enter your tires cost per month: ";
    cin>>tiresPay;
    cout<<"Enter your maintenance cost per month: ";
    cin>>maintPay;
    //Process values -> Map inputs to Outputs
    totMonthPay=LoanPay+insrncPay+gasPay+oilPay+tiresPay+maintPay;
    totAnnualPay=12*totMonthPay;
    
    
    //Display Output
    cout<<"The total monthly cost of those expense is $"<<totMonthPay<<endl;
    cout<<"The total annual cost of these expense is $"<<totAnnualPay<<endl;
    //Exit Program
    return 0;
}