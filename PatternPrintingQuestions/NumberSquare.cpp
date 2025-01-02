/*Print the given pattern
          1 2 3 4 5 
          1 2 3 4 5
          1 2 3 4 5
          1 2 3 4 5
*/

#include<iostream>
using namespace std;
int main(){
    
    int n;
    cout<<"Enter the side of square =";
    cin>>n;
    for(int i=1;i<=n;i++){ //rows = n
        for(int j=1;j<=n;j++){ //columns = n
            cout<<j<<" ";
        }
        cout<<endl;
    } 

}