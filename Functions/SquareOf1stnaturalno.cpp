/*write a function to print squares of first n natural numbers ,taking 
n as argument to the function*/

#include<iostream>
using namespace std;
int square(int i){
    return i *i;
    }
int main(){
    int n;
    cout<<"Enter the Number = ";
    cin>>n;

    for (int i = 1; i<=n;i++){
        cout<<square(i)<<" ";
    }
}

// void squares(int n){
//     for (int i = 1; i<=n;i++){
//         cout<<i*i<<" ";
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter the Number = ";
//     cin>>n;
//     squares(n);

    
// }