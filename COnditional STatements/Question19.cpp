/*Given the length and breadth of a rectangle , write a program to find whether the area
of the rectangle is greater than its perimeter */

#include<iostream>
using namespace std;
int main(){
    int l,b;
    cout <<"Enter the length =";
    cin>>l;
    cout<<"Enter the breadth =";
    cin>>b;

    float Area = l*b;
    float perimeter = 2*(l+b);
    
    if(Area>perimeter){
        cout<<"Area is greater";
    }
    else{
        cout<<"Perimeter is greater";
    }
}