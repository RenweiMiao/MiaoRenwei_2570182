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
int  BinarySrch(int [],int,int);
void selectionSort(int [], int);
//Program Execution Begins Here
int main(int argc, char** argv) {
 //Declare all Variables Here
    int const SIZE=18;
    int array[SIZE]={5658845,4520125,7895122,8777541,8451277,1302850,
                    8080152,4562555,5552012,5050552,7825877,1250255,
                    1005231,6545231,3852085,7576651,7881200,4581002};
    int num;     
    
    
    //Input or initialize values Here
    do{
        cout<<"What number to find in the array?"<<endl;
        cout<<"Choose a number between 1 and 100000000"<<endl;
        cin>>num;
   
    }while(num<1||num>100000000);
    
    //Sort the Value
    selectionSort(array,SIZE);
    
    //Utilize linear search
    int find=BinarySrch(array,SIZE,num);
    //Determine if the number is valid
    if(find!=-1)
    {   
        cout<<"The number you entered was valid."<<endl;
        cout<<"The number "<<num<<" was found at index "<<find<<endl;
    } 
    else
    {
     cout<<"Sorry, the number you entered was invalid."<<endl;   
    }
    //Exit
    return 0;
}
void selectionSort(int a[], int size)
{
   int startScan, minIndex,minValue;
   for(startScan=0; startScan<(size-1);startScan++) 
   {
       minIndex=startScan;
       minValue=a[startScan];
       for(int i=startScan+1; i<size; i++)
       {
            if(a[i]<minVal)
            {
                minVal=a[i];
                minIndex=i;
            }
        }
        a[minIndex]=a[startScan];
        a[startScan]= minVal;
       
   }   
    
}
int BinarySrch(int a[],int n,int val)
{
    int first =0;
    int last=n-1;
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