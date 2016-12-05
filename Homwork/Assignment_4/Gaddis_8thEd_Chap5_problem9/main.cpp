/* 
 * File:   main.cpp
 * Author: Renwei Miao
 * Created on October 16, 2016, 10:18 PM
 * Purpose: Calculate Average Rainfall
 */

//System Libraries Here
#include <iostream>
#include<iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int years, totmonth;
    int month=12;
    float InchRainFl;
    float sumRainFl;
    float avrgRainFl;
    //Input or initialize values Here
    cout<<"Enter the number of years :";
    cin>>years;
    
    //Process/Calculations Here
    for(int i=1; i<=years; i++)
    {
       for(int j=0; j<12;j++)
       {
           cout<<"Enter the inches of rainfall for this month :";
           cin>>InchRainFl;
           sumRainFl+=InchRainFl;
       }
       
       
    }
    avrgRainFl=sumRainFl/12;
    totmonth=years*month;
    cout<<setprecision(3)<<showpoint;
    //Output Located Here
    cout<<"The number of month = "<<totmonth<<endl;
    cout<<"The total inches of rainfall ="<<sumRainFl<<"Inches"<<endl;
    cout<<"The average rainfall per month for the entire period ="<<avrgRainFl<"Inches"<<endl;
       
    
    
    
    //Exit
    return 0;
}