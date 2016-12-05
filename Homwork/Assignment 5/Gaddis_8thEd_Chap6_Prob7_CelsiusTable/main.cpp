/* 
 * File:   main.cpp
 * Author: Renwei Miao
 * Created on November 11th, 2016, 12:00 AM
 * Purpose: Converting a temperature from Fahrenheit to Celsius  
 */

//System Libraries Here
#include <iostream>  //I/O
#include <cstdlib>   //Random
#include <ctime>     //Time
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
int celsius(int);
    
//Program Execution Begins Here
int main(int argc, char** argv) {
     //Declare all Variables Here
    int Celsius;
     //Input or initialize values Here
    for(int Fahrenheit=1;Fahrenheit<=20;Fahrenheit++)
    {    
        Celsius=celsius(Fahrenheit);
        cout<<"Fahrenheit: "<<Fahrenheit<<" Celsius: "<<Celsius<<endl;
        
    }
    
    //Exit
    return 0;
}
int celsius(int F)
{
    int C;
    
    C=((5.0/9.0)*(F-32));
    
    return C;
}
