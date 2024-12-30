/*WAAP to check if a number is composite or Prime*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number = ";
    cin>>n;
      
      bool flag = true; //true means prime
      for (int i =n/2; i>=2; i--){
        if (n%i==0) {
            flag = false;  // false means composite 
            break;    //To Get Out The Loop Immediately 
        }

    }
    if(n==1) cout<<"Neither Prime nor Composite";
    else if (flag == true) cout <<"Prime";
    else cout<<"Composite";
    
}