/* 
 * File:   main.cpp
 * Author: Renwei Miao
 * Created on October 12, 2016, 6:20 PM
 * Purpose: Display the projected rates for the next six years
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int currCharge=2500;
    float projRate;
    float rateincrs =0.04;
     
    //Input or initialize values Here
    
    
    //Process/Calculations Here
    for(int i=1; i<7; i++)
    {
       
        currCharge= currCharge+rateincrs*currCharge;
        
        
        cout<<"Year  "<<i<<": $"<<currCharge<<endl;
        
        
    }
    
    //Output Located Here
    
    
    
    //Exit
    return 0;
}