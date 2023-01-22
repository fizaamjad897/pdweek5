#include<iostream>
using namespace std;
float taxcalculator(char type, float price);
main()
 {
    string vehicle;
    char type;
    float price, calculatedtax;
    cout<< "Enter your type of vehicle: ";
    cin>>vehicle;
    cout<< "Enter the price of vehicle: ";
    cin>>price;
    if(vehicle == "Motorcycle")
     {
        type = 'M';
     }
    if(vehicle == "Electric")
     {
        type = 'E';
     }
    if(vehicle == "Sedan")
     {
        type = 'S';
     }
    if(vehicle == "Van")
     {
        type = 'V';
     }
    if(vehicle == "Truck")
     {
        type = 'T';
     }
    calculatedtax = taxcalculator(type, price);
    cout<< "Your vehicle code is " <<type <<endl;
    cout<< "Your vehicle price after adding tax is " <<calculatedtax;
 }
 float taxcalculator(char type, float price)
  {
    float taxamount, finalprice;
    if(type == 'M')
     {
        taxamount = price * 0.06;
        finalprice = price + taxamount;
     }
    if(type == 'E')
     {
        taxamount = price * 0.08;
        finalprice = price + taxamount;
     }
    if(type == 'S')
     {
        taxamount = price * 0.1;
        finalprice = price + taxamount;
     }
    if(type == 'V')
     {
        taxamount = price * 0.12;
        finalprice = price + taxamount;
     }
    if(type == 'T')
     {
        taxamount = price * 0.15;
        finalprice = price + taxamount;
     }
    return finalprice;
  }
