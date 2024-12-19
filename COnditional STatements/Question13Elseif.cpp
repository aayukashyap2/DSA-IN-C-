/*Take input marks of a student and print the grade according to marks:
91-100 excellent
81-90 very good
71-80 good
61-70 can do better
51-60 average
40-50 below average
<40 fail*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the marks =";
    cin>>n;

    // if(n>=91 && n<=100){
    //     cout<<"Excellent";
    // }
    // if (n>=81 && n<=90){
    //     cout<<"Very good";
    // }
    // if (n>=71 && n<=80){
    //     cout<<"good";
    // }
    // if (n>=61 && n<=70){
    //     cout<<"can do better";
    // }
    // if (n>=51 && n<=60){
    //     cout<<"Average";
    // }
    // if (n>=40 && n<=50){
    //     cout<<"below average";
    // }
    // if (n<40){
    //     cout<<"Fail";
    // }                           //1st method

    // if(n>=91){
    //     cout<<"Excellent";
    // }
    // else{
    //     if(n>=81){
    //         cout<<"Very Good";
    //     }
    //     else{
    //         if(n>=71){
    //             cout<<"good";
    //         }
    //         else{
    //             if(n>=61){
    //                 cout<<"Can do better";
    //             }
    //             else{
    //                 if(n>=51){
    //                     cout<<"Average";
    //                 }
    //                 else{
    //                     if(n>=41){
    //                         cout<<"below average";
    //                     }
    //                     else{
    //                         cout<<"Fail";
    //                     }
    //                 }
    //             }
    //         }
    //     }
    // }                             //2nd method

  if(n>=91){
    cout<<"Excellent";
  }
  else if(n>=81){
    cout<<"very good";
  }
   else if(n>=71){
    cout<<"good";
  }
   else if(n>=61){
    cout<<"can do better";
  }
   else if(n>=51){
    cout<<"average";
  }
   else if(n>=41){
    cout<<"below average";
  }
   else if(n<40){
    cout<<"fail";
  }
  

}