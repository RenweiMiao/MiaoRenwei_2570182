/* 
 * File:   main.cpp
 * Author: Renwei Miao
 * Created on October 12, 2016, 10:00 AM
 * Purpose: Calculate ocean level for the next 25 years  
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
    float oceanLvl = 0;//Declare Ocean level
    int maxYear =26;  //Declare max year
    
    
    //Input or initialize values Here
  
    //Process/Calculations Here
      for (int i=1; i<maxYear;i++)
    {
        oceanLvl += 1.5;
        
        cout<<"Year "<<i<<":"<<oceanLvl<<"mm"<<endl;
    }
    //Output Located Here

    //Exit
    return 0;
}

