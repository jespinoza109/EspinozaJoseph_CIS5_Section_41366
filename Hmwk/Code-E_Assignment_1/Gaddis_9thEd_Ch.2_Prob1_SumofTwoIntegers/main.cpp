/* 
 * File:   Gaddis_9thEd_Ch.2_Prob1_SumofTwoNumbers
 * Author: Joseph Espinoza
 * Created on January 10, 2021, 12:00 PM
 * Purpose: Sum of Two Numbers
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
             float A,//First Integer
                   B, //Second Integer
                   Total; //Sum of both Integers
             
    //Initialize Variable
                   A=50;
                   B=100;
    
    //Map Inputs to Outputs -> Process
                     Total=A+B;
    
    //Display Inputs/Outputs
    cout<<"Sum of Two Integers = "<<(Total)<<" (answer) ";
    
    //Exit the Program - Cleanup
    return 0;
}
