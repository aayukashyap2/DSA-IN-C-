/*Print the given pattern
              A
            A B
          A B C
        A B C D *
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the side of square =";
    cin>>n;
  
    for(int i=1;i<=n;i++){ //rows = n
        for(int j=1;j<=n-i;j++){ //columns = n,,,,spaces loops
            cout<<"  ";
        }    
        for(int j=1;j<=i;j++){ //columns = n,,,,stars loops
            cout<<char(j+64)<<" ";
        }
        cout<<endl;  
    } 

}