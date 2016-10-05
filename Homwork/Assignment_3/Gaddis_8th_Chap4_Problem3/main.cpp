/* 
   File:   main
   Author: Renwei Miao
   Created on October 2, 2016, 8:35 PM
   Purpose:

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
    int month, day, year;
    int date;
    
    //Input values
    cout<<"Please enter a month :\n";
    cin>>month;
    cout<<"Please enter a day :\n";
    cin>>day;
    cout<<"Please enter a two-digit year :\n";
    cin>>year;
    
    
    
    //Process values -> Map inputs to Outputs
    date=month*day;
    
     
    
    //Display Output
    if(date==year)
    {
        cout<<"The date is magic!"<<endl;
    }
    else
    {
        cout<<"The date is not magic."<<endl;
    }
    //Exit Program
    return 0;
}