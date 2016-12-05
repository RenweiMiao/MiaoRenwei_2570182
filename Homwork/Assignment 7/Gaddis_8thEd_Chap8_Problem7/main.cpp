/* 
 * File:   main.cpp
 * Author: Renwei Miao
 * Created on December 2nd, 2016, 11:30 AM
 * Purpose: String Selection Sort
 */

//System Libraries Here
#include <iostream>
#include <string>
using namespace std;

//User Libraries Here

//Global Constants Only

//Function Prototypes Here

void selectionSort(string [], int);
void displayArray (string [], int);
int BinarySrch   (string[],int, string);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int NUM_NAMES = 20;
    string names[NUM_NAMES] = {"Collins,Bill", "Smith,Bart", "Allen,Jim",
                               "Griffin,Jim", "Stamey,Marty", "Rose,Geri",
                               "Taylor,Terri", "Johnson,Jill",
                               "Allison,Jeff", "Looney,Joe", "Wolfe,Bill",
                               "James,Jean", "Weaver,Jim", "Pore,Bob",
                               "Rutherford,Greg", "Javens,Renee",
                               "Harrison,Rose", "Setzer,Cathy",
                               "Pike,Gordon", "Holland,Beth" };
    string input;
    int result;
    
    cout<<"Enter the name you would like to look for: ";
    cin>>input;
    getline(cin,input);
    //Call the selectionSort 
    selectionSort(names,NUM_NAMES);
    
    //Call the Binary String Search
    result=BinarySrch(names,NUM_NAMES,input);
    
    //Display the array
    displayArray(names,NUM_NAMES);
    
    if(result == -1)
    {    
        cout << "Name is not in list."<<endl;
    }
    else
    {
        cout << names[result] << " was found in subscript #" << result <<endl;
    }
    
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
int BinarySrch(string a[],int n, string val)
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
