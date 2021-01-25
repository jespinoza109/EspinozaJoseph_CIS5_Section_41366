/* 
 * File:   Sav9EdC4P5
 * Author: Joseph Espinoza
 * Created on January 23, 2019, 12:00 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
float predict(float prevPri, float inflRte);
float inflate(float crntPri, float prevPri);
int main(int argc, char** argv) {
    
    //Set the random number seed
    
    //Declare Variables
        float crntPri, 
              prevPri,  
              inflRte,   
              infl;     
        char  choice;   
        
    //Initialize or input i.e. set variable values
    do{
        cout<<"Enter current price:" <<endl;
        cin>>crntPri;
        cout<<"Enter year-ago price:"<<endl;
        cin>>prevPri;
    
    //Inflation Rate
    inflRte=inflate(crntPri, prevPri);
    cout<<fixed;
    cout<<"Inflation rate: "<<setprecision(2)<<inflRte<<"%"<<endl;
    cout<<endl;
    
    //Prediction of Price
    prevPri=crntPri;
        //For One Year After
        prevPri=predict(prevPri,inflRte);
        cout<<"Price in one year: $" <<prevPri<<endl;
        //For Two Years After
        prevPri=predict(prevPri,inflRte);
        cout<<"Price in two year: $"<<prevPri<<endl;
        cout<<endl;
        
    cout<<"Again:"<<endl;
    cin>>choice;
    if(choice=='y' || choice=='Y') {
        cout<<endl;
    }
    }while(choice=='y' || choice=='Y');
    return 0;
}

float inflate(float crntPri, float prevPri) {
    float diff,  //Price difference
          infl;  //Percentage inflation rate
    //Calculating Inflation Rate      
    diff=crntPri-prevPri;
    infl=(diff/prevPri)*100.0;
    
    return infl;
}

float predict(float prevPri, float inflRte) {
    inflRte=inflRte/100;
    prevPri=prevPri+(prevPri*inflRte);
}