/* 
 * File:   Lab_Assignment1_Budget/Percentage
 * Author: Joseph Espinoza
 * Created on January 12, 2021, 8:31 PM
 * Purpose:  1.) Military Budget Percentage of Federal Budget
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Initialize the Random Number Seed
    
    //Declare Variables
             float milBdgt, 
                   fedBdgt, 
                   mlPrcnt;   
    
    //Initialize Variable
    milBdgt=7.0e11f;  //Military Budget = 700 Billion 
    fedBdgt=4.1e12f;    //Federal Budget  = 4.1 Trillion  
             
    //Map Inputs to Outputs -> Process
    mlPrcnt= (milBdgt/fedBdgt)*100; //Percent from Federal Budget
    
    //Display Inputs/Outputs
    cout<<"Military Percent = "<<(mlPrcnt)<<"%";
    
    
    //Exit the Program - Cleanup
    return 0;
}
