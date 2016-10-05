/* 
   File:   main
   Author: Renwei Miao
   Created on October 4, 2016, 9:00 PM
   Purpose: Color Mixer

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
    unsigned short red, blue,yellow;
    unsigned short color1, color2;
     
    
    
    //Input values
    cout<<"Select two colors so that can mix for you :";
    cin>>color1>>color2;//Input two colors
    
    
    //Process values -> Map inputs to Outputs
    
     
    
    //Display Output
    if (color1==red&&color2==blue)
    {
        cout<<"Color red and blue, you get purple."<<endl;
    }
    else if(color1==red&&color2==yellow)
    {
        cout<<"Color red and yellow, you get orange."<<endl;
    }
    else if(color1==blue&&color2==yellow)
    {
        cout<<"Color blue and yellow, you get green."<<endl;
    }
    else
    {
        cout<<"Error!"<<endl;
    }
    //Exit Program
    return 0;
}