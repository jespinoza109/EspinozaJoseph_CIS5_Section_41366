/* 
 * File:   Gaddis_9thEd_Chap5_Prob1_Sum_1
 * Author: Joseph Espinoza
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
 //Declare Variables
        int inp,  //Input
            sum;  //Total Sum
            
    //Initialize or input i.e. set variable values
        sum=0;
        cin>>inp;
    
    //Map inputs -> outputs
   
    while (inp <= 0){
        cout<<"error: positive integers only!\n";
        cin>>inp;
    }
    
    for(inp; inp>=0; inp--)
        
        sum = sum+inp;
        
    //Display the outputs
   
    cout<<"Sum = "<<sum;
        
    //Exit stage right or left!
    return 0;
}
