/* 
 * File:   main.cpp
 * Author: Renwei Miao
 * Created on December 2nd, 2016, 13:30 PM
 * Purpose: Search Benchmarks
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only

//Function Prototypes Here
void displayAry(int [], int);
int LinarSrch(int [], int, int);
int BinarySrch(int [],int,int);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int SIZE=20;
    int array[SIZE]={85,22,33,44,55,66,77,41,52,63,
                     12,23,78,89,63,25,52,36,27,99};
    int num;
    int resultLinar;
    int resultBinary;
    //Input or initialize values Here
    cout<<"Enter a number you like: ";
    cin>>num;
    
    //Display the numbers from array
    displayAry(array, SIZE);
    //Input the value to the Linar Search and search for position
    resultLinar=LinarSrch(array, SIZE, num);
    
    if(resultLinar==-1)
    {
        cout<<"You entered a invalid number."<<endl;;
    }
    else
    {
        cout<<"You entered a valid number, the number "<<num<<" is in "<<(resultLinar+1)<<" position."<<endl;
    }
    //Input the value to the Binary Search and search for position
    resultBinary=BinarySrch(array, SIZE, num);
    
    if(resultBinary==-1)
    {
        cout<<"You entered a invalid number."<<endl;
    }
    else
    {
        cout<<"You entered a valid number, the number "<<num<<" is in "<<(resultBinary+1)<<" position."<<endl;
    }
    //Output Located Here
    
    
    
    //Exit
    return 0;
}
void displayAry(int a[], int size)
{
    for(int i=0; i<size;i++)
    {
        cout<<a[i]<<endl;
    }
}
int LinarSrch(int a[], int size, int val)
{
    int index=0;
    int position=-1;
    bool found = false;
    while(index<size&&!found)
    {
        if(a[index]==val)
        {
            found=true;
            position=index;
        }
        index++;
    }
    return position;
}
int BinarySrch(int a[],int size,int val)
{
    int first =0;
    int last=size-1;
    int middle;
    int position =-1;
    bool found =false;
    
    while(!found && first<=last)
    {
        middle=(first+last)/2;
        if(a[middle]==val)
        {
            found =true;
            position=middle;
        }
        else if(a[middle]>val)
            last =middle-1;
        else
            first=middle+1;
       
    }
    return position;
    
}
