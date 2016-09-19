/* 
 * File:   main.cpp
 * Author: Renwei Miao
 * Created on September 19th, 2016, 9:52 AM
 * Purpose: Monthly Payment 
 */

//System Libraries 
#include <iostream> //Input./Output objects
#include <iomanip> //Format
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants 
const int PERCENT =100; //Percentage conversion
const int MONTHS =12; //Months in a year
//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char nCmPrds =36; //Number of monthly compounding periods
    float intRate =12; //Percentage per year
    float loanAmt =1e4f; //$10,000 Loan
    float monPay; //Monthly Payment $'s
    float totPaid; //Total Amount paid $'s
    float intPaid ; //Total In terest paid $'s
    
    //Input or initialize values Here
    
    //Process/Calculations Here
    intRate/=(PERCENT*MONTHS);
    float temp =pow((1+intRate), nCmPrds);
    monPay=intRate*temp*loanAmt/(temp-1);
    totPaid=nCmPrds*monPay;
    intPaid =totPaid - loanAmt;
    
    //Output Located Here
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Loan Amount  :$"<<setw(8)<<loanAmt<<endl;
    cout<<"Interest Rate $/month :"<<setw(5)<<intRate<<endl;
    cout<<"Number of compounding periods   $:"<<static_cast<int>(nCmPrds)<<endl;
    cout<<"Monthly Payment $:"<<setw(5)<<monPay<<endl;
    cout<<"Interest Paid $:"<<setw(8)<<intPaid<<endl;
    cout<<"Total Paid $:"<<setw(8)<<totPaid<<endl;        

    
    
    
   
    return 0;
}

