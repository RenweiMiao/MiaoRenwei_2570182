/* 
   File:   main
   Author: Renwei Miao
   Created on September 26, 2016, 8:30 PM
   Purpose:Calculate how many cookies want to make  
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <cstdlib>
#include <iomanip>    //Show decimal point
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    double eachCpsSgr;
    double eachCpsBtr;
    double eachCpsFlr;
    int numCookies;
    double numCpsSgr;
    double numCpsBtr;
    double numCpsFlr;
    //Input values
    cout<<"How many cookies do you want to make?";
    cin>>numCookies;
    
    //Process values -> Map inputs to Outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    eachCpsSgr= 1.5/48;//Calculate each cup of sugar
    eachCpsBtr= 1.0/48;//Calculate each cup of butter
    eachCpsFlr= 2.75/48;//Calculate each cup of flour
    numCpsSgr=eachCpsSgr*numCookies;//Calculate number of cups of sugar
    numCpsBtr=eachCpsBtr*numCookies;//Calculate number of cups of butter
    numCpsFlr=eachCpsFlr*numCookies;//Calculate number of cups of flour
    
    
    //Display Output
    cout<<"The number of cups for sugar you need = "<<numCpsSgr<<endl;
    cout<<"The number of cups for butter you need = "<<numCpsBtr<<endl;
    cout<<"The number of cups for flour you need = "<<numCpsFlr<<endl;
    //Exit Program
    return 0;
}