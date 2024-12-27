/*Any year is input through the keyboard. Write a program to determine whether the year
is a leap year or not.(Considering leap year occurs after every 4 year)*/

#include<iostream>
using namespace std;
int main(){
    int y;
    cout<<"Enter the year = ";
    cin>>y;

    if (y%400==0){
        cout<<"it's a leap year.";
    }
    else if(y%100==0){
        cout<<"it's not a leap year.";
    }
    else if(y%4==0){
        cout<<"it's a leap year.";
    }
    else{
        cout<<"No,Not a leap year";
    }

     
}