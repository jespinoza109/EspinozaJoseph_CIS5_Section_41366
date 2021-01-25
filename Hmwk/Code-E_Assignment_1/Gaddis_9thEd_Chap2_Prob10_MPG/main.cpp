/* 
 * File:   Gaddis_9thEd_Ch.2_Prob10_MilesPerGallon
 * Author: Joseph Espinoza
 * Created on January 10, 2021, 12:00 PM
 * Purpose:  1.) Finding the MPG
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
                 float Gas, // Amount of gasoline used in gallons
                       Miles, // Amount of miles traveled  
                       MPG; // Miles Per Gallon
               
    //Initialize Variable
                       Gas=15; // Measured in Gallons
                       Miles=375; 
            
    //Map Inputs to Outputs -> Process
                       MPG=Miles/Gas;
                         
    //Display Inputs/Outputs
    cout<<"Miles per Gallon = "<<(MPG);
    
    
    //Exit the Program - Cleanup
    return 0;
}
