/* 
 * File:   main.cpp
 * Author: Renwei Miao
 * Created on October 10, 2016, 9:30 AM
 * Purpose:  Menu without Function
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
    int menuItm; //Choice from menu 
    
    //loop until users exits
    
    //Prompt for problem for user input
    cout<<"1. Type 1   Calculate sum of numbers"<<endl;
    cout<<"2. Type 2   Display 16 characters on each line for the ASCII CodesB"<<endl;
    cout<<"3. Type 3   Calculate ocean level for the next 25 years"<<endl;
    cout<<"4. Type 4   Display the number of calories burned after 5, 10, 15, 20, 25, and 30 minutes."<<endl;
    cout<<"5. Type 5   Display the projected rates for the next six years"<<endl;
    cout<<"6. Type 6   Calculate Distance Traveled"<<endl;
    cout<<"7. Type 7   Display the amount of salary"<<endl;
    cout<<"8. Type 8   Calculate Hotel Occupancy"<<endl;
    cout<<"9. Type 9   Calculate Average Rainfall"<<endl;
    cout<<"10.Type 10  Convert Celsius to Fahrenheit Table"<<endl;
    
    cin>>menuItm;
    
    //Input or initialize values Here
    do{
        switch(menuItm)
        {
        case 1: 
        {   
            cout<<"Calculate sum of numbers"<<endl;
            
            int number; 
            int sum=0;
   
            cout<<"You can enter a positive integer value :";
            cin>>number;
    
            for(int counter=0; counter<number; counter++)
            {
                sum += counter ;
                sum++;
        
            }
 
            cout<<"The sum of positive integer value is "<<sum<<endl;
                    break;
                    
        }
         case 2: 
        {   
            cout<<"Display 16 characters on each line for the ASCII CodesB"<<endl;
             
            for(int i =0; i<127; i++)
             {
                for(int j =0; j<16; j++)
                {
                    cout<<char(i)<<" "<<endl; 
                }
             }
   
                cout<<"This is 16 characters on each line"<<endl;
                       break;
        }
          case 3: 
        {   
            cout<<"Calculate ocean level for the next 25 years"<<endl;
            
            float oceanLvl = 0;
            int maxYear =26;  
            for (int i=1; i<maxYear;i++)
            {
                oceanLvl += 1.5;
        
                cout<<"Year "<<i<<":"<<oceanLvl<<"mm"<<endl;
            }
            
                    break;
        }
           case 4: 
        {   
            cout<<"Display the number of calories burned ";
            cout<<"after 5, 10, 15, 20, 25, and 30 minutes."<<endl;
            
            float calorBurn =3.6;
            float totBurn;
 
            for (int i =1; i<7; i++)
            {   
                totBurn=calorBurn*(5*i);
        
                cout<<"The number of calories burned after"<<5*i;
                cout<<" minutes is "<< totBurn<<"."<<endl;
            }
                    break;
        }
            case 5: 
        {   
            cout<<"Display the projected rates for the next six years"<<endl;
            
            int currCharge=2500;
            float projRate;
            float rateincrs =0.04;
    
            for(int i=1; i<7; i++)
            {
                currCharge= currCharge+rateincrs*currCharge;
        
                cout<<"Year  "<<i<<": $"<<currCharge<<endl;
        
        
            }
                    break;
        }
             case 6: 
        {   
            cout<<"Calculate Distance Traveled"<<endl;
            
            int hours, speed, distance;
            
            cout<<"What is the speed of the vehicle in mph?";
            cin>>speed;
            cout<<"How many hours has your vehicle traveled?";
            cin>>hours;
            cout<<"\n Hour "<<"   " <<" Distance Traveled\n"<< endl;
            cout<<"-------------------------------"<<endl;
            
            for(int i=1; i<=hours; i++)
            {   
                distance = speed*i;
        
                cout<<i<<"            "<<distance<<endl;
            }
                    break;
        }
              case 7: 
        {   
            cout<<"Display the amount of salary"<<endl;
            float penny=0.01; 
            float amntdollr;
            float totPay;
            int days;
  
            cout<<"How many days do you earn money?";
            cin>> days;
            cout<<"---------------------------"<<endl;
            cout<<"\n Day "<<"        "<<"Salary \n";
       
            for(int i=1;i<=days;i++)
            {
            totPay= penny*i;
            amntdollr+=totPay;
       
            cout<<" "<<i<<"        "<<totPay<<endl;
        
        
            }
   
            cout<<"This is total amount of salary you earned: $ "<<amntdollr<<endl;
                    break;
        }
               case 8: 
        {   
            cout<<"Calculate Hotel Occupancy"<<endl;
            
            int floors, num_rooms;
            int num_occpid,num_unoccpid;
            int sum_rooms,sum_occpid,sum_unoccpid; 
   
            cout<<"How many floors does the hotel has?";
            cin>>floors;
            
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
            cout<<"The total number rooms of the hotel= "<<sum_rooms<<endl;
            cout<<"The total number of rooms are occupied= "<<sum_occpid<<endl;
            cout<<"The total number of rooms are unoccupied= "<<sum_unoccpid<<endl;
                    break;
        }
                case 9: 
        {   
            cout<<"Calculate Average Rainfall"<<endl;
            
            int years, totmonth;
            int month=12;
            float InchRainFl;
            float sumRainFl;
            float avrgRainFl;
            cout<<"Enter the number of years :";
            cin>>years;
            for(int i=1; i<=years; i++)
            {
                    for(int j=0; j<12;j++)
                    {
                        cout<<"Enter the inches of rainfall for this month :";
                        cin>>InchRainFl;
                        sumRainFl+=InchRainFl;
                    }
       
       
            }
            avrgRainFl=sumRainFl/12;
            totmonth=years*month;
            cout<<setprecision(3)<<showpoint;
            cout<<"The number of month = "<<totmonth<<endl;
            cout<<"The total inches of rainfall ="<<sumRainFl<<"Inches"<<endl;
            cout<<"The average rainfall per month for the entire period ="<<avrgRainFl<<"Inches"<<endl;
                    break;
        }
                 case 10: 
        {   
            cout<<"Convert Celsius to Fahrenheit Table"<<endl;
            int Celsius;
            float Fahrenheit;
            cout<<"\n Celsius"<<"      "<<"Fahrenheit\n";
            cout<<"---------------------------"<<endl;
            for(int i=0; i<=20; i++)
            {   
        
                Fahrenheit=((9/5)*i)+32; 
        
                cout<<i<<"              "<<Fahrenheit<<endl;
        
            }
                    break;
            }//End Case
        }//End the Switch/Case
        
    }while (menuItm<1&&menuItm>10);
    
    //Process/Calculations Here
    
    //Output Located Here
    

    //Exit
    return 0;
}