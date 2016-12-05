/* 
 * File:   main.cpp
 * Author: Renwei Miao
 * Created on October 16, 2016, 9:11 PM
 * Purpose:Display the amount of salary.
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float penny=0.01; 
    float amntdollr;
    float totPay;
    int days;
    
    //Input or initialize values Here
    cout<<"How many days do you earn money?";
    cin>> days;
    cout<<"---------------------------"<<endl;
    cout<<"\n Day "<<"        "<<"Salary \n";
            
    
    //Process/Calculations Here
    for(int i=1;i<=days;i++)
    {
       totPay= penny*i;
       amntdollr+=totPay;
       
       cout<<" "<<i<<"        "<<totPay<<endl;
        
        
    }
   
    cout<<"This is total amount of salary you earned: $ "<<amntdollr<<endl;
   
    //Output Located Here
    
    
    
    //Exit
    return 0;
}