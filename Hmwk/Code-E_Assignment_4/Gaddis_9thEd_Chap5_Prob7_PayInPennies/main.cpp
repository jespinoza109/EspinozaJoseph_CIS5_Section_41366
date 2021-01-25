/* 
 * File:   Gaddis_9thEd_Chap5_Prob7_PayInPennies
 * Author: Joseph Espinoza
 * Created on January 23, 2019, 12:00 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv){
    
    //Set the random number seed
    
    //Declare Variables
    float day; //The day set for the sum of that period of time 
   
        
    //Initialize or input i.e. set variable values
    cin>>day;
    
    //Display the outputs
     cout<<setprecision(2)<<fixed;   
     
     cout<<"Pay = $"<<(pow(2,day)-1)/100.0;
 
    //Exit stage right or left!
    return 0;
}