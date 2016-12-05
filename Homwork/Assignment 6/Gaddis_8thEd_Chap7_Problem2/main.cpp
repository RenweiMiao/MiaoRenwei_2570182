/* 
 * File:   main.cpp
 * Author: Renwei Miao
 * Created on November 17, 2016, 9:00 AM
 * Purpose: Calculate rainfall for 12 month
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only

//Function Prototypes Here
double fillAry(double [], int);
double calculation(double [], int);
double lowAndHighRain(double [], int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int const SIZE=12;
    double array[SIZE];
    
    //Fill the array
    cout<<fixed<<showpoint<<setprecision(2);
    
    fillAry(array,SIZE);
    
    //Output Located Here
    calculation(array,SIZE);
    
    //Compare array to get largest and smallest value
    lowAndHighRain(array,SIZE);
    
    
    //Output Located Here
    
    //Exit
    return 0;
}
double  fillAry(double a[], int size)
{   

    for(int i=0;i<size;i++)
    {
        cout<<"Enter the total rainfall for #"<<i<<" month :";
        cin>>a[i];
        
        
        
    }
}
double calculation(double a[],int size)
{
    double totRainF=0;
    double avrgRainF;
    
    for(int i=0;i<size;i++)
    {
       totRainF+=a[i];
    }
    
    avrgRainF=totRainF/size;
    
    cout<<"The total rainfall for the year is "<<totRainF<<" inch"<<endl;
    cout<<"The average monthly rainfall is "<<avrgRainF<< " inch"<<endl;
    
}
double lowAndHighRain(double a[], int size)
{
    double highest,lowest;
    highest=a[0];
    lowest=a[0];
    
    for(int i=0;i<size;i++)
    {
        if(a[i]>highest)
            highest=a[i];
        else if(a[i]<lowest)
            lowest=a[i];
      
    }
    
    cout<<"The highest amount of rain is "<<highest<<" inch."<<endl;
    cout<<"The lowest amount of rain is "<<lowest<<" inch."<<endl;
}
