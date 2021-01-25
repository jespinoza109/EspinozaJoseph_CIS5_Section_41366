/* 
 * File:   Gaddis_9thEd_Ch.2_Prob6_AnnualPay
 * Author: Joseph Espinoza
 * Created on January 10, 2021, 12:00 PM
 * Purpose:  1.) Total Annual Pay for an Employee
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
                   float payAmount, // How much paid per period
                         payPeriods, // How many times paid in a year
                         annualPay; //Total Annual Pay
                   
    //Initialize Variable
               payAmount=2200.0;
               payPeriods=26;
                       
    //Map Inputs to Outputs -> Process
               annualPay=payAmount*payPeriods;
               
    //Display Inputs/Outputs
    cout<<"Total Annual Pay = $"<<(annualPay);
    
    
    //Exit the Program - Cleanup
    return 0;
}
