/* 
 * File:   main.cpp
 * Author: Renwei Miao
 * Created on November 11th, 2016, 11:0 AM
 * Purpose: determines which of a company’s four divisions 
 *          had the greatest sales for a quarter.
 */

//System Libraries Here
#include <iostream>  //I/O
#include <cstdlib>   //Random

using namespace std;

int getNumAccidents();
void findHighest(float,float,float,float,float);

int main(int argc, char *argv[])
{
    float north,south,east,west,central; 
    
        cout <<"How many automobile accidents in north region?"<<endl;
	north=getNumAccidents();
	cout <<"How many automobile accidents in south region?"<<endl;
	south=getNumAccidents();
        cout <<"How many automobile accidents in east region?"<<endl;
	east=getNumAccidents();
        cout <<"How many automobile accidents in west region?"<<endl;
	west=getNumAccidents();
        cout <<"How many automobile accidents in central region?"<<endl;
	central=getNumAccidents();
	findHighest(north,south,east,west,central);
        
        
        return 0;
}
int getNumAccidents()
{     int num;

       cin>>num;
       if(num<=0.00)
       {
           cout<<"Error! Do not accept an accident number that is less than 0."<<endl; 
           exit(0);
       }
       return num;
}     
void findHighest (float North,float South,float East,float West,float Central) 
{   
    if(North<South&&North<East&& North<West&&North<Central)
    {
       cout << "The lowest accident number is in north region with  " <<North<< endl;
       
    }
     if(South<North&&South<East&& South<West&&South<Central)
    {
       cout << "The lowest accident number is in south region with  " <<South<< endl;
       
    }
     if(East<North&& East<South && East<West&&East<Central)
    {
       cout << "The lowest accident number is in north region with  " <<East<< endl;
       
    }
     else if(Central<North&&Central<East&&Central<South&&Central<West)
    {
       cout << "The lowest accident number is in north region with  " <<Central<< endl;
       
    }
    
}