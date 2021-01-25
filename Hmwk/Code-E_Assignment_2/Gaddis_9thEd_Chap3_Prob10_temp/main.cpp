/* 
 * File:   main.cpp
 * Author: Joseph Espinoza
 * Created on January 17, 2021, 12:00 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */


//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants Only
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution of Code Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
              float far, //Fahrenheit temperature
                    cel; //Celsius temperature
                  
                      
    //Initialize Variables
    
    //Map Inputs to Outputs -> Process
    cout<<"Temperature Converter"<<endl;
    cout<<"Input Degrees Fahrenheit"<<endl;
    cin>>far;
    cel=5.0/9.0*(far-32.0); 
    
    //Display the Inputs/Outputs
    cout<< fixed << showpoint <<setprecision(1);
    cout<<far<<" Degrees Fahrenheit = "<<cel<<" Degrees Centigrade";
    
    //Exit the Program - Cleanup
    return 0;



}