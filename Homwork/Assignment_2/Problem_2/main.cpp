/* 
   File:   main
   Author: Renwei Miao
   Created on September 25, 2016, 8:53 PM
   Purpose: Gain the amount of income generated from ticket sales 
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
    int num_ticket1;//Tickets for Class A
    int num_ticket2;//Tickets for Class B
    int num_ticket3;//Tickets for Class C
    double amnt_income;//Amount of income generated
    
    //Input values
    cout<<"How many ticket of Class A do you want to buy?";
    cin>>num_ticket1;
    cout<<"How many ticket of Class B do you want to buy?";
    cin>>num_ticket2;
    cout<<"How many ticket of Class C do you want to buy?";
    cin>>num_ticket3;
    
    //Process values -> Map inputs to Outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    amnt_income=num_ticket1*15+num_ticket2*12+num_ticket3*9; 
    
    //Display Output
    cout<<"The dollar amount of income = $"<<amnt_income<<endl;
    //Exit Program
    return 0;
}