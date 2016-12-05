/* 
 * File:   main.cpp
 * Author: Renwei Miao
 * Created on October 16, 2016, 11:15 PM
 * Purpose: Convert Celsius to Fahrenheit Table
 */

//System Libraries Here
#include <iostream>
#include<iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int Celsius;
    float Fahrenheit;
    
    //Input or initialize values Here
    cout<<"\n Celsius"<<"      "<<"Fahrenheit\n";
    cout<<"---------------------------"<<endl;
   
    
    //Process/Calculations Here
    for(int i=0; i<=20; i++)
    {   
        
        Fahrenheit=((9/5)*i)+32; 
        
        cout<<i<<"              "<<Fahrenheit<<endl;
        
    }
    
    //Output Located Here
    
    
    
    //Exit
    return 0;
}