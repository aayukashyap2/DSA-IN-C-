/*Print the given pattern
          A A A A A
          B B B B B
          C C C C C
          D D D D D
*/

#include<iostream>
using namespace std;
int main(){
    
    int n;
    cout<<"Enter the side of square =";
    cin>>n;
    for(char i=1;i<=n;i++){ //rows = n
        for(char j=1;j<=n;j++){ //columns = n
            cout<<char(i + 64)<<" ";
        }
        cout<<endl;
    } 

}