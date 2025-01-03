/*Print the given pattern
         *
         **
         ***
         ****
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the side of square =";
    cin>>n;
  
    for(char i=1;i<=n;i++){ //rows = n
        for(char j=1;j<=i;j++){ //columns = n
            cout<<"*"<<" ";
        }
        cout<<endl;  
    } 

}