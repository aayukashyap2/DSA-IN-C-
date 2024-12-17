//Take +ve integer input and tell if it is a three digit no. or not.

#include<iostream>
using namespace std;
int main(){
      cout<<"Enter a positive integer =";
      int n;
      cin>>n; 

      if(n>=100 && n<=999){
        cout<<"It's a 3-digit number";
      }
      else{
        cout<<"It's not a 3-digit number";
      }
}