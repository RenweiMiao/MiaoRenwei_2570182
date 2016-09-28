/* 
   File:   main
   Author: Renwei Miao
   Created on September 25, 2016, 9:25 PM
   Purpose:Calculates the average rainfall for three months  
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <cstdlib>
#include <string>
#include <iomanip>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    string nameJune;//Declare the name of month
    string nameJuly;
    string nameAugust;
    double amnt_June;//The amount of rain fell 
    double amnt_July;
    double amnt_August;
    double Average;
    
    //Input values
    cout<<"Please enter the name of each month:\n";//prompt the user enter name of month
    cin>>nameJune;
    cout<<"Please enter the name of each month:\n";
    cin>>nameJuly;
    cout<<"Please enter the name of each month:\n";
    cin>>nameAugust;
    cout<<"Please enter the amount of rain fell in June:\n";//prompt the user enter amount of rain
    cin>>amnt_June;
    cout<<"Please enter the amount of rain fell in July:\n";
    cin>>amnt_July;
    cout<<"Please enter the amount of rain fell in August:\n";
    cin>>amnt_August;
    //Process values -> Map inputs to Outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    Average=(amnt_June+amnt_July+amnt_August)/3;
    //Display Output
    cout<<"The average rainfall for June, July, and August is "<<Average<<"inches"<<endl;
    //Exit Program
    return 0;
}