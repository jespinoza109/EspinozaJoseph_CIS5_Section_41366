/* 
 * File:   Gaddis_9thEd_Chap5_Prob23_Pattern
 * Author: Joseph Espinoza
 * Created on January 23, 2019, 12:00 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
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
    int max, min;  
    
            
    //Initialize or input i.e. set variable values
    min=1;
    cin>>max;
    
    //Map inputs -> outputs
    for (int i = min; i <= max; ++i) {
        for(int j = min; j <= i; ++j) {
            cout<<"+";
        }
        cout<<endl<<endl;
    }
    for(int i = max; i >= 2; --i) {
        for (int j = min; j <= i; ++j )
        {
         cout<<"+";
        }
        cout<<endl<<endl;
    }
    cout<<"+";
    
    //Display the outputs
    
    //Exit stage right or left!
    return 0;
}
