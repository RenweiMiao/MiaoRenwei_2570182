/* 
   File:   main
   Author: Renwei Miao
   Created on September 25, 2016, 9:18 PM
   Purpose: Calculate the average test score  
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
    int testScore1;
    int testScore2;
    int testScore3;
    int testScore4;
    int testScore5;
    double avrgScore;
    
    //Input values
    cout<<"Please enter your test score 1:\n";
    cin>>testScore1;
    cout<<"Please enter your test score 2:\n";
    cin>>testScore2;
    cout<<"Please enter your test score 3:\n";
    cin>>testScore3;
    cout<<"Please enter your test score 4:\n";
    cin>>testScore4;
    cout<<"Please enter your test score 5:\n";
    cin>>testScore5;
    
    //Process values -> Map inputs to Outputs
    cout<<fixed<<setprecision(1)<<showpoint;
    
    avrgScore=(testScore1+testScore2+testScore3+testScore4+testScore5)/5;
   
    //Display Output
    cout<<"The average of test score you get = "<<avrgScore<<endl;
    //Exit Program
    return 0;
}