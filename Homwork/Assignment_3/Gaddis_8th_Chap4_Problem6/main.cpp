/* 
   File:   main
   Author: Renwei Miao
   Created on October 4, 2016, 7:50 PM
   Purpose: Calculate the weight of object

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
    unsigned short mass, weight;
    
    //Input values
    cout<<"Please enter an object's mass :";
    cin>>mass;//input the mass
    
    
    //Process values -> Map inputs to Outputs
    weight=mass*9.8;
     
    
    //Display Output
    if(weight>1000)
    {
        cout<<"The weight of object is too heavy."<<endl;
    }
    if(weight<10)
    {
        cout<<"The weight of object is too light."<<endl;
    }
    
    //Exit Program
    return 0;
}