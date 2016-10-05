/* 
   File:   main
   Author: Renwei Miao
   Created on October 4, 2016, 8:00 PM
   Purpose:Time Calculator

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
    double seconds,minutes,hours,days;
    
    //Input values
    cout<<" You can enter a number of second :";
    cin>>seconds;
    
    
    //Process values -> Map inputs to Outputs
    cout<<fixed<<setprecision(0);
    
     
    
    //Display Output
    if(seconds>=86400)
        {
            cout<<"The number of days is"<<seconds/86400<<" days."<<endl;
        }
     else if(seconds>=3600)
        {
            cout<<"The number of hours is"<<seconds/3600<<" hours."<<endl;
        }  
     else if(seconds>=60)
        {
            cout<<"The number of minutes is"<<seconds/60<<" minutes."<<endl;
        }
        
        
    //Exit Program
    return 0;
}