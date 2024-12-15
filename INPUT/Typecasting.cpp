#include<iostream>
using namespace std;
int main(){
    /* int , float , bool , char -> interchanging/conversion from one datatype 
                                  to another datatype => TYPECASTING*/

    float x = 5.9;
    int y = (int)x;
    cout<< y <<endl;

    bool z = false;
    cout<< z <<endl;
    cout<<z+9 << endl;  //automatic interconversion here
 
    bool k = true;
    cout<< k <<endl;
    cout<<k+9<<endl;  //automatic interconversion here

    char ch ='A';
    int q = (int)ch; // x-> 65
    cout <<q << endl;

    char n='W';
    int r = (int)n;
    cout<< r - 64;




}