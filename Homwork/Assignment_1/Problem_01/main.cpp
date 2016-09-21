/* 
   File:   main
   Author: Renwei Miao  
   Created on September 17, 2016, 4:34 PM
   Purpose: Store two numbers and get sum of two numbers 
 */

//System Libraries
#include <iostream>//Input/Output objects
#include <cstdlib>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int StoreNum1 =50, 
        StoreNum2 =100;  //Store two numbers in variables 
    int total; 
    
    
    
    //Process values -> Map inputs to Outputs
    
    total = StoreNum1 + StoreNum2; //Store these two numbers in total
    
    //Display Output
    cout<< "The total of these two numbers is "<<total<<endl;
   
    //Exit Program
    return 0;
}