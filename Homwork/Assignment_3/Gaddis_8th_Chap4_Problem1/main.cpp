/* 
   File:   main
   Author: Renwei Miao
   Created on October 1, 2016, 9:20 PM
   Purpose:Determine which number is the smaller and which is the larger

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
    int number1;
    int number2;
    int largerNum;
    int smallerNum;
    
    //Input values
    cout<<"Enter first number you like :\n";//Type in the first number
    cin>>number1;
    cout<<"Enter second number you like :\n";//Type in the second number
    cin>>number2;
    
    
    //Process values -> Map inputs to Outputs
    largerNum=number1>number2?number1:number2;//Get the larger number 
    smallerNum=number2>number1?number1:number2;//Get the smaller number
    
    
    
    //Display Output
    cout<<"The larger number is "<<largerNum<<endl;
    cout<<"The smaller number is "<<smallerNum<<endl;
    //Exit Program
    return 0;
}