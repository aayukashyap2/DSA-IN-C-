/*Display this gp - 3,12,48... upto 'n' terms */

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n = ";
    cin>>n;

    //3,12,48...
   
    int a =3;
    for(int i =1;i<=n; i++ ){
        cout<<a<< " ";
        a = a * 4 ;

    }
}