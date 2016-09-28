/* 
   File:   main
   Author: Renwei Miao
   Created on September 26, 2016, 9:13 PM
   Purpose:
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
    string MovieName;
    int AdTickSold;
    int CdTickSold;
    double GrossPft;
    double NetPft;
    double AmntPaid;
    
    
    
    //Input values
    cout<<"Enter the name of movie you wanna watch:";
    cin>>MovieName;
    cout<<"Enter the numbers of tickets for adults you want to get =";
    cin>>AdTickSold;
    cout<<"Enter the numbers of tickets for child you want to get =";
    cin>>CdTickSold;
    
    
    //Process values -> Map inputs to Outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    
    GrossPft=AdTickSold*10+CdTickSold*6;
    NetPft=GrossPft*0.2;
    AmntPaid=GrossPft-NetPft;
    
    //Display Output
    cout<<"Movie Name:                     "<<MovieName<<endl;
    cout<<"Adult Tickets Sold:             "<<AdTickSold<<endl;
    cout<<"Child Tickets Sold:             "<<CdTickSold<<endl;
    cout<<"Gross Box Office Profit:        $"<<GrossPft<<endl;
    cout<<"Net Box Office Profit:          $"<<NetPft<<endl;
    cout<<"Amount Paid to Distributor:     $"<<AmntPaid<<endl;
    //Exit Program
    return 0;
}