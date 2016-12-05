/* 
 * File:   main.cpp
 * Author: Renwei Miao  
 * Created on November 23, 2016, 9:30 AM
 * Purpose:  Determine if the number is valid or not
 */

//System Libraries Here
#include <iostream>  //I/O


using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
int linSrch(int [],int,int);

//Program Execution Begins Here
int main(int argc, char** argv) {   
    //Declare all Variables Here
    int const SIZE=18;
    int array[SIZE]={5658845,4520125,7895122,8777541,8451277,1302850,
                    8080152,4562555,5552012,5050552,7825877,1250255,
                    1005231,6545231,3852085,7576651,7881200,4581002};
    int num;     
    
    
    //Input or initialize values Here
    do{
        cout<<"What number to find in the array?"<<endl;
        cout<<"Choose a number between 1 and 100000000"<<endl;
        cin>>num;
   
    }while(num<1||num>100000000);
    

    //Utilize linear search
    int find=linSrch(array,SIZE,num);
    //Determine if the number is valid
    if(find!=-1)
    {   
        cout<<"The number you entered was valid."<<endl;
        cout<<"The number "<<num<<" was found at index "<<find<<endl;
    } 
    else
    {
     cout<<"Sorry, the number you entered was invalid."<<endl;   
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