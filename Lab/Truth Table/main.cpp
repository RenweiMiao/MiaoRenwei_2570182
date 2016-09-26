/* 
 * File:   main.cpp
 * Author: Renwei Miao
 * Created on September 26, 2016, 9:35 AM
 * Purpose:Display 13 columns of the truth table
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    bool x,y;
    
    
    //Output the heading of the truth table
    
    cout<<" X Y !X !Y X&&Y X||Y X^Y X^Y^Y X^Y^X !(X&&y) !X||!Y !(X||Y) !X&&1Y\n";
    //Input or initialize values Here
    x=true;
    y=true;
    //Process/Calculations Here
    
    //Output Located Here
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<" ";
    cout<<(!x?'T':'F')<<" ";
    cout<<(!y?'T':'F')<<" ";
    cout<<(x&&y?'T':'F')<<" ";
   
    cout<<endl;
    y=false;
    
    //Output Located Here
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<" ";
    cout<<(!x?'T':'F')<<" ";
    cout<<(!y?'T':'F')<<" ";
    cout<<(x&&y?'T':'F')<<" ";
    //Exit
    return 0;
}

