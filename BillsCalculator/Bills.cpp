#include <iostream>
#include <cmath>
using namespace std;

const double EPercent=.75;
const double GPercent=.75;
const double WPeople=4;
//constants depending on Tenants

double Total_Bill(double W, double E,double G)
{
    double Total=0;
    Total =  (W/WPeople)  + ( (E*EPercent) /2) +  ( (G*GPercent) /2);
    return Total;

}//Formula For Calculating

int main(){
    //Variables
    double Water=0;
    double Electricity=0;
    double Gas=0;

    //Introduction to Program(User Input)
    cout<<"Bills Calculator"<<endl;
    cout<<"Please Enter Water Bill Total: "<<endl;
    cin>>Water;
    cout<<"Please Enter Electricity Total: "<<endl;
    cin>> Electricity;
    cout<<"Please Enter Gas Total: "<<endl;
    cin>>Gas;

    //Function Called for Displayed
    cout<<"Total Amount: "<<Total_Bill(Water,Electricity,Gas)<<endl;
    cout<<"Truncated Total Amount: "<<trunc(Total_Bill(Water,Electricity,Gas))<<endl;

    return 0 ;
}//End of Program