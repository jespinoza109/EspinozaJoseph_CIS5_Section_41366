
/* 
 * File:   main.cpp
 * Author: Joseph Espinoza
 * Created on January 17, 2021, 12:00 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
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
    float avg;
    
    //Initialize or input i.e. set variable values
    cin>>inp;
     avg=inp;
    cin>>inp;
     avg=avg+inp;
    cin>>inp;
     avg=avg+inp;
    cin>>inp;
     avg=avg+inp;
    cin>>inp;
     avg=avg+inp; 
    
    //Map inputs -> outputs
    avg=avg/5;
    
    //Display the outputs
    cout<<"Input 5 numbers to average."<<endl;
    cout<<"The average = "<<fixed<<setprecision(1)<<avg;

    //Exit stage right or left!
    return 0;
}