/*WAP to find the highest factor of a number 'n' (other than n itself)*/

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n = ";
    cin>>n;

    int f = 1; //storing highest factor 
    for (int i =1; i<=n; i++){
        if (n%i==0) f = i;

    }
    cout<<f;
}