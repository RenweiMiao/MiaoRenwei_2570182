/* 
 * File:   main.cpp
 * Author: Renwei Miao
 * Created on October 11, 2016, 10:42 PM
 * Purpose: Calculate sum of numbers
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
    int number; 
    int sum=0;
    //Input or initialize values Here
    cout<<"You can enter a positive integer value :";
    cin>>number;
    
    //Process/Calculations Here
    for(int counter=0; counter<number; counter++)
    {
        sum += counter ;
        sum++;
        
    }
    
    //Output Located Here
    
    cout<<"The sum of positive integer value is "<<sum<<endl;
    
    //Exit
    return 0;
}