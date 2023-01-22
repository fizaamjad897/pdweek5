#include<iostream>
using namespace std;
float pyramidvolume(float length, float width, float height, string unit);
main()
 {
    float length, width, height, calculatedvolume;
    string unit;
    cout<< "Enter Length : ";
    cin>>length;
    cout<< "Enter Width : ";
    cin>>width;
    cout<< "Enter Height : ";
    cin>>height;
    cout<< "Enter Unit : ";
    cin>>unit;
    calculatedvolume = pyramidvolume(length, width, height, unit);
    cout<< "The volume of pyramid is " <<calculatedvolume <<" cubic " <<unit;
 }
 float pyramidvolume(float length, float width, float height, string unit)
  {
    float volume, volumeinunit;
    if(unit == "centimeters")
     {
       volume = (length * width * height) / 3;
       volumeinunit = volume * 1000000;
     }
    if(unit == "millimeters")
     {
       volume = (length * width * height) / 3;
       volumeinunit = volume * 1000000000;
     }
    if(unit == "kilometers")
     {
       volume = (length * width * height) / 3;
       volumeinunit = volume / 1000000000;
     }
    return volumeinunit;
  }
