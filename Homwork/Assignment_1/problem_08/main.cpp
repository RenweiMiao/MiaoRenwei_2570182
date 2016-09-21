/* 
   File:   main
   Author: Renwei Miao
   Created on September 20, 2016, 10:50 PM
   Purpose: Calculate total purchase  
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
    double Price_item1=15.95,Price_item2=24.95,
           Price_item3=6.95, Price_item4=12.95,
           Price_item5=3.95;  //Store the prices of five items in variable
    double subTotal;         //Store the subtotal of the sale in variable
    double amount_tax;       //Store the amount of sale tax into variable
    double total;            //Store the total into variable
   
    //Input values
    cout<<fixed<<setprecision(2)<<showpoint<<endl;
    //Process values -> Map inputs to Outputs
    subTotal=Price_item1+Price_item2+Price_item3+Price_item4+Price_item5;//Get the subtotal 
    amount_tax=subTotal*0.07; //Calculate the amount of sales tax
    total=subTotal+amount_tax;//Calculate the total
    
    //Display Output
    cout<<"The price of item 1 is  $"<<Price_item1<<endl;
    cout<<"The price of item 2 is  $"<<Price_item2<<endl;
    cout<<"The price of item 3 is  $"<<Price_item3<<endl;
    cout<<"The price of item 4 is  $"<<Price_item4<<endl;
    cout<<"The price of item 5 is  $"<<Price_item5<<endl;
    cout<<"The amount of sales tax is  $"<<amount_tax<<endl;
    cout<<"The sales total is  $"<<total<<endl;
    
    //Exit Program
    return 0;
}