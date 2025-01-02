/*WAP to print the sum from 1 to N.*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number =";
    cin>>n;
    int sum = 0;
    for (int i = 1; i <= n; i++){
        sum += i;
    }
    cout<<"sum= "<<sum;
}