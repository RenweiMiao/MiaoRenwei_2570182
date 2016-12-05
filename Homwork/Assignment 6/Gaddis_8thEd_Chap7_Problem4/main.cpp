/* 
 * File:   main.cpp
 * Author: Renwei Miao
 * Created on November 20, 2016, 11:00 AM
 * Purpose: Display numbers in the array are greater than the number n
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only

//Function Prototypes Here
void displayAry(int [], int, int);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int size=10; 
    int array[size]={32,7,24,5,10,77,27,5,3,9};
    int N;
    //Input or initialize values Here
    
    
    cout<<"Which number do you want to compare with?";
    cin>>N; //Input number n
    
    
        
    
    //Process/Calculations Here
    displayAry(array,size,N); //Display numbers are larger than number n
    
    //Output Located Here
    
    
    
    //Exit
    return 0;
}
void displayAry(int a[], int SIZE, int n)
{
    for(int i=0;i<SIZE;i++)
    {
        if(a[i]>n)
        {
            cout<<a[i]<<" in the array is larger than number n. "<<<<endl;
        }
    }
}