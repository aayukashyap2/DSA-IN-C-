/*WAP to print the factorials of first 'n' numbers*/

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number =";
    cin>>n;
    for (int i = 1; i <= n; i++){
        int fact = 1;
        for (int j = 1; j <= i; j++){
            fact *= j;
        }
        cout<<"Factorial of "<<i<<" = "<<fact<<endl;
    }
}