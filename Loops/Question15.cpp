/*WAP to print number from 1 to 20 except 3 and 8 by using CONTINUE */


#include <iostream>

using namespace std;

int main() {
    for ( int i = 1; i<=20; i++){
        // if (i!=3 && i!=8){
        //     cout<<i<<endl;
        // }
        // else{
        //     continue;
        // }

        if (i==3 || i==8){
            continue;
        }
        cout<<i<<" ";    
        
    }
    
    return 0;
}