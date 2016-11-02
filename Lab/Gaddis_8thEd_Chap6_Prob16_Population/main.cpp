/* 
 * File:   main.cpp
 * Author: Renwei Miao
 * Created on Nov 2nd, 2016, 8:55 AM
 * Purpose: Calculate how a population increases or decreases
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants 

//Function Prototypes Here
int popishn(int,float,float);


//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int pop,death,birth,years; //Per year
    
    //Input or initialize values Here
    cout<<"This program calculates the population as a function of time"<<endl;
    cout<<"Population?"<<endl;
    cin>>pop;
    cout<<"Birth Rate per year?"<<endl;
    cin>>birth;
    cout<<"Death Rate per year?"<<endl;
    cin>>death;
    cout<<"How many years to predict?"<<endl;
    cin>>years;
    //Process/Calculations Here
    for(int year=1;year<=years;year++)
    {
        pop=popishn(pop,1.0*death/pop,1.0*birth/pop);
        cout<<"Year "<<year<<" = Population "<<pop<<endl;
    }
    //Output Located Here
 
    //Exit
    return 0;
}

int popishn(int pop,float death,float bir)
{
    return pop*(1+bir-death);
}