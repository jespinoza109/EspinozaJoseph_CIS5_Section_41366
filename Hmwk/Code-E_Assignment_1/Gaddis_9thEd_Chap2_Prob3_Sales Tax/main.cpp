/* 
 * File:   Gaddis_9thEd_Ch.2_Prob3_SalesTax
 * Author: Joseph Espinoza
 * Created on January 10, 2021, 12:00 PM
 * Purpose:  1.) Sales Tax
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
             float S_Tax, //State Sales Tax
                   C_Tax, //County Sales Tax
                   X, //Purchase of Sale
                   Tot_Tax; //Total Sales Tax
    
    //Initialize Variable
    S_Tax=0.04; 
    C_Tax=0.02;
    X=95;
            
    //Map Inputs to Outputs -> Process
    Tot_Tax=X*(S_Tax+C_Tax); //Total Sales Tax of Purchase
    
    //Display Inputs/Outputs
    cout<<"Total Sales Tax = $"<<(Tot_Tax)<<" for the entire purchase ";
    
    
    //Exit the Program - Cleanup
    return 0;
}
