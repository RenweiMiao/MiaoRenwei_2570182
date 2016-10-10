/* 
 * File:   main.cpp
 * Author: Renwei Miao
 * Created on October 10, 2016, 9:30 AM
 * Purpose:  Menu without Function
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
    int menuItm; //Choice from menu 
    
    //loop until users exits
    
    //Prompt for problem for user input
    cout<<"1. Type 1   for Problem A"<<endl;
    cout<<"2. Type 2   for Problem B"<<endl;
    cout<<"3. Type 3   for Problem C"<<endl;
    cout<<"4. Type 4   for Problem D"<<endl;
    cout<<"5. Type 5   for Problem E"<<endl;
    cout<<"6. Type 6   for Problem F"<<endl;
    cout<<"7. Type 7   for Problem G"<<endl;
    cout<<"8. Type 8   for Problem H"<<endl;
    cout<<"9. Type 9   for Problem I"<<endl;
    cout<<"10. Type 10 for Problem J"<<endl;
    cin>>menuItm;
    
    //Input or initialize values Here
    do{
        switch(menuItm)
        {
        case 1: 
        {   
            cout<<"Inside Problem A"<<endl;
            //Input values
            //Process Value ->Map inputs to Outputs
            //Display Output
                    break;
                    
        }
         case 2: 
        {   
            cout<<"Inside Problem B"<<endl;
            //Input values
            //Process Value ->Map inputs to Outputs
            //Display Output
                    break;
        }
          case 3: 
        {   
            cout<<"Inside Problem C"<<endl;
            //Input values
            //Process Value ->Map inputs to Outputs
            //Display Output
                    break;
        }
           case 4: 
        {   
            cout<<"Inside Problem D"<<endl;
            //Input values
            //Process Value ->Map inputs to Outputs
            //Display Output
                    break;
        }
            case 5: 
        {   
            cout<<"Inside Problem E"<<endl;
            //Input values
            //Process Value ->Map inputs to Outputs
            //Display Output
                    break;
        }
             case 6: 
        {   
            cout<<"Inside Problem F"<<endl;
            //Input values
            //Process Value ->Map inputs to Outputs
            //Display Output
                    break;
        }
              case 7: 
        {   
            cout<<"Inside Problem G"<<endl;
            //Input values
            //Process Value ->Map inputs to Outputs
            //Display Output
                    break;
        }
               case 8: 
        {   
            cout<<"Inside Problem H"<<endl;
            //Input values
            //Process Value ->Map inputs to Outputs
            //Display Output
                    break;
        }
                case 9: 
        {   
            cout<<"Inside Problem I"<<endl;
            //Input values
            //Process Value ->Map inputs to Outputs
            //Display Output
                    break;
        }
                 case 10: 
        {   
            cout<<"Inside Problem J"<<endl;
            //Input values
            //Process Value ->Map inputs to Outputs
            //Display Output
                    break;
            }//End Case
        }//End the Switch/Case
        
    }while (menuItm<1&&menuItm>10);
    
    //Process/Calculations Here
    
    //Output Located Here
    

    //Exit
    return 0;
}

