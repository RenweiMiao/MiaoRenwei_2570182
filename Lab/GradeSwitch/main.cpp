/* 
 * File:   main.cpp
 * Author: Renwei Miao
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Input, output score by using if/else statement
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
    char grade;
    unsigned short score;
    
    //Input or initialize values Here
    cout<<"Input the score, receive your  grade as output"<<endl;
    cin>>score;
    
    //Process/Calculations Here
    switch(score/10)
    {
        case 9:grade='A';
        break;
        case 8:grade='B';
        break;
        case 7:grade='C';
        break;
        case 6:grade='D';
        break;
        default: grade='F';
    }
    
    
    //Output Located Here
    cout<<"Your grade = "<<grade<<" with a score = "<<score<<endl;

    //Exit
    return 0;
}
