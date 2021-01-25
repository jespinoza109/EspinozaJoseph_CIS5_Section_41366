/* 
 * File:   Savitch_9thEd_Chap3_PracProb4_CompatibleSigns
 * Author: Joseph Espinoza
 * Created on January 10, 2021, 12:00 PM
 * Purpose: Compatible Signs
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
    string      sign1,
                sign2;
    
    int         horo1,  //horoscope entry 1
                horo2;  //horoscope entry 2
             
    
    //Initialize Variables
    
     
    cout<<"Horoscope Program which examines compatible signs."<<endl;
    cout<<"Input 2 signs."<<endl;
    
    cin>>sign1;
    if(sign1=="Aries"){horo1=1;}
    if(sign1=="Leo"){horo1=1;}
    if(sign1=="Sagittarius"){horo1=1;}
    if(sign1=="Taurus"){horo1=2;}
    if(sign1=="Virgo"){horo1=2;}
    if(sign1=="Capricorn"){horo1=2;}
    if(sign1=="Gemini"){horo1=3;}
    if(sign1=="Libra"){horo1=3;}
    if(sign1=="Aquarius"){horo1=3;}
    if(sign1=="Cancer"){horo1=4;}   
    if(sign1=="Scorpio"){horo1=4;}    
    if(sign1=="Pisces"){horo1=4;}
    
    cin>>sign2;
    if(sign2=="Aries"){horo2=5;}
    if(sign2=="Leo"){horo2=5;}
    if(sign2=="Sagittarius"){horo2=5;}
    if(sign2=="Taurus"){horo2=6;}
    if(sign2=="Virgo"){horo2=6;}
    if(sign2=="Capricorn"){horo2=6;}
    if(sign2=="Gemini"){horo2=7;}
    if(sign2=="Libra"){horo2=7;}
    if(sign2=="Aquarius"){horo2=7;}
    if(sign2=="Cancer"){horo2=8;}   
    if(sign2=="Scorpio"){horo2=8;}    
    if(sign2=="Pisces"){horo2=8;}
     
    switch (horo1){
        case 1:
            if (horo2==5){
            cout<<sign1<<" and "<<sign2<<" are compatible Fire signs.";
            }else {
            cout<<sign1<<" and "<<sign2<<" are not compatible signs.";
            }break;
        case 2:if (horo2==6){
            cout<<sign1<<" and "<<sign2<<" are compatible Earth signs.";
            }else {
            cout<<sign1<<" and "<<sign2<<" are not compatible signs.";
            }break;
        case 3:if (horo2==7){
            cout<<sign1<<" and "<<sign2<<" are compatible Earth signs.";
            }else {
            cout<<sign1<<" and "<<sign2<<" are not compatible signs.";
            }break;
        case 4:if (horo2==8){
            cout<<sign1<<" and "<<sign2<<" are compatible Water signs.";
            }else {
            cout<<sign1<<" and "<<sign2<<" are not compatible signs.";
            }break;
    }
      
    
    //Exit the Program - Cleanup
    return 0;
}
