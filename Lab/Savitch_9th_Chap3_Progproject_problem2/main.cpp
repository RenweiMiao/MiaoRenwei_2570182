/* 
 * File:   main.cpp
 * Author: Renwei Miao
 * Created on OCtober 3rd, 2016, 8:50 AM
 * Purpose: Algebra Quadratic Solution
 */

//System Libraries Here
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants 

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float a,b,c;
    
    
    //Input or initialize values Here
    cout<<"Solution to Quadratic ax^2+bx+c=0"<<endl;
    cout<<"Input 3 float data types a b c"<<endl;
    cin>>a>>b>>c;
    
    //Process/Calculations Here
    float vb4sqrt=b*b-4*c;
    
    if(a==0)
    {
  
        if(c==0)
        {
        cout<<"This not an algebraic equation"<<endl;
        };
          )
    else if(vb4sqrt>0)
    {
      cout<<"x =("<<(-b+sqrt(vb4sqrt))/(2*a))<<" , ";
      cout<<"x =("<<(-b-sqrt(vb4sqrt))/(2*a))<<" ) "<<endl; 
                 
    };
    else
    {
     cout<<"x =("<< (-b/(2*a))<<" + "<<(sqrt(vb4sqrt)/(2*a))<<"i, ";
     cout<<"x =("<<(-b/(2*a))<<" + "<<(-sqrt(vb4sqrt)/(2*a))<<<<"i)"<<endl;   
    };
    //Output Located Here
   
    //Exit
    return 0;
}

