/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
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
    if (score>=90)grade='A';
    if(score<90&&score>=80)grade= 'B';
    if(score<80&&score>=70)grade='C';
    if(score<70&&score>=60)grade='D';
    if(score<60)grade='F';
    
    //Output Located Here
    cout<<"Your grade = "<<grade<<" with a score = "<<score<<endl;

    //Exit
    return 0;
}
