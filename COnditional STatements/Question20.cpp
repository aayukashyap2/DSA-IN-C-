/*Write a program to input sides of a triangle and check whether a 
triangle is equilateral,scaler or isosceles triangle */

#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter 1st side = ";
    cin>>a;
    cout<<"Enter 2nd side = ";
    cin>>b;
    cout<<"Enter 3rd side = ";
    cin>>c;

    if(a==b==c){
        cout<<"Triangle is Equilateral.";
    }
    else if(a==b and a!=c){
        cout<<"Triangle is isosceles.";
    }
     else if(a!=b!=c){
        cout<<"Triangle is Scalene.";
    }
    else{
        cout<<"Not a valid input.";
    }
}