/*Print the table of 'n'. Here 'n' is a integer which user will input.*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin >>n;
    
    for (int i = n; i<=n*10; i++){
        if(i%n==0){
            cout<<i<< " ";
        }
    }

}