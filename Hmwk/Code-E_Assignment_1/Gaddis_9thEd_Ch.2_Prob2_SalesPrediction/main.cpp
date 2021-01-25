/* 
 * File:   Gaddis_9thEd_Ch.2_Prob2_SalesPrediction
 * Author: Joseph Espinoza
 * Created on January 10, 2021, 12:00 PM
 * Purpose: Sales Prediction
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
             float P_Sales, //Percent of Sales
                   T_Sales, //Total of Sales
                   M_Gen; //Money generated from total sales
    
    //Initialize Variable
    P_Sales=0.58; 
    T_Sales=8600000;
    
    //Map Inputs to Outputs -> Process
    M_Gen=P_Sales*T_Sales;//Answer
    
    //Display Inputs/Outputs
    cout<<"The East Coast sales division generated "<<static_cast<int>(M_Gen)<<" dollars ";
    
    //Exit the Program - Cleanup
    return 0;
}
