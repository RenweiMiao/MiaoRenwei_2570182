/* 
 * File:   main.cpp
 * Author: Renwei Miao
 * Created on December 10th, 2016,8:45 PM
 * Purpose: Hero Training Camp
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

//User Libraries Here
#include "Player.h"

//Global Constants Only

//Function Prototypes Here
int *RollDice(int,Player,int);
void PudgePL();
void LinaPL();
void PLturn(int);
void PLturn2(int,int,int);
void attackPL(int);
void attackPL1(int, int);
void attackPL2(int, int);
void attackBot1(int, int);
void attackBot2(int, int);
void blockDmg1(int, int);
void blockDmg2(int, int);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int number;     //The number of hero for testing
    int num1, num2; //The dice number between player and creep
    Player p;       // Define a structure variable to hold info about the player.
    int size=2;     
    
    //Input or initialize values Here
    cout<<"Please Enter your name: ";
    cin>>p.Name;
    cout<<"   "<<endl;
    cout<<"Welcome to Heroes Training Camp "<<p.Name<<",you can pick a hero in the list for testing.\n";
    cout<<"Each hero has four abilities with full HP.";
    cout<<"In order to test your hero's ability, the Bot is generated automatically by system."<<endl;
    cout<<"   "<<endl;
    
    cout<<"Here are two heroes. \n";
    cout<<"1. Pudge.\n";
    cout<<"2. Lina."<<endl;
    cout<<p.Name<<", you need to choose one hero for testing. \n";
    cin>>number;
    
    //Process/Calculations Here
    switch(number)
    {
        case 1: cout<<"Cool! You chose Pudge as your hero.\n";
                cout<<"Hero Abilities: 1.Attack 2.Meat Hook 3.Rot 4.Defend"<<endl;
                break;
        
        case 2: cout<<"Cool! You chose Lina as your hero. \n";
                cout<<"Hero Abilities: 1.Attack 2.Dragon Blade 3.Light Strike 4.Defend"<<endl;
    }
    //Roll a dice to decide who starts first
    *RollDice(size,p,number);
    
    //Exit
    return 0;
    
} 
int *RollDice(int n, Player p, int num){
    //Declare the array pointer
    int *a=new int[n];
    int count;
    //Fill the array
    srand((unsigned)time(0));
    cout<<"--------------------------------------------------------------------"<<endl;
    cout<<"Let us roll dice to see who start first!"<<endl;

    for(int i=1;i<=n;i++)
    {
        a[i]=rand()%6+1;//Random 2 digit number
        
    }

    cout<<"Your dice number: "<<a[count]<<endl;
    cout<<"The Bot's dice number: "<<a[count+1]<<endl;

    if(a[count]>a[count+1])
    {
        cout<<p.Name<<", You go first!"<<endl;
        cout<<"------------------------------------------------------------"<<endl;
        PLturn(num);
    }
    if(a[count]<a[count+1])
    {
        cout<<"Unfortunately, the Bot goes first!"<<endl;
        cout<<"------------------------------------------------------------"<<endl;
        attackPL(num);
    }
    else if(a[count]==a[count+1])
    {
         RollDice(n,p,num);
     }
    
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
            attackBot1(PLhealth,CPhealth);
        case 2:
            attackBot2(PLhealth, CPhealth);
    }
            
}
void PudgePL()
{   int plHealth=150;  
    int botHealth=150;
    int choice;
    float phydmg;
    float hookdmg;
    float rotdmg;
    
    cout<<"It's you turn as a Pudge player. You have three ways to deal damage to the Bot.\n";
    cout<<"1. Attack\n";
    cout<<"2. Meat Hook\n";
    cout<<"3. Rot\n";
    cout<<"4. Defend"<<endl;
    cin>>choice;
    switch(choice)
    {   
        case 1:
           phydmg=rand()%40+1;
           cout<<"You attack the Bot dealing "<<phydmg<<" damage."<<endl;
           botHealth=botHealth-phydmg;
           cout<<"Your HP: "<<plHealth<<endl;
           cout<<"The Bot's HP: "<<botHealth<<endl;
           cout<<"-------------------------------------------------------------"<<endl;
           if(botHealth>=1&&plHealth>=1)
           {   
            attackPL1(plHealth,botHealth);
           }
        case 2:
           hookdmg=rand()%55+1;
           cout<<"You utilize Meat Hook dealing "<<hookdmg<<" damage to the Bot."<<endl;
           botHealth=botHealth-hookdmg;
           cout<<"Your HP: "<<plHealth<<endl;
           cout<<"The Bot's HP: "<<botHealth<<endl;
           cout<<"-------------------------------------------------------------"<<endl;
          if(botHealth>=1&&plHealth>=1)
           {   
            attackPL1(plHealth, botHealth);
           }
        case 3:
           rotdmg=rand()%50+1;
           cout<<"You utilize Rot dealing "<<hookdmg<<" damage to the Bot."<<endl;
           botHealth=botHealth-rotdmg;
           cout<<"Your HP: "<<plHealth<<endl;
           cout<<"The Bot's HP: "<<botHealth<<endl;
           cout<<"-------------------------------------------------------------"<<endl;
           if(botHealth>=1&&plHealth>=1)
           {   
            attackPL1(plHealth, botHealth);
           }
        case 4:
            blockDmg1(plHealth, botHealth);
   } 
    
}
void LinaPL()
{
    int plHealth=150;
    int botHealth=150;
    int choice;
    float phydmg;
    float drgbladmg;
    float ligstrkdmg; 
    
    cout<<"It's you turn as a Lina player. You have three ways dealing damage to the Bot.\n";
    cout<<"1. Attack\n";
    cout<<"2. Dragon Blade\n";
    cout<<"3. Light Strike\n";
    cout<<"4. Defend"<<endl;
    cin>>choice;
    switch(choice)
    {   
        case 1:
           phydmg=rand()%40+1;
           cout<<"You attack the Bot dealing "<<phydmg<<" damage."<<endl;
           botHealth=botHealth-phydmg;
           cout<<"Your HP: "<<plHealth<<endl;
           cout<<"The Bot's HP: "<<botHealth<<endl;
           cout<<"--------------------------------------------------------------"<<endl;
           if(botHealth>=1&&plHealth>=1)
           {   
            attackPL2(plHealth, botHealth);
           }
        case 2:
           drgbladmg=rand()%55+1;
           cout<<"You utilize Dragon Blade dealing "<<drgbladmg<<" damage to the Bot."<<endl;
           botHealth=botHealth-drgbladmg;
           cout<<"Your HP: "<<plHealth<<endl;
           cout<<"The Bot's HP: "<<botHealth<<endl;
           cout<<"--------------------------------------------------------------"<<endl;
          if(botHealth>=1&&plHealth>=1)
           {   
            attackPL2(plHealth, botHealth);
           }
        case 3:
           ligstrkdmg=rand()%50+1;
           cout<<"You utilize Light Strike dealing "<<ligstrkdmg<<" damage to the Bot."<<endl;
           botHealth=botHealth-ligstrkdmg;
           cout<<"Your HP: "<<plHealth<<endl;
           cout<<"The Bot's HP: "<<botHealth<<endl;
           cout<<"---------------------------"<<endl;
           if(botHealth>=1&&plHealth>=1)
           {   
            attackPL2(plHealth, botHealth);
           }
        case 4:
            blockDmg2(plHealth, botHealth);
   } 
    
}
void attackPL(int selection)
{
   int plhealth=150;
   int bothealth=150;
   int botdmg;
   
   botdmg=rand()%50+1;
   cout<<"The Bot attack you dealing "<<botdmg<<" damage to you."<<endl;
   plhealth=plhealth-botdmg;
   cout<<" Now, You HP is "<<plhealth<<endl;
   cout<<" The Bot's HP is "<<bothealth<<endl;
   PLturn2(selection,plhealth,bothealth);
   
}
void attackPL1(int PLhealth, int BOThealth)
{   
   int botdmg;
   botdmg=rand()%50+1;
   cout<<"The creep attack you dealing "<<botdmg<<" damage to you."<<endl;
   PLhealth=PLhealth-botdmg;
   cout<<" Now, Your HP is "<<PLhealth<<endl;
   cout<<" The Bot's HP is "<<BOThealth<<endl;
   if(BOThealth<0&&PLhealth>0)
   {
        cout<<"The creep was killed. The End......"<<endl;
        exit(0);
   }
   else if(BOThealth>0&&PLhealth<0)
   {
        cout<<"What? You were killed by a creep. The End....."<<endl;
        exit(0);
    }
    else if(BOThealth>0&&PLhealth>0)
    {  
        attackBot1(PLhealth,BOThealth);
    }
   
}
void attackPL2(int PLhealth, int BOThealth)
{   
    int botdmg;
   botdmg=rand()%50+1;
   cout<<"The creep attack you dealing "<<botdmg<<" damage to you."<<endl;
   PLhealth=PLhealth-botdmg;
   cout<<" Now, Your HP is "<<PLhealth<<endl;
   cout<<" The Bot's HP is "<<BOThealth<<endl;
   if(BOThealth<0&&PLhealth>0)
   {
       cout<<"The Bot was killed. The End......"<<endl;
       exit(0);
    }
    else if(BOThealth>0&&PLhealth<0)
    {
       cout<<"What? You were killed by a Bot. The End....."<<endl;
       exit(0);
    }
    else if(BOThealth>0&&PLhealth>0)
    {  
         attackBot2(PLhealth,BOThealth);
    }
}

void attackBot1(int PLhealth, int BOThealth)
{
    int choice;
    float hookdmg;
    float rotdmg; 
    float phydmg;
    cout<<"It's your turn.";
    cout<<"You have four choices to choose:\n";
    cout<<"1. Attack\n";
    cout<<"2. Meat Hook\n";
    cout<<"3. Rot\n";
    cout<<"4. Defend"<<endl;
    cin>>choice;
    switch(choice)
    {   case 1:
           phydmg=rand()%40+1;
           cout<<"You attack the Bot dealing "<<phydmg<<" damage."<<endl;
           BOThealth=BOThealth-phydmg;
           cout<<"Your HP: "<<PLhealth<<endl;
           cout<<"The Bot's HP: "<<BOThealth<<endl;
           cout<<"-------------------------------------------------------------"<<endl;
           if(BOThealth<0&&PLhealth>0)
           {
                cout<<"The Bot was killed. The End......"<<endl;
                exit(0);
           }
           else if(BOThealth>0&&PLhealth<0)
           {
                cout<<"What? You were killed by a Bot. The End....."<<endl;
                exit(0);
           }
           else if(BOThealth>0&&PLhealth>0)
           {  
                attackPL1(PLhealth,BOThealth);
           }
        case 2:
            hookdmg=rand()%55+1;
           cout<<"You utilize Meat Hook dealing "<<hookdmg<<" damage to the Bot."<<endl;
           BOThealth=BOThealth-hookdmg;
           cout<<"Now, Your HP: "<<PLhealth<<endl;
           cout<<"The Bot's HP: "<<BOThealth<<endl;
           cout<<"-------------------------------------------------------------"<<endl;
           if(BOThealth<0&&PLhealth>0)
           {
                cout<<"The Bot was killed. The End......"<<endl;
                exit(0);
           }
           else if(BOThealth>0&&PLhealth<0)
           {
                cout<<"What? You were killed by a Bot. The End....."<<endl;
                exit(0);
           }
           else if(BOThealth>0&&PLhealth>0)
           {  
                attackPL1(PLhealth,BOThealth);
           }
        case 3:
           rotdmg=rand()%50+1;
           BOThealth=BOThealth-rotdmg;
           cout<<"You utilize rot dealing "<<rotdmg<<" damage to the Bot."<<endl;
           cout<<"Now, Your HP: "<<PLhealth<<endl;
           cout<<"The Bot's HP: "<<BOThealth<<endl;
           cout<<"-------------------------------------------------------------"<<endl;
           if(BOThealth<0&&PLhealth>0)
           {
                cout<<"The  Bot was killed. The End......"<<endl;
                exit(0);
           }
           else if(BOThealth>0&&PLhealth<0)
           {
                cout<<"What? You were killed by a  Bot. The End....."<<endl;
                exit(0);
           }
           else if(BOThealth>0&&PLhealth>0)
           {  
                attackPL1(PLhealth,BOThealth);
           }
        case 4:
           blockDmg1(PLhealth, BOThealth); 
           
    }
   
}
void attackBot2(int PLhealth, int BOThealth)
{
    int choice;
    float phydmg;
    float drgbladmg;
    float ligstrkdmg; 
    cout<<"It's your turn.";
    cout<<"You have four choices to choose.\n";
    cout<<"1. Attack\n";
    cout<<"2. Dragon Blade\n";
    cout<<"3. Light Strike\n";
    cout<<"4. Defend"<<endl;
    cin>>choice;
    switch(choice)
    {   case 1:
           phydmg=rand()%40+1;
           cout<<"You attack the  Bot, and dealing "<<phydmg<<" damage to the Bot."<<endl;
           BOThealth=BOThealth-phydmg;
           cout<<"Now, Your HP: "<<PLhealth<<endl;
           cout<<"The  Bot's HP: "<<BOThealth<<endl;
           if(BOThealth<0&&PLhealth>0)
           {
                cout<<"The  Bot was killed. The End......"<<endl;
                exit(0);
           }
           else if(BOThealth>0&&PLhealth<0)
           {
                cout<<"What? You were killed by a  Bot. The End....."<<endl;
                exit(0);
           }
           else if(BOThealth>0&&PLhealth>0)
           {  
                attackPL2(PLhealth,BOThealth);
           }
        case 2:
           drgbladmg=rand()%55+1;
           cout<<"Your hook deal "<<drgbladmg<<" damage to the  Bot."<<endl;
           BOThealth=BOThealth-drgbladmg;
           cout<<"Now, Your HP: "<<PLhealth<<endl;
           cout<<"The  Bot's HP: "<<BOThealth<<endl;
           cout<<"-------------------------------------------------------------"<<endl;
           if(BOThealth<0&&PLhealth>0)
           {
                cout<<"The  Bot was killed. The End......"<<endl;
                exit(0);
           }
           else if(BOThealth>0&&PLhealth<0)
           {
                cout<<"What? You were killed by a  Bot. The End....."<<endl;
                exit(0);
           }
           else if(BOThealth>0&&PLhealth>0)
           {  
                attackPL2(PLhealth,BOThealth);
           }
        case 3:
           ligstrkdmg=rand()%50+1;
           BOThealth=BOThealth-ligstrkdmg;
           cout<<"Your rot deal "<<ligstrkdmg<<" damage to the  Bot."<<endl;
           cout<<"Your HP: "<<PLhealth<<endl;
           cout<<"The  Bot's HP: "<<BOThealth<<endl;
           cout<<"--------------------------------------------------------------"<<endl;
           if(BOThealth<0&&PLhealth>0)
           {
                cout<<"The  Bot was killed. The End......"<<endl;
                exit(0);
           }
           else if(BOThealth>0&&PLhealth<0)
           {
                cout<<"What? You were killed by a  Bot. The End....."<<endl;
                exit(0);
           }
           else if(BOThealth>0&&PLhealth>0)
           {  
                attackPL2(PLhealth,BOThealth);
           }
        case 4:
           blockDmg2(PLhealth, BOThealth); 
           
    }
    
}
void blockDmg1(int PLhealth, int BOThealth)
{
    cout<<"You defend yourself from the  Bot's attack."<<endl;
    cout<<" Now, Your HP is "<<PLhealth<<endl;
    cout<<" The  Bot's HP is "<<BOThealth<<endl;
    attackBot1(PLhealth,BOThealth);
}
void blockDmg2(int PLhealth, int BOThealth)
{
    cout<<"You defend yourself from the  Bot's attack."<<endl;
    cout<<" Now, Your HP is "<<PLhealth<<endl;
    cout<<" The  Bot's HP is "<<BOThealth<<endl;
    attackBot2(PLhealth,BOThealth);
}