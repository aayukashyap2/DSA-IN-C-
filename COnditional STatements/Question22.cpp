/*Given a point(x,y), Write a program to find out if it lies on the 
x-axis, y-axis or at the origin,viz.(0,0)*/

#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter the values of point(x,y) =";
    cin>>x>>y;

    if (x==0){
        cout<<"it lies on the y-axis";
    }
    else if (y==0){
        cout<<"it lies on the x-axis";
    }
    else if(x==0 && y==0){
        cout<<"it lies on origin";
    }
    else {
        cout<<"Point lies somewhere else";
    }

}