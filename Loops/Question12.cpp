/*WAP to find the highest factor of a number 'n' (other than n itself)
by reverse loop method*/

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n = ";
    cin>>n;

    
    for (int i =n/2; i>=1; i--){
        if (n%i==0) {
            cout<<i<<" ";
            break;    //To Get Out The Loop Immediately 
        }

    }
    
}