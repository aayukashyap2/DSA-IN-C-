/*Given two numbers a and b ,write a function to print all odd numbers between them */

#include<iostream>
using namespace std ;
void printodds(int a, int b)  {
    if (a>b) swap(a,b);           // swap(a,b) = printodds(b,a);
    for (int i =a;i<=b;i++){
        if (i%2 != a) cout<<i<<" ";
    }
    return ;
}          
int main(){
    int a,b;
    cout<<"Enter the value of a  = ";
    cin>>a;
    cout<<"Enter the value of b  = ";
    cin>>b;

    printodds(a,b);

    
}