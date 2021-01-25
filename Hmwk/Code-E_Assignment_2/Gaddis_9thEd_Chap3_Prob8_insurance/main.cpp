/* 
 * File:   main.cpp
 * Author: Joseph Espinoza
 * Created on January 17, 2021, 12:00 PM
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
    int inp;
    float insur;
    
    //Initialize or input i.e. set variable values
    cin>>inp;
    
    //Map inputs -> outputs
    insur = inp*0.8; 
    
    //Display the outputs
    cout<<"Insurance Calculator"<<endl;
    cout<<"How much is your house worth?"<<endl;
    cout<<"You need $"<<insur<<" of insurance.";

    //Exit stage right or left!
    return 0;
}