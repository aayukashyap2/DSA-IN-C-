/*Print the given pattern
         1
         A B
         1 2 3
         A B C D
         1 2 3 4 5 
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the side of square =";
    cin>>n;
    for(int i=1;i<=n;i++){ //rows = n
        if(i%2==0){
            for(int j=1;j<=i;j++){ //columns = n
                cout<<char(j + 64)<<" ";
            }
        }else{
            for(int j=1;j<=i;j++){ //columns = n
                cout<<j<<" ";
            }
        }
        cout<<endl;
    }
  
    

}