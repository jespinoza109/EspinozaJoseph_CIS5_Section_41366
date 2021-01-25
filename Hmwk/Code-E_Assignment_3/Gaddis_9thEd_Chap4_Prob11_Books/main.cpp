/* 
 * File:   Gaddis_9thEd_Ch4_Prob11_Books
 * Author: Joseph Espinoza
 * Created on January 10, 2021, 12:00 PM
 * Purpose: Sum of Two Numbers
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int inp;
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
    cout<<"Book Worm Points"<<endl;
    cout<<"Input the number of books purchased this month."<<endl;
    cin>>inp;
    cout<<"Books purchased =  "<<inp<<endl;
    
    cout<<"Points earned   = ";
        if (inp >= 4) {
            cout<<60;
        
    }    else if (inp == 0) {
            cout<<0;
            
    }    else if (inp == 1) {
            cout<<5;
            
    }    else if (inp == 2) {
            cout<<15;
            
    }    else if (inp == 3) {
            cout<<30;
    }
    
    
    //Exit stage right or left!
    return 0;
}