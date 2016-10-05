/* 
 * File:   main.cpp
 * Author: Renwei Miao
 * Created on October 5, 2016, 9:55 AM
 * Purpose:  Hello World Template
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
    int a,b;
    char temp;
    //Input or initialize values Here
    cout<<"You can input two numbers I can sort for you :";
    cin>>a>>b;
    
    //Process/Calculations Here
    if(a<b)
    {
        swap(a,b);
        cout<<"The smallest number is"<<a<<"The largest number is"<<b;        
    }
    else
    {
        swap(b,a);
        cout<<"The smallest number is"<<a<<"The largest number is"<<b; 
                
    }
    //Output Located Here
  

    //Exit
    return 0;
}

