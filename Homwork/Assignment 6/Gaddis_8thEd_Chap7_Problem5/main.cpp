/* 
 * File:   main.cpp
 * Author: Renwei Miao
 * Created on November 20, 2016, 11:30 AM
 * Purpose: Monkey Business
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int Monkeys=3;
    const int Days=5;
    int Poundfood[Monkeys][Days];
    float totalFood;
    float avrgFood;
    int minimum=Poundfood[0][0];
    int maximum=Poundfood[0][0];
    
    //Input or initialize values Here
    for(int monk=0; monk<Monkeys;monk++)
    {
        for(int days=0; days<Days;days++)
        {   do
            { 
                cout<<"Monkey "<<(monk+1)<<" Day "<<(days+1)<<":";
                cin>>Poundfood[monk][days];
                totalFood+=Poundfood[monk][days];    //Get total food eaten by monkeys
                if(Poundfood[monk][days]<0)
                    cout<<"Negative numbers for pounds of food eaten,please re-enter"<<endl;
            }while(Poundfood[monk][days]<0);   
        }
        cout<<endl;
    }
    
    //Get the average amount of food eaten
    avrgFood=totalFood/static_cast<float>(Monkeys*Days);
    
    //Get the least amount of food eaten
    for(int monk=0; monk<Monkeys;monk++)
    {   
        for(int days=0; days<Days;days++)
        {   
            if(Poundfood[monk][days]<minimum)
            {   
                minimum=Poundfood[monk][days];
            }   
            
        }
        
    }
    
    //Get the greatest amount of food eaten
     for(int monk=0; monk<Monkeys;monk++)
    {   
    
        for(int days=0; days<Days;days++)
        {   
            if(Poundfood[monk][days]>maximum)
            {
                maximum=Poundfood[monk][days];
            }
        }
        
    }
    cout<<"Average amount of food eaten per day is"<<avrgFood<<endl;
    cout<<"The least amount of food eaten  is"<<minimum<<endl;
    cout<<"The greatest amount of food eaten is"<<maximum<<endl;
     
    
    
    //Exit
    return 0;
}