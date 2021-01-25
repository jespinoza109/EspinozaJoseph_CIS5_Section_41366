/* 
 * File:   Gaddis_9thEd_Ch.2_Prob7_OceanLevels
 * Author: Joseph Espinoza
 * Created on January 10, 2021, 12:00 PM
 * Purpose:  1.) Ocean level rising 5,7,10 years
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
                 float lvl_5, // Ocean level rising after 5 years
                       lvl_7, // Ocean level rising after 7 years
                       lvl_10, // Ocean level rising after 10 years
                       Amnt, // Amount of ocean level rising per year (mm)
                    x, y, z; // How many years for ocean levels rising
               
    //Initialize Variable
                         x = 5; // 5 years                    
                         y = 7; // 7 years
                         z = 10; // 10 years
                         Amnt = 1.5; // millimeters rising per year
                   
    //Map Inputs to Outputs -> Process
                         lvl_5=x*Amnt;
                         lvl_7=y*Amnt;
                         lvl_10=z*Amnt;
                            
               
    //Display Inputs/Outputs
    cout<<"Ocean Level rising after 5 years = "<<(lvl_5)<<" mm "<<endl;
    cout<<"Ocean Level rising after 7 years = "<<(lvl_7)<<" mm "<<endl;
    cout<<"Ocean Level rising after 10 years = "<<(lvl_10)<<" mm "<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}
