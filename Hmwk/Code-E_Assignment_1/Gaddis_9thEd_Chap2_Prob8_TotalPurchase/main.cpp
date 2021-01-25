/* 
 * File:   Gaddis_9thEd_Ch.2_Prob8_TotalPurchase
 * Author: Joseph Espinoza
 * Created on January 10, 2021, 12:00 PM
 * Purpose:  1.) Total Purchase of Sale
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
             float Item_1, 
                   Item_2, 
                   Item_3, 
                   Item_4, 
                   Item_5, 
                   Sub_Tot, //Subtotal of Purchase from Items
                   Tax, //Sales Tax only of subtotal
                   Total; // Total Cost of Purchase  
    
    //Initialize Variable
                   Item_1=15.95;
                   Item_2=24.95;
                   Item_3=6.95; 
                   Item_4=12.95; 
                   Item_5=3.95; 
            
    //Map Inputs to Outputs -> Process
                   Sub_Tot=Item_1+Item_2+Item_3+Item_4+Item_5;
                   Tax=0.07*Sub_Tot;
                   Total=Sub_Tot+Tax;
    
    //Display Inputs/Outputs
    cout<<"Price of Item 1 = $"<<(Item_1)<<endl;     
    cout<<"Price of Item 2 = $"<<(Item_2)<<endl;
    cout<<"Price of Item 3 = $"<<(Item_3)<<endl;
    cout<<"Price of Item 4 = $"<<(Item_4)<<endl;
    cout<<"Price of Item 5 = $"<<(Item_5)<<endl;
    cout<<"Subtotal = $"<<(Sub_Tot)<<endl;
    cout<<"Sales Tax = $"<<(Tax)<<endl;
    cout<<"Total Sale = $"<<(Total);
    
    
    //Exit the Program - Cleanup
    return 0;
}
