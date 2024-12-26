/*WAP for finding the volume of cylinder by taking radius and height as input*/

#include<iostream>
using namespace std;
int  main(){
    int r,h;
    float pi = 3.14;
    cout<<"Enter the radius = ";
    cin>>r;
    cout<<"Enter the height = ";
    cin>>h;
    float v = pi*r*r*h;
    cout<<"Required Volume is = "<<v;

}