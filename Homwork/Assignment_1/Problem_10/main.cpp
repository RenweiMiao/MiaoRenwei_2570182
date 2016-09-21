/* 
   File:   main
   Author: Renwei Miao
   Created on September 29, 2016, 9:41 AM
   Purpose:  
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
    float milesTravel=375;
    float gallonUsed=15;
    float MPG;
    //Input values
    
    //Process values -> Map inputs to Outputs
    MPG=milesTravel/gallonUsed;
    //Display Output
    cout<<"The number of miles per gallon the car gets is  "<<MPG;
    cout<<"miles/gal"<<endl;
    //Exit Program
    return 0;
}