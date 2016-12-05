/* 
 * File:   main.cpp
 * Author: Renwei Miao
 * Created on November 10th, 2016, 10:00 AM
 * Purpose: Calculate area of rectangle
 */

//System Libraries Here
#include <iostream>  //I/O


using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
 double getLength(); 
 double getWidth();  
 double getArea(float, float);
 double displayData(float, float ,float);
 
    
//Program Execution Begins Here
int main(int argc, char** argv) {
     //Declare all Variables Here
    float length, width, area;
     //Input or initialize values Here
     
     //Fill the array
     length=getLength();               //Get the length of rectangle
     width=getWidth();                 //Get the  width of rectangle
     area=getArea(length, width);      //Get the area
     displayData(area,length,width);   //Display area, width, and length
     //Output Located Here
 

    //Exit
    return 0;
}
double getLength()
{
    double Length;
    cout<<"You can enter the rectangle's Length :";
    cin>>Length;
    return Length;
    
}
double getWidth()
{
    double Width;
    cout<<"You can enter the rectangle's Width :";
    cin>>Width;
    return Width;
}
double getArea(float LENGTH, float WIDTH )
{   
    float area;
    
    area=LENGTH*WIDTH;
    
    return area;
    
}
double displayData(float Area,float LENGTH, float WIDTH)
{
    cout<<"The length of rectangle you entered is "<<LENGTH<<endl;
    cout<<"The width of rectangle you entered is "<<WIDTH<<endl;
    cout<<"The area of rectangle is "<<Area<<endl;
}