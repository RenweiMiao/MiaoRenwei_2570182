/* 
   File:   main
   Author: Renwei Miao
   Created on October 4, 2016, 9:45 PM
   Purpose: Play Change for a Dollar Game

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
    double num_pennies,num_nickels,num_dimes,num_qtrs;
    double sum;
    
    //Input values
    cout<<"Please enter the number of pennies :";
    cin>>num_pennies;
    cout<<"Please enter the number of nickels :";
    cin>>num_nickels;
    cout<<"Please enter the number of dimes :";
    cin>>num_dimes;
    cout<<"Please enter the number of quarter :";
    cin>>num_qtrs;
    
    //Process values -> Map inputs to Outputs
    sum= 0.01*num_pennies+0.05*num_nickels+0.10*num_dimes+0.25*num_qtrs;
    
    
    //Display Output
    if(sum==1.00)
    {
        cout<<"Congratulation, you win the game"<<endl;
    }
    else if(sum<1.00)
    {
        cout<<"Sorry, the amount you entered was less than one dollar"<<endl;
    }
    else if(sum>1.00)
    {
        cout<<"Sorry, the amount you entered was more than one dollar"<<endl;
    }
    
    
    
    //Exit Program
    return 0;
}