/*Print the given pattern
          a b c d e
          a b c d e
          a b c d e
          a b c d e
*/

#include<iostream>
using namespace std;
int main(){
    
    int n;
    cout<<"Enter the side of square =";
    cin>>n;
    for(char i=1;i<=n;i++){ //rows = n
        for(char j=1;j<=n;j++){ //columns = n
            cout<<char(j + 96)<<" ";
        }
        cout<<endl;
    } 

}