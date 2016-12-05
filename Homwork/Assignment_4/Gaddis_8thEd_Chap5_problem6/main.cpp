/* 
 * File:   main.cpp
 * Author: Renwei Miao
 * Created on October 16, 2016, 8:08 PM
 * Purpose: Calculate Distance Traveled.
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
    int hours, speed, distance;
    
    //Input or initialize values Here
    cout<<"What is the speed of the vehicle in mph?";
    cin>>speed;
    cout<<"How many hours has your vehicle traveled?";
    cin>>hours;
    cout<<"\n Hour "<<"   " <<" Distance Traveled\n"<< endl;
    cout<<"-------------------------------"<<endl;
    
    //Process/Calculations Here
    for(int i=1; i<=hours; i++)
    {   
        distance = speed*i;
        
        cout<<i<<"            "<<distance<<endl;
    }
    
    //Output Located Here
    
    
    
    //Exit
    
    return 0;
}