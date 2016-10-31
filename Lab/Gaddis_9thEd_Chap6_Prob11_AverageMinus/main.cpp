/* 
   File:   main
   Author: Renwei Miao
   Created on October 31th, 2016, 10:00 AM
   Purpose: Calculate average minus lowest score
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <cstdlib>    //exit return
#include <iomanip>    
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
void getScr(int &,int &,int &,int &,int &);
float avgM1(int,int,int,int,int);
int getMin(int,int,int,int,int);


//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int s1,s2,s3,s4,s5; //5 scores
    float avg; //Average minus 1 score
    //Input values
    getScr(s1,s2,s3,s4,s5);
    //Process values -> Map inputs to Outputs
    avg=avgM1(s1,s2,s3,s4,s5);
    
    //Display Output
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Average minus lowest score = "<<avg<<endl;
    //Exit Program
    return 0;
   
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************   Problem 1 ****************************************
//Purpose:  Find minimum of 5 scores
//Inputs:   Inputs to the function here  -> Description, Range, Units
//Output:   Outputs to the function here -> Description, Range, Units
//******************************************************************************
int getMin(int s1,int s2,int s3,int s4,int s5)
{
    int min=s1;
    if(min>s2)min=s2;
    if(min>s3)min=s3;
    if(min>s4)min=s4;    
    if(min>s5)min=s5;   
    return min;   
        
}
float avgM1(int s1,int s2,int s3,int s4,int s5)
{
    return 0.25f*(s1+s2+s3+s4+s5-getMin(s1,s2,s3,s4,s5));
}

void getScr(int &s1,int &s2,int &s3,int &s4,int &s5)
{
    //Get data and determine if valid for each score
    int x;
    do
    {
        cout<<"Input a score between 0 and 100"<<endl;
        cin>>x;
        
    }while(x<0||x>100);
    s1=x;
    do
    {
        cout<<"Input a score between 0 and 100"<<endl;
        cin>>x;
        
    }while(x<0||x>100);
    s2=x;
    do
    {
        cout<<"Input a score between 0 and 100"<<endl;
        cin>>x;
        
    }while(x<0||x>100);
    s3=x;
    do
    {
        cout<<"Input a score between 0 and 100"<<endl;
        cin>>x;
        
    }while(x<0||x>100);
    s4=x;
    do
    {
        cout<<"Input a score between 0 and 100"<<endl;
        cin>>x;
        
    }while(x<0||x>100);
    s5=x;
}
