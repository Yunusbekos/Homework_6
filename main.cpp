#include <iomanip>
#include <iostream>
#include <iomanip>
using namespace std;


//Task 7
// char cellAt(int row, int col) {
//         if ((row+col)%2==0) {
//             return '#';
//         }
//         return '.';
// }
// int main() {
//     int row, col;
//     cin >> row >> col;
//     for (int i=0; i<row; i++) {
//         for (int j=0; j<col; j++) {
//             cout << cellAt(i, j);
//         }
//         cout << endl;
//     }
// }


// Task 8

// double factorial(int k) {
//     double a=1;
//     double x=1;
//     for (int i = 1; i < k; i++) {
//         x=x*i;
//         a=a+(1/x);
//     }
//     return a;
// }
//
// int main() {
//     int n;
//     cin >> n;
//     cout<<fixed<<setprecision(10)<<factorial(n)<<endl;
// }

// Task 9

// int factorial(int n);
// int digitFactorialSum(int n);
// int main() {
//     int n;
//     cin >> n;
//     for(int i = 1; i <= n; i++) {
//
//     }


// }
int sub(int x);
int main() {
    cout<<sub(5);
    return 0;
}
int sub(int x) {
    return x*x*x;
}