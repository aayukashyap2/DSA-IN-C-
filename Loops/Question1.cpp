/*print hello world 'n' times . Take 'n' as input from user */

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    for(int i = 1; i<=n; i++){
        cout<<"Hello world"<<endl;
    }
}