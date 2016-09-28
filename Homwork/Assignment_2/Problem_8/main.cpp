  /* 
   File:   main
   Author: Renwei Miao
   Created on September 27, 2016, 8:30 PM
   Purpose:Calculate total calories were consumed
in the class 
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <cstdlib>
#include <iomanip>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int numCookies;
    int totCalCsme;
    
    //Input values
    cout<<"Enter the numbers of cookies you ate:\n";
    cin>>numCookies;//Input the number of cookies
    
    
    //Process values -> Map inputs to Outputs
    
    totCalCsme=10*numCookies;//Calculate total calories
     
    
    //Display Output
    cout<<"total calories you were consumed ="<<totCalCsme<<endl;
    //Exit Program
    return 0;
}