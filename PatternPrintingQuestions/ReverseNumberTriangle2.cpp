/*Print the given pattern 
4
4 3
4 3 2
4 3 2 1
        */

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows =";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<n-j<<" ";
        }
        cout<<endl;
    }
    
}