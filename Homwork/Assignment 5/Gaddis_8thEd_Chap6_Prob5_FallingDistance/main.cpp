/* 
 * File:   main.cpp
 * Author: Renwei Miao
 * Created on November 11th, 2016, 9:40 AM
 * Purpose: Display the distance of falling object
 */

//System Libraries Here
#include <iostream>  //I/O


using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
double fallingDistance(double);
    
//Program Execution Begins Here
int main(int argc, char** argv) {
     //Declare all Variables Here
    
    
     //Input or initialize values Here
    for(int t=1;t<10;t++)
    {
       fallingDistance(t); 
    }
    
   
    
    
    
  
    
     //Output Located Here
 

    //Exit
    return 0;
}
double fallingDistance(double t)
{
    double d;
    double g=9.8;
 
    d=0.5*g*t*t;
    
    cout<<"The distance the object falls in "<<t<<"sec is "<<d<<"meters."<<endl;
  
    
}

