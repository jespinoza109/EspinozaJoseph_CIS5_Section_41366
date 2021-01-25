/* 
 * File:   Gaddis_9thEd_Chap4_Prob12_BankCharges
 * Author: Joseph Espinoza
 * Created on January 10, 2021, 12:00 PM
 * Purpose: Bank Charges
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
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float begBal, numCheck, chckFee, monFee, newBal, lowBal;
    
    //Initialize or input i.e. set variable values
    cout<<"Monthly Bank Fees"<<endl;
    cout<<"Input Current Bank Balance and Number of Checks"<<endl;
    cin>>begBal>>numCheck;
    
    //Map inputs -> outputs
        if (numCheck<0)
    {  
        cout<<"Number of checks inputted in invalid";
    }
        else if (numCheck>0)
    {
        if (begBal<0)
    { 
        cout<<"Account is Overdrawn";
    }
        else if (begBal>0)
    {   
                if (0<=numCheck&&numCheck<20)
                chckFee=numCheck*0.10;
                
                else if (20<=numCheck&&numCheck<=39)
                chckFee=numCheck*0.08;
                
                else if (40<=numCheck&&numCheck<=59)
                chckFee=numCheck*0.06;
                
                else if (numCheck>59)
                chckFee=numCheck*0.04;
                
                
                monFee=10;
                begBal<400?lowBal=15.00:lowBal=0.00;
                newBal=begBal-chckFee-monFee-lowBal;
    
    //Display the outputs
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Balance     $ "<<setw(8)<<begBal<<endl;
    cout<<"Check Fee   $ "<<setw(8)<<chckFee<<endl;
    cout<<"Monthly Fee $ "<<setw(8)<<monFee<<endl;
    cout<<"Low Balance $ "<<setw(8)<<lowBal<<endl;
    cout<<"New Balance $ "<<setw(8)<<newBal;
}
}
    //Exit stage right or left!
    return 0;
}
