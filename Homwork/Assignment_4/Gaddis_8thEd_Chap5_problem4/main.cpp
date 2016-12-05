/* 
 * File:   main.cpp
 * Author: Renwei Miao
 * Created on October 12, 2016, 10:38 AM
 * Purpose: Display the number of calories burned
 *          after 5, 10, 15, 20, 25, and 30 minutes.  
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
    float calorBurn =3.6;
    float totBurn;
    
    //Input or initialize values Here
    
    //Process/Calculations Here
    for (int i =1; i<7; i++)
    {   
        totBurn=calorBurn*(5*i);
        
        cout<<"The number of calories burned after"<<5*i;
        cout<<" minutes is "<< totBurn<<"."<<endl;
    }
    //Output Located Here

    //Exit
    return 0;
}

