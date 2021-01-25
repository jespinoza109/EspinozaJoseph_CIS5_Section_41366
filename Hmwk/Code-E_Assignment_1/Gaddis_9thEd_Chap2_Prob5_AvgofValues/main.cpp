/* 
 * File:   Gaddis_9thEd_Ch.2_Prob5_AverageofValues
 * Author: Joseph Espinoza
 * Created on January 10, 2021, 12:00 PM
 * Purpose:  1.) Finding the average of a sum
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
               float A, // First Value
                     B, // Second Value
                     C, // Third Value
                     D, // Fourth Value
                     E, // Fifth Value
                     Sum, // All Values added
                     Avg; // Average of Sum
               
    //Initialize Variable
               A=28;
               B=32;
               C=37;
               D=24;
               E=33;
            
    //Map Inputs to Outputs -> Process
               Sum=A+B+C+D+E;
               Avg=Sum/5;
               
    //Display Inputs/Outputs
    cout<<"Average = "<<(Avg)<<" (answer) ";
    
    
    //Exit the Program - Cleanup
    return 0;
}
