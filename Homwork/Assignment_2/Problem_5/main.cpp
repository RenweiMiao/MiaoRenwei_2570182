/* 
   File:   main
   Author: Renwei Miao
   Created on September 27, 2016, 11.14 PM
   Purpose:Display male and Female Percentages  
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
    int num_males;
    int num_females;
    int totalNum;
    double malePercent;
    double femalePercent;
    //Input values
    cout<<"How many Males students in a class?\n";
    cin>>num_males;
    cout<<"How many Females students in a class?\n";
    cin>>num_females;
    
 
    //Process values -> Map inputs to Outputs
    cout<<fixed<<setprecision(3)<<showpoint;
    totalNum=num_males+num_females;
    malePercent=static_cast<double>(num_males)/totalNum;
    femalePercent=static_cast<double>(num_females)/totalNum;
    
            
            
    
    //Display Output
    cout<<"Percentage of males  ="<<malePercent<<endl;
    cout<<"Percentage of females  ="<<femalePercent<<endl;
    //Exit Program
    return 0;
}