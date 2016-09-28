/* 
   File:   main
   Author: Renwei Miao
   Created on September 27, 2016, 8:36 PM
   Purpose:Display minimum amount of insurance should pay

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
    int CostReplace;
    double miniInsrnc;
    
    //Input values
    cout<<"Enter the replacement coast of a building: ";
    cin>>CostReplace;//Input replacement cost of a building 
    
    
    //Process values -> Map inputs to Outputs
     
    miniInsrnc=0.8*CostReplace;//Calculate minimum amount of insurance
     
    
    //Display Output
    cout<<"the minimum amount of insurance they shall play =$"<<miniInsrnc<<endl;
    //Exit Program
    return 0;
}