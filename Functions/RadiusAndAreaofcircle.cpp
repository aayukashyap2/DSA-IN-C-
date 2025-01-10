/*Write a function that takes radius of circle as argument and return
its area */

#include<iostream>
using namespace std ;
float areaofcircle(int radius){
    return 3.14*radius*radius;      //float area = 3.14*radius*radius
                                    //return area;
}              
int main(){
    int radius;
    cout<<"Enter the Radius = ";
    cin>>radius;
    cout<<areaofcircle(radius)<<endl;

    
}