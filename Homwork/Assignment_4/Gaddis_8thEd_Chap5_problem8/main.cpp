/* 
 * File:   main.cpp
 * Author: Renwei Miao
 * Created on October 16 2016, 9:13 PM
 * Purpose:Calculate Hotel Occupancy
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only

//Function Prototypes Here

//Program Execution Begins Here

int main(int argc, char** argv) {
    //Declare all Variables Here
    int floors, num_rooms;
    int num_occpid,num_unoccpid;
    int sum_rooms,sum_occpid,sum_unoccpid; 
   
    
    //Input or initialize values Here
    cout<<"How many floors does the hotel has?";
    cin>>floors;
    
   
    
    //Process/Calculations Here
   
    for(int i=1; i<=floors; i++)
    {
        cout<<"How many rooms on the #"<<i<<" floor?";
        cin>>num_rooms;
        cout<<"How many rooms are occupied on the #"<<i<<" floor?";
        cin>>num_occpid;
        num_unoccpid=num_rooms-num_occpid;
        sum_rooms+=num_rooms;
        sum_occpid+=num_occpid;
        
        
        
        
    }
    
    //Output Located Here
    cout<<"The total number rooms of the hotel= "<<sum_rooms<<endl;
    cout<<"The total number of rooms are occupied= "<<sum_occpid<<endl;
    cout<<"The total number of rooms are unoccupied= "<<sum_unoccpid<<endl;
   
    
    //Exit
    return 0;
}