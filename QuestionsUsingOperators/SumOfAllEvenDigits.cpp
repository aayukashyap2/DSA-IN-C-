/*WAP to print sum of all the even digits of a given number.*/

#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number =";
    cin >> n;

    int sum = 0;
    while (n != 0) {
        int ld = n % 10;  // Get the last digit of n
        if (ld % 2 == 0) {  // Check if the last digit is even
            sum += ld;  // Add the even digit to sum
        }
        n = n / 10;  // Remove the last digit from n
    }
    cout << sum;  // Print the sum of all even digits
    return 0;
}