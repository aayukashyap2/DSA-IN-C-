/*Given the radius of the circle predict whether area of this circle
is larger then the circumference or not*/

#include<iostream>
using namespace std;
int main(){
    int r ;
    cout<<"Enter the radius = ";
    cin>>r;
    float pi = 3.14;
    float a = pi*r*r;
    float c = 2*pi*r;

    if(a>c){
        cout<<"Area is larger = "<<a;
    } 
    else{
        cout<<"Circumference is larger = "<<c;
    }
}