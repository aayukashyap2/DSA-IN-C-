/*WAAP to check if a number is composite or not*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number = ";
    cin>>n;

      for (int i =n/2; i>=2; i--){
        if (n%i==0) {
            cout<<" Composite ";
            break;    //To Get Out The Loop Immediately 
        }

    }
    
}