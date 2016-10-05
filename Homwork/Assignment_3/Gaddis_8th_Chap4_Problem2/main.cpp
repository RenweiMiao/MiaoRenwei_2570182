/* 
   File:   main
   Author: Renwei Miao
   Created on October 1, 2016, 10:48 PM
   Purpose:Display the Roman numeral version of that number

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
    int number;
    
    //Input values
    cout<<"Enter any number between 1 and 10 :\n";
    cin>>number;
    
    
    //Process values -> Map inputs to Outputs
    switch (number)
    {
        case 1: cout<<"I";
        break;
        case 2: cout<<"II";
        break;
        case 3: cout<<"III";
        break;
        case 4: cout<<"IV";
        break;
        case 5: cout<<"V";
        break;
        case 6: cout<<"VI";
        break;
        case 7: cout<<"VII";
        break;
        case 8: cout<<"VIII";
        break;
        case 9: cout<<"IX";
        break;
        case 10: cout<<"X";
        break;
        default: cout<<"You can not enter a number less than 1 or greater than 10";
    }
     
    
    //Display Output
     
    //Exit Program
    return 0;
}