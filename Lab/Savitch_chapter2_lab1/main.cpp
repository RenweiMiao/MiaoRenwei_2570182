/* 
 * File:   main.cpp
 * Author: Renwei Miao
 * Created on septenmber,12 2016, 10:45 AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const float GRAVITY=32.174;
//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float time; //Time as input in second
    float disFell; //Distance in free fall
    int places; //Place to round the answer
    
    //Input or initialize values Here
    cout <<"This problem determines distance dropped in free-fall"<<endl;
    cout <<"Input the time in free fall,units of second"<<endl;
    cin>>time;
    cout <<"How many decimal places to round the result?"<<endl;
    cin>>places;
    
    //Process/Calculations Here
    disFell= GRAVITY*time*time/2;
    float shift = pow(10, places);
    int round1= disFell*shift+0.5;
    disFell =round1/shift;
    
    //Display output
    cout<<"GRAVITY ="<<GRAVITY<<"ft/sec"<<endl;
    cout <<"Time fallen ="<<time<<"second"<<endl;
    cout<<"Distance traveled = "<<disFell<<"ft"<<endl;
    
   

    //Exit
    return 0;
}

