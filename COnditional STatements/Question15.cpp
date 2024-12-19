/* Take 3 numbers input and tell if they can be the sides of a triangle*/

#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"Enter the 1st number =";
    cin>>x;
    cout<<"Enter the 2nd number =";
    cin>>y;
    cout<<"Enter the 3rd number =";
    cin>>z;

    if(x+y>z && (y+z>x) && (x+z>y)){
        cout<<"Yes! it can be the sides of the triangle";
    }
    else{
        cout<<"No! it can't be the side of the triangle";
    }
}