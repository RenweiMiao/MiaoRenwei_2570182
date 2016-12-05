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

double getSales();
void findHighest(float,float,float,float);

int main(int argc, char *argv[])
{
    float Northeast,Southeast,Northwest,Southwest; 
    
        cout << "Northeast Division, " << endl;
	Northeast= getSales();
	cout << "Southeast Division, " << endl;
	Southeast= getSales();
	cout << "Northwest Division, " << endl;
	Northwest= getSales();
	cout << "Southwest Division, " << endl;
	Southwest= getSales();
	findHighest(Northeast,Southeast,Northwest,Southwest);
        
        
        return 0;
}
double getSales()
{      float sales;
       cout<<"What is the sales for this division? $= ";
       cin>>sales;
       if(sales<=0.00)
       {
           cout<<"Error, do not accept dollar amounts less than $0.00 !"<<endl; 
           exit(0);
       }
       return sales;
}     
void findHighest (float ne, float se, float nw, float sw) 
{   
    if(ne>se&& ne>nw&& ne>sw)
    {
       cout << "The highest grossing division is Northeast division with $ " <<ne<< endl;
       
    }
     if(se>ne&& se>nw&& se>sw)
    {
       cout << "The highest grossing division is SoUthwest division with $ " <<sw<< endl;
       
    }
     if(nw>ne&& nw>se&& nw>sw)
    {
       cout << "The highest grossing division is Northwest division with $ " <<nw<< endl;
       
    }
     else if(sw>ne&& sw>se&& sw>nw)
    {
       cout << "The highest grossing division is Southwest division with $ " <<sw<< endl;
       
    }    
    
}