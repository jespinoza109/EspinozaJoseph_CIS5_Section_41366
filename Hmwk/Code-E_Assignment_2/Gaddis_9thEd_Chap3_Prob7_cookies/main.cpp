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
    float serv,cal,cons;
    
    //Initialize or input i.e. set variable values
    cin>>inp;
    serv=4; // one serving
    cal=300; // calories for on serving
    
    //Map inputs -> outputs
    cons = (inp/serv)*cal;
    
    //Display the outputs
    cout<<"Calorie Counter"<<endl;
    cout<<"How many cookies did you eat?"<<endl;
    cout<<"You consumed "<<cons<<" calories.";

    //Exit stage right or left!
    return 0;
}