/* 
 * File:   main.cpp
 * Author: Renwei Miao
 * Created on october 26th, 2016, 9:51 AM
 * Purpose:Temperature Conversion
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
float tempCnv(float);
float tempCnv(float,float,float,float,float);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare freezing and boiling pts of water
    //for degree Fahrenheit and Celsius
    float f1=32.0f,f2=212.0f,c1=0.0f,c2=100.0f;
    int begF=0,endF=250;
    
    //Process/Calculations Here
    cout<<"Degree F  Degree C  Degree C"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    for(int degF=begF;degF<=endF;degF++)
    {
        cout<<setw(6)<<degF
            <<setw(12)<<tempCnv(degF)
            <<setw(10)<<tempCnv(degF,f1,f2,c1,c2)<<endl;    
    }
    //Output Located Here
    
    //Exit
    
    
    return 0;
}
//Temperature conversion from degree Fahrenheit to Celsius
//Input
// f ->Fahrenheit
//Output
// c->Celsius
float tempCnv(float f)
{
    return (f-32.0f)*5/9;
    
}
float tempCnv(float c1,float f,float f1,float f2,float c2)
{
    return c1+(f-f1)*(c2-c1)/(f2-f1);
}