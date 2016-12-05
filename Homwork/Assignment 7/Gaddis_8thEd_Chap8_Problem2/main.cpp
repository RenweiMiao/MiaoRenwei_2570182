/* 
 * File:   main.cpp
 * Author: Renwei Miao  
 * Created on November 23, 2016, 9:30 AM
 * Purpose: Determine it the number is in the winning tickets
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

int linSrch(int [],int,int);

//Program Execution Begins Here
int main(int argc, char** argv) {   
    //Declare all Variables Here
    int const SIZE=10;
    int array[SIZE]={13579,26791,26792,33445,55555,
                     62483,77777,79422,85647,93121};
    int num;  //Declare the number   
    
    
    //Input or initialize values Here
    do{
        
        cout<<"Enter this week's winning 5-digit number:";
        cin>>num;
   
    }while(num<1||num>1000000);
    

    //Utilize linear search
    int find=linSrch(array,SIZE,num);
    
    //Determine if the number is valid
    if(find!=-1)
    {   
        cout<<"The number "<<num<<" is a winning number of tickets this week!"<<endl;
    } 
    else
    {
        cout<<"Sorry, The number "<<num<<" is not in the winning tickets. "<<endl;   
    }
    //Exit
    return 0;
}

int linSrch(int a[],int n,int val){
    for(int i=0;i<n;i++){
        if(a[i]==val)return i;
    }
    return -1;
}