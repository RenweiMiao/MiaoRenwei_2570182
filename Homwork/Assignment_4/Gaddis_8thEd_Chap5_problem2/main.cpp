/* 
 * File:   main.cpp
 * Author: Renwei Miao
 * Created on October 12, 2016, 9:33 AM
 * Purpose:  Display 16 characters on each line for the ASCII Codes
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    
    
    //Input or initialize values Here
   
   
    //Process/Calculations Here
     for(int i =0; i<127; i++)
    {
        for(int j =0; j<16; j++)
        {
           cout<<char(i)<<" "<<endl; 
        }
    }
    //Output Located Here
     cout<<"This is 16 characters on each line"<<endl;
    //Exit
    return 0;
}

