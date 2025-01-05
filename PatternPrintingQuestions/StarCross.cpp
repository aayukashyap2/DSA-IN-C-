/*Print the given pattern when n = odd
   *    *
    * *        
     *        
    * * 
   *    *      */

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows (odd number) = ";
    cin >> n;

    for (int i = 0; i < n; i++) {  // Loop through rows
        for (int j = 0; j < n; j++) {  // Loop through columns
            if (i == j || i + j == n - 1) {  // Check for diagonals
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;  // Move to the next line after each row
    }

    return 0;
}