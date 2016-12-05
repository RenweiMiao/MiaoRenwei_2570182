/* 
 * File:   main.cpp
 * Author: Renwei Miao
 * Created on November 20, 2016, 12:30 PM
 * Purpose: Number Analysis Program
 */

//System Libraries Here
#include <iostream>
#include <fstream>
using namespace std;

//User Libraries Here

//Global Constants Only

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    ifstream infile;
    int size=8;
    int array[size];
    char fileName[size];
    int totalNum = 0;
    float average;
    
 
    cout << "Enter a file name: ";
    cin >> fileName;
 
    infile.open(fileName);
 
 
    for (int i = 0; i < size; i++)
    {
        infile >> array[i];
        totalNum+= array[i];
    }
    average=totalNum/static_cast<double>(size);
 
    int lowest = array[0];
    int highest = array[0];
    for (int i = 0; i < size; i++)
    {
        if (array[i] > highest)
            highest = array[i];
        if (array[i] < lowest)
            lowest = array[i];
    }
 
    cout << "Total number in the array: " << totalNum << endl;
    cout << "The average of the numbers in the array: " << average << endl;
    cout << "The highest number in the array: " << highest << endl;
    cout << "The lowest number in the array: " << lowest << endl;
 
    infile.close();
     
    return 0;
}