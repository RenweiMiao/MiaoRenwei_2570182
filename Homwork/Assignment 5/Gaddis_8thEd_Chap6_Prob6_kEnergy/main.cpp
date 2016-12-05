/* 
* File:   main.cpp
* Author: Renwei Miao
* Created on November 11th, 2016, 9:40 AM
* Purpose: Calculate kinetic energy
*/

//System Libraries Here
#include <iostream>  //I/O


using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
float kineticEnergy(float,float);
    
//Program Execution Begins Here
int main(int argc, char** argv) {
     //Declare all Variables Here
    float mass, velocity;  //Declare variables of mass and velocity of object
    
    
     //Input or initialize values Here
    cout<<"Enter the mass of object: ";
    cin>>mass;  //Input mass 
    cout<<"Enter the velocity of object: ";
    cin>>velocity; //Input velocity
    
     //Output Located Here
    kineticEnergy(mass,velocity); //Calculate kinetic energy

    //Exit
    return 0;
}

float kineticEnergy(float m,float v)
{
    float KE;
 
    KE=0.5*m*v*v;
    
    cout<<"The amount of kinetic energy that the object has is "<<KE<<endl;
  
    
}

