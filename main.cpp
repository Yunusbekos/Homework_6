#include <iomanip>
#include <iostream>
using namespace std;


// Task 4

// int smallestRepunitDivByK(int k) {
//     if (k==1) return 1;
//     int r_one=1%k;
//     int count =1;
//     for (int i=1;i<=k-1;i++) {
//         r_one=(r_one*10+1)%k;
//         count++;
//         if (r_one==0) {
//             return count;
//         }
//     }
//     return -1;
// }
// int main() {
//     int k;
//     cin >> k;
//     cout << smallestRepunitDivByK(k);
// }



// // Task 5
// bool isPrime(int n) {
//     for (int i=2; i*i<=n; i++) {
//         if (n%i==0) {
//             return false;
//         }
//     }
//     return true;
// }
// int main() {
//     int n;
//     cin >> n;
//     int count = 0;
//     for (int i = 2; i <= n-2; i++) {
//         if (isPrime(i) && isPrime(i+2)) {
//             cout << "("<<i <<","<<i+2<<") ";
//             count++;
//         }
//     }
//     cout << "\ncount: "<<count << endl;
// }




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

// int factorial(int n) {
//     int a=1;
//     for(int i = 1; i <= n; i++) {
//         a*=i;
//     }
//     return a;
// }
// int digitFactorialSum(int n) {
//     int c=0;
//     while (n>0) {
//         c=c+factorial(n%10);
//         n/=10;
//     }
//     return c;
// }
// int main() {
//     int n;
//     cin >> n;
//     for(int i = 1; i <= n; i++) {
//         if (digitFactorialSum(i) == i) {
//             cout << i << endl;
//         }
//     }
// }

// Task 10

// void PrintRow(int start, int count) {
//         for (int i = start; i < start + count; i++) {
//             cout << i << " ";
//         }
// }
//
// int main() {
//     int n;
//     cin >>n;
//     int d=1;
//     for (int i=1; i<=n; i++) {
//         PrintRow(d, i);
//         d+=i;
//         cout << endl;
//     }
// }


