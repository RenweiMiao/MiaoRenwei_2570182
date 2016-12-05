/* 
 * File:   main.cpp
 * Author: Renwei Miao
 * Created on November 7th, 2016, 9:37 AM
 * Purpose: Calculate retail price
 */

//System Libraries Here
#include <iostream>  //I/O
#include <cstdlib>   //Random
#include <ctime>     //Time
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
 float calculateRetail(float, float);
    
//Program Execution Begins Here
int main(int argc, char** argv) {
     //Declare all Variables Here
     float wholeSale;
     float mrkupPerctg;
    
     //Input or initialize values Here
     cout<<"Enter an item's wholesale cost: $ ";
     cin>>wholeSale;
     cout<<"Enter the markup percentage: $ ";
     cin>>mrkupPerctg;
     
     //Fill the array
     calculateRetail(wholeSale,mrkupPerctg);
    
     //Output Located Here
 

    //Exit
    return 0;
}
float calculateRetail(float sale, float percent)
{
    sale=sale+sale*percent;
    
    cout<<"The item retail price is $"<<sale<<endl;
}
