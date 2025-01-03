/*Print the given pattern
         1
         2 2
         3 3 3
         4 4 4 4
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the side of square =";
    cin>>n;
  
    for(int i=1;i<=n;i++){ //rows = n
        for(int j=1;j<=i;j++){ //columns = n
            cout<<i <<" ";
        }
        cout<<endl;  
    } 

}