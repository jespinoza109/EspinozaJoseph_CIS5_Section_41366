/* 
 * File:   Gaddis_9thEd_Ch.2_Prob4_RestuarantBill
 * Author: Joseph Espinoza
 * Created on January 10, 2021, 12:00 PM
 * Purpose:  1.) Total Bill after tip+tax
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
             float Cost, //Cost of Meal
                   Tax, //Tax on Bill
                   Tip, //Tip after Tax on Bill
                   Tot_Bill, //Total Bill after tax+tip
                   Tax_Bill, //Tax only
                   Tip_Bill; //Tip only
    
    //Initialize Variable
             Cost=88.67;
             Tax=0.0675;
             Tip=0.2;
            
    //Map Inputs to Outputs -> Process
    Tax_Bill=Tax*Cost; //Tax only calculated
    Tip_Bill=Tip*(Cost+Tax_Bill); //Tip only calculated
    Tot_Bill=Cost+Tip_Bill; //Total Sales Tax of Purchase
    
    //Display Inputs/Outputs
    cout<<"Meal Cost = $"<<(Cost)<<endl;                                  
    cout<<"Tax Amount = $"<<(Tax_Bill)<<endl;
    cout<<"Tip Amount = $"<<(Tip_Bill)<<endl;
    cout<<"Total Bill = $"<<(Tot_Bill)<<" including tax+tip ";
    
    
    //Exit the Program - Cleanup
    return 0;
}
