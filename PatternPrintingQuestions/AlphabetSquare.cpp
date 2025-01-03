/*Print the given pattern
          A B C D E
          A B C D E
          A B C D E
          A B C D E
*/

#include<iostream>
using namespace std;
int main(){
    
    int n;
    cout<<"Enter the side of square =";
    cin>>n;
    for(char i=1;i<=n;i++){ //rows = n
        for(char j=1;j<=n;j++){ //columns = n
            cout<<char(j + 64)<<" ";
        }
        cout<<endl;
    } 

}