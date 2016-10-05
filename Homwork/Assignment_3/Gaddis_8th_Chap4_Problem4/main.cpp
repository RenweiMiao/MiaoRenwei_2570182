/* 
   File:   main
   Author: Renwei Miao
   Created on October 2, 2016, 11:23 PM
   Purpose:

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
    int length1, width1,length2,width2;
    int rectangle1, rectangle2;
    
    //Input values
    cout<<"Enter the length of first rectangle :\n ";
    cin>>length1;
    cout<<"Enter the width of first rectangle :\n";
    cin>>width1;
    cout<<"Enter the length of second rectangle :\n ";
    cin>>length2;
    cout<<"Enter the width of second rectangle :\n ";
    cin>>width2;
    //Process values -> Map inputs to Outputs
    rectangle1=length1*width1;
    
    rectangle2=length2*width2;
     
    
    //Display Output
    if(rectangle1>rectangle2)
    {
        cout<<"The first rectangle has the greater area."<<endl;
    }
    else if(rectangle1<rectangle2)
    {
        cout<<"The second rectangle has the greater area."<<endl;
    }
    else if(rectangle1==rectangle2)
    {
        cout<<"The area are the same."<<endl;
    }
    
    //Exit Program
    return 0;
}