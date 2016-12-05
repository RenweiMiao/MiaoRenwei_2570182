/* 
 * File:   main.cpp
 * Author: Renwei Miao
 * Created on December 2nd, 2016, 2:30 PM
 * Purpose: Using Files—String Selection Sort Modification
 */

//System Libraries Here
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

//User Libraries Here

//Global Constants Only

//Function Prototypes Here
void selectionSort(string [], int);
void displayArray(string [], int);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int NUM_NAMES = 20;
    string names[NUM_NAMES];
    ifstream filename;
    //Input or initialize values Here
    filename.open("names.txt");
    if(filename)
    {   
        for (int i = 0; i < NUM_NAMES; i++)
        {
            getline(filename, names[i]);
	}
       //Call the selectionSort 
        selectionSort(names,NUM_NAMES);
    
        //Display the array
        displayArray(names,NUM_NAMES);
    }
    else
    {
        cout<<"Error opening data file\n";
    }
    filename.close();
    
    
    //Exit
    return 0;
}
void selectionSort(string a[], int size)
{
   int startScan, minIndex;
   string minValue;
   for(startScan=0; startScan<(size-1);startScan++) 
   {
       minIndex=startScan;
       minValue=a[startScan];
       for(int i=startScan+1; i<size; i++)
       {
            if(a[i]<minValue)
            {
                minValue=a[i];
                minIndex=i;
            }
        }
        a[minIndex]=a[startScan];
        a[startScan]= minValue;
       
   }   
}
void displayArray(string a[], int size)
{
    for (int i = 0; i < size; i++)
    {
	cout << a[i] << endl;
    }
}