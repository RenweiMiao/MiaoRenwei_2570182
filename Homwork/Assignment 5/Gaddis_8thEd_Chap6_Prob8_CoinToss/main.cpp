/* 
 * File:   main.cpp
 * Author: Renwei Miao
 * Created on November 11th, 2016, 12:30 AM
 * Purpose: Tossing the coin
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
void coinToss();
    
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int times;
    //Input or initialize values Here
    srand((time(0)));
    cout<< "How many times the coin should be tossed?" << endl; //ask for input
    cin>> times;

    for(int i=1;i<=times;i++)
    {
        coinToss(); //Calling for function
    }
    
    //Exit
    return 0;
}
    void coinToss()
    {   int number;
        number=rand()%2+1;
    
        if(number==1)
        {
            cout<<"Heads"<<endl;
        }
        else if(number==2)
        {
            cout<<"Tails"<<endl;
        }
    
    
    }
