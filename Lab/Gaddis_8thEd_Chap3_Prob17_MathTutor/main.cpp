/* 
 * File:   main.cpp
 * Author: Renwei Miao
 * Created on September 14th, 2016, 10:22 AM
 * Purpose:  Develop a math tutor to emphasize the random number
 */

//System Libraries Here
#include <iostream> // Input/output objects
#include <cstdlib> //Random seed
#include <ctime> //Seed the random number generator
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    unsigned short op1, op2, result,answer;
    
    
    
    //Input or initialize values Here
    op1=rand()%900+100; //3 digit random number
    op2=rand()%900+100; //3 digit random number
    
    //Process/Calculations Here
    result = op1 +op2;
    
    //Output Located Here
    cout<<"Solve the following addition problem"<<endl;
    cout<<"   "<<op1<<endl;
    cout<<"  +"<<op2<<endl;
    cout<<"---------"<<endl;
    
    //Ask user for the answer
    
    cout<<"What is the answer?"<<endl;
    cin >>answer;
    cout<<endl;
    
    //Determine if correct or not
    cout<<"The answer is"<<(result ==answer?"Correct":"Incorrect")<<endl;
    cout<<"The answer was ="<<result<<endl;
    //Exit
    return 0;
}

