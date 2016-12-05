/* 
 * File:   main.cpp
 * Author: Renwei Miao
 * Created on November 17, 2016, 10:00 AM
 * Purpose: Find largest/smallest Array Value
 */

//System Libraries Here
#include <iostream>  //I/O
#include <cstdlib>   //Random
#include <ctime>     //Time
#include <string>    //String
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void totalSale(int [], int);
void highestSale(string [],int [], int);
void lowestSale (string [],int [], int);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the random number seed
    
    //Declare all Variables Here
    int const  SIZE=5;
    int jars[SIZE];
    int totsale;
    string salsa[SIZE]={"Mild","Medium","Sweet","Hot","Zesty"};
     //Input or initialize values Here
    for(int i=0;i<SIZE;i++)
    {
        cout<<"Enter the number of jars sold for "<<salsa[i]<<" :";
        cin>>jars[i];
        
        while (jars[i]< 0)
        {   cout << "Jars sold must be 0 or more.  Please re-enter: ";
            cin  >>jars[i];
        }
    }
    
    //Output Located Here
    cout<<"The sales for "<<salsa[0]<<" is "<<jars[0]<<endl;
    cout<<"The sales for "<<salsa[1]<<" is "<<jars[1]<<endl;
    cout<<"The sales for "<<salsa[2]<<" is "<<jars[2]<<endl;
    cout<<"The sales for "<<salsa[3]<<" is "<<jars[3]<<endl;
    cout<<"The sales for "<<salsa[4]<<" is "<<jars[4]<<endl;
    totalSale(jars,SIZE);

    
    //Compare array to get largest and smallest value
    highestSale(salsa,jars,SIZE);
    lowestSale (salsa,jars,SIZE);
    
    //Output Located Here
   
    //Exit
    return 0;
}
void totalSale(int j[], int size)
{   int totalNum;
    for(int i=0;i<size;i++)
    {   
        totalNum+=j[i];
        
    }
    cout<<"The total sale of jars is "<<totalNum<<endl;
}
void highestSale(string s[], int j[],int size)
{
    int highest=j[0];
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(highest<j[i])
        { highest=j[i];
          count=i;
        }
    }  
     cout<<"The highest sale of type of salsa is "<<s[count]<<endl;
}

void lowestSale(string s[], int j[],int size)
{
    int lowest=j[0];
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(lowest>j[i])
        {    lowest=j[i];
             count=i;
        }  
    }    
     cout<<"The lowest sale of type of salsa is "<<s[count]<<endl;
}