/* 
 * File:   main.cpp
 * Author: Renwei Miao
 * Created on October 26, 2016,10:30 PM
 * Purpose: Hero Training Camp
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>
using namespace std;

//User Libraries Here

//Global Constants Only

//Function Prototypes Here
void PLturn(int);
void PLturn2(int,int,int);
void PudgePL();
void LinaPL();
void attackPL(int);
void attackPL1(int, int);
void attackPL2(int, int);
void attackCP1(int, int);
void attackCP2(int, int);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    string plName;  //Player's name
    int number;     //The number of hero for testing
    int num1, num2; //The dice number between player and creep
    
    //Input or initialize values Here
    cout<<"Please Enter your name: ";
    cin>>plName;
    
    cout<<"Welcome to Heroes Training Camp "<<plName<<". In this training camp, you need to pick a hero,"
        <<" Each hero has two abilities with full HP. In order to test your hero's"
        <<" ability, we generate a creep."<<endl;
    cout<<"Okay, are you ready? Let's get started!"<<endl;
    cout<<"   "<<endl;
    
    cout<<"Here are two heroes you can pick: \n";
    cout<<"1. Pudge.\n";
    cout<<"2. Lina."<<endl;
    cout<<plName<<", you should pick a hero you want for testing. \n";
    cin>>number;
    
    //Process/Calculations Here
    switch(number)
    {
        case 1: cout<<"Cool! You chose Pudge as your hero.\n";
                cout<<"Hero Abilities: 1.Meat Hook 2.Rot"<<endl;break;
        
        case 2: cout<<"Cool! You chose Lina as your hero. \n";
                cout<<"Hero Abilities: 1.Dragon Blade 2.Light Strike"<<endl;
    }
    cout<<"-------------------------------------------------------------"<<endl;
    cout<<"Let us roll dice to see who start first!"<<endl;
    bool flag=true;
    while(flag)
    {
        srand((unsigned)time(0));
        num1=rand()%6+1;
        num2=rand()%6+1;
        cout<<"Your dice number : "<<num1<<endl;
        cout<<"Creep's dice number: "<<num2<<endl;
        
        if(num1>num2)
        {
            cout<<plName<<", You go first!"<<endl;
            cout<<"-----------------------------------------------------------"<<endl;
            PLturn(number);
            flag=false;
            
        }
        if(num1<num2)
        {
            cout<<"Unfortunately, creep go first!"<<endl;
            cout<<"-----------------------------------------------------------"<<endl;
            attackPL(number);
            
            flag=false;
        }
        else if(num1==num2)
        {   
            flag=true;
        } 
        
      }
      
  
    //Exit

    return 0;
    
} 
void PLturn(int numHero)
{
    switch(numHero)
    {
        case 1: 
            PudgePL();
        case 2:
            LinaPL();
    }
            
}
void PLturn2(int numHero, int PLhealth, int CPhealth)
{
    switch(numHero)
    {
        case 1: 
            attackCP1(PLhealth,CPhealth);
        case 2:
            attackCP2(PLhealth, CPhealth);
    }
            
}
void PudgePL()
{   int plHealth=30;
    int cpHealth=20;
    int choice;
    float hookdmg;
    float rotdmg;        
    cout<<"It's you turn as a Pudge palyer. You have two ways to deal damadge to the creep.";
    cout<<"1. Hook.\n";
    cout<<"2. Rot.\n";
    cin>>choice;
    switch(choice)
    { case 1:
           hookdmg=rand()%6+1;
           cout<<"Your hook deal "<<hookdmg<<" damadge to the creep."<<endl;
           cpHealth=cpHealth-hookdmg;
           cout<<"Your HP: "<<plHealth<<endl;
           cout<<"The creep's HP: "<<cpHealth<<endl;
           if(cpHealth<1)
    {
        cout<<"The creep has been killed. The End......"<<endl;
        exit(0);
    }
    else if(plHealth<1)
    {
        cout<<"What? You are killed by a creep. The End....."<<endl;
        exit(0);
    }
    else if(cpHealth>=1&&plHealth>=1)
    {   
         attackPL1(plHealth, cpHealth);
    }
        case 2:
           rotdmg=rand()%5+1;
           cout<<"Your rot deal "<<rotdmg<<" damadge to the creep."<<endl;
           cpHealth=cpHealth-rotdmg;
           cout<<"Your HP: "<<plHealth<<endl;
           cout<<"The creep's HP: "<<cpHealth<<endl;
           if(cpHealth<1)
    {
        cout<<"The creep has been killed. The End......"<<endl;
        exit(0);
    }
    else if(plHealth<1)
    {
        cout<<"What? You are killed by a creep. The End....."<<endl;
        exit(0);
    }
    else if(cpHealth>=1&&plHealth>=1)
    {   
         attackPL1(plHealth, cpHealth);
    }
   } 
    
}
void LinaPL()
{
    int plHealth=30;
    int cpHealth=20;
    int choice;
    float drgbladmg;
    float ligstrkdmg;        
    cout<<"It's your turn as a lina player.You have two ways to deal damadge to the creep. "<<endl;
    cout<<"1.Dragon Blade.\n";
    cout<<"2.Light  Strike.\n";
    cin>>choice;
    switch(choice)
    {  case 1:
           drgbladmg=rand()%6+1;
           cout<<"Your Dragon Blade deal "<<drgbladmg<<" damadge to the creep."<<endl;
           cpHealth=cpHealth-drgbladmg;
           cout<<"Your HP: "<<plHealth<<endl;
           cout<<"The creep's HP: "<<cpHealth<<endl;
           if(cpHealth<1)
           {
                cout<<"The creep has been killed. The End......"<<endl;
                exit(0);
           }
           else if(plHealth<1)
           {
                cout<<"What? You are killed by a creep. The End....."<<endl;
                exit(0);
           }
           else if(cpHealth>=1&&plHealth>=1)
           {   
                attackPL2(plHealth, cpHealth);
           }
    
        case 2:
    
           ligstrkdmg=rand()%5+1;
           cout<<"Your Light Strike deal "<<ligstrkdmg<<" damadege to the creep."<<endl;
           cpHealth=cpHealth-ligstrkdmg;
           cout<<"Your HP: "<<plHealth<<endl;
           cout<<"The creep's HP: "<<cpHealth<<endl;
           if(cpHealth<1)
        {
            cout<<"The creep has been killed. The End......"<<endl;
            exit(0);
        }
           else if(plHealth<1)
        {
            cout<<"What? You are killed by a creep. The End....."<<endl;
            exit(0);
        }
           else if(cpHealth>=1&&plHealth>=1)
        {   
            attackPL2(plHealth, cpHealth);
        }
    
    }
    
}
void attackPL(int selection)
{
   int plhealth=30;
   int cphealth=20;
   int cpdmg;
   
   cpdmg=rand()%5+1;
   cout<<"The creep attack you dealing "<<cpdmg<<" damadge to you."<<endl;
   plhealth=plhealth-cpdmg;
   cout<<" Now, You HP is "<<plhealth<<endl;
   cout<<" The creep's Hp is "<<cphealth<<endl;
   PLturn2(selection,plhealth,cphealth);
   
}
void attackPL1(int PLhealth, int CPhealth)
{   
   int cpdmg;
   cpdmg=rand()%5+1;
   cout<<"The creep attack you dealing "<<cpdmg<<" damadge to you."<<endl;
   PLhealth=PLhealth-cpdmg;
   cout<<" Now, You HP is "<<PLhealth<<endl;
   cout<<" The creep's Hp is "<<CPhealth<<endl;
   attackCP1(PLhealth,CPhealth);
   
}
void attackPL2(int PLhealth, int CPhealth)
{   
    int cpdmg;
   cpdmg=rand()%5+1;
   cout<<"The creep attack you dealing "<<cpdmg<<" damadge to you."<<endl;
   PLhealth=PLhealth-cpdmg;
   cout<<" Now, You HP is "<<PLhealth<<endl;
   cout<<" The creep's Hp is "<<CPhealth<<endl;
   attackCP2(PLhealth,CPhealth);
}

void attackCP1(int PLhealth, int CPhealth)
{
    int choice;
    float hookdmg;
    float rotdmg;        
    cout<<"It's your turn.";
    cout<<"You have two choices to deal damadge to the creep.\n";
    cout<<"1. Hook.\n";
    cout<<"2. Rot.\n";
    cin>>choice;
    switch(choice)
    {  case 1:
           hookdmg=rand()%6+1;
           cout<<"Your hook deal "<<hookdmg<<" damadge to the creep."<<endl;
           CPhealth=CPhealth-hookdmg;
           cout<<"Your HP: "<<PLhealth<<endl;
           cout<<"The creep's HP: "<<CPhealth<<endl;
            if(CPhealth<1)
    {
        cout<<"The creep has been killed. The End......"<<endl;
        exit(0);
    }
    else if(PLhealth<1)
    {
        cout<<"What? You are killed by a creep. The End....."<<endl;
        exit(0);
    }
    else if(CPhealth>=1&&PLhealth>=1)
    {  
        attackPL1(PLhealth,CPhealth);
    }
           
        case 2:
           rotdmg=rand()%5+1;
           CPhealth=CPhealth-rotdmg;
           cout<<"Your rot deal "<<rotdmg<<" damadge to the creep."<<endl;
           cout<<"Your HP: "<<PLhealth<<endl;
           cout<<"The creep's HP: "<<CPhealth<<endl;
            if(CPhealth<1)
    {
        cout<<"The creep has been killed. The End......"<<endl;
        exit(0);
    }
    else if(PLhealth<1)
    {
        cout<<"What? You are killed by a creep. The End....."<<endl;
        exit(0);
    }
    else if(CPhealth>=1&&PLhealth>=1)
    {  
        attackPL1(PLhealth,CPhealth);
    }
           
    }
   
}
void attackCP2(int PLhealth, int CPhealth)
{
    int choice;
    float drgbladmg;
    float ligstrkdmg; 
    cout<<"It's your turn.";
    cout<<"You have two ways to deal damadge to the creep.\n";
    cout<<"1.Dragon Blade 2.Light Strike .\n";
    cin>>choice;
    switch(choice)
    {  case 1:
           drgbladmg=rand()%6+1;
           cout<<"Your Drogon Blade deal "<<drgbladmg<<" damadge to the creep."<<endl;
           CPhealth=CPhealth-drgbladmg;
           cout<<"Your HP: "<<PLhealth<<endl;
           cout<<"The creep's HP: "<<CPhealth<<endl;
            if(CPhealth<1)
            {
                cout<<"The creep has been killed. The End......"<<endl;
                exit(0);
            }
            else if(PLhealth<1)
            {
                cout<<"What? You are killed by a creep. The End....."<<endl;
                exit(0);
            }
            else if(CPhealth>=1&&PLhealth>=1)
            {  
                attackPL1(PLhealth,CPhealth);
            }
           
        case 2:
           ligstrkdmg=rand()%5+1;
           cout<<"Your Light Strike deal "<<ligstrkdmg<<" damadge to the creep."<<endl;
           CPhealth=CPhealth-ligstrkdmg;
           cout<<"Your HP: "<<PLhealth<<endl;
           cout<<"The creep's HP: "<<CPhealth<<endl;
            if(CPhealth<1)
            {
                cout<<"The creep has been killed. The End......"<<endl;
                exit(0);
            }
            else if(PLhealth<1)
            {
                cout<<"What? You are killed by a creep. The End....."<<endl;
                exit(0);
            }
            else if(CPhealth>=1&&PLhealth>=1)
            {  
                attackPL1(PLhealth,CPhealth);
            }
           
    }
    
}