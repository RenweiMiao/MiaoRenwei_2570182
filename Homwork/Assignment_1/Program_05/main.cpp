/* 
   File:   main
   Author: Renwei Miao  
   Created on September 20, 2016, 7:35 PM
   Purpose:  Get the average of a series of values
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
    double value1=28, value2=32; 
    double value3=37, value4=24, value5=33; //Declare variables of five value
    double sum_five_vari;//get sum of five variables
    double sum;//store 5values into sum
    //Input values
    
    //Process values -> Map inputs to Outputs
    sum_five_vari=value1+value2+value3+value4+value5;//Calculate the sum of five values
    sum=sum_five_vari;
    
    //Display Output
    cout<<"The average of five values is "<<static_cast<int>(sum/5)<<endl;
    //Exit Program
    return 0;
}