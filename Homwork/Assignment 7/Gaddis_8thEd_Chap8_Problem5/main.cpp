/* 
 * File:   main.cpp
 * Author: Renwei Miao
 * Created on November 26, 2016, 9:00 AM
 * Purpose: Rainfall Statistics Modification
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//User Libraries Here

//Global Constants Only

//Function Prototypes Here
void dualSort(string [], float [], int);
void displayAry(string [], float [],int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int const SIZE=12;
    string array[SIZE]={"January","February","March","April",
                        "May","June","July","August",
                        "September","October","November","December"};
    float rainFall[SIZE];
    //Fill the array
    cout<<fixed<<showpoint<<setprecision(2);
    for(int i=0;i<SIZE;i++)
    {
        do
        {
            cout<<"Enter the total rainfall for "<<array[i]<<":";
            cin>>rainFall[i];
            if(rainFall[i]<0)
            cout<< "Error! Rainfall amounts must be greater than 0.\n";
        
        }while(rainFall[i]<0);

       
    }
    
    //Select the sort
    dualSort(array,rainFall,SIZE);
    
    //Display the array
    displayAry(array,rainFall,SIZE);

    
    //Exit
    return 0;
}
void dualSort(string a[], float rainfall[], int size)
{
    int startScan,maxI;
    string tempA;
    float maxValue;
    
    for(startScan=0; startScan<(size-1);startScan++)
    {
        maxI=startScan;
        maxValue=rainfall[startScan];
        tempA=a[startScan];
        for(int i = startScan + 1; i< size;i++)
        {
            if (rainfall[i] > maxValue)
            {
                maxValue=rainfall[i];
                tempA=a[i];
                maxI=i;
            }
        }
        rainfall[maxI] = rainfall[startScan];
        a[maxI] = a[startScan];
        rainfall[startScan] = maxValue;
        a[startScan] = tempA;
        
    }
    
}

void displayAry(string a[], float rainfall[], int size)
{  
    cout<<" Month             Rainfall \n";
    cout<<"----------------------------\n";
    for(int i=0;i<size;i++)
    {
            cout<<a[i]<<"\t\t";
            cout<<setw(12)<<rainfall[i]<<endl;
            
    }
    cout<<endl;
}