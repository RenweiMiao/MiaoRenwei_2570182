/* 
   File:   main
   Author: Renwei Miao
   Created on September 20, 2016, 10:35 PM
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
    double fiveYears,sevenYears,tenYears;//Declare ocean level of 5,7,10years
    double lvloceanpPyr= 1.5;
    
    //Input values
    
    //Process values -> Map inputs to Outputs
    fiveYears=5*lvloceanpPyr;
    sevenYears=7*lvloceanpPyr;
    tenYears=10*lvloceanpPyr;
    //Display Output
    cout<<"The ocean's level in 5 years will be "<<fiveYears<<"mm"<<endl;
    cout<<"The ocean's level in 7 years will be "<<sevenYears<<"mm"<<endl;
    cout<<"The ocean's level in 10 years will be "<<tenYears<<"mm"<<endl;
    //Exit Program
    return 0;
}