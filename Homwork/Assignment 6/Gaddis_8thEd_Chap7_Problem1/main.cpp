/* 
 * File:   main.cpp
 * Author: Renwei Miao
 * Created on November 16, 2016, 9:22 AM
 * Purpose: Find largest/smallest Array Value
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
void fillArray(int [], int);
void showArray(int [], int);
void comparAry(int [], int);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the random number seed
    
    
    //Declare all Variables Here
    int const SIZE=10;
    int array[SIZE];
   
    //Fill the array
     fillArray(array,SIZE);
    
    //Output Located Here
    showArray(array,SIZE);
    
    //Compare array to get largest and smallest value
    comparAry(array,SIZE);
    
    //Output Located Here
   
    //Exit
    return 0;
}
void fillArray(int a[], int size)
{   
    for(int i=0;i<size;i++)
    {
        cout<<"Input # "<<i+1<<" value:";
        cin>>a[i];
        
    }
}
void showArray(int a[], int size)
{
  
    cout<<"The Array"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<"The "<<i+1<<" Value is"<<a[i]<<endl;
        
    }    
}
void comparAry(int a[], int size)
{
    int largest,smallest;
    largest=a[0];
    smallest=a[0];
    for(int i=0;i<size;i++)
    {
        if(a[i]>largest)
            largest=a[i];
        if(a[i]<smallest)
            smallest=a[i];
        
    }
    cout<<"The largest number is "<<largest<<endl;
    cout<<"The smallest number is"<<smallest<<endl;
    
}