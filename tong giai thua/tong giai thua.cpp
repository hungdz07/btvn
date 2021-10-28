// tong giai thua.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int m, n, s, j, i, k;

int main()
{
    std::cout << "Hello World!\n";
    cout << "nhap so nguyen m\n";
    cin >> m;
    cout << "nhap so nguyen n\n";
    cin >> n;
    s = 1;
    j = 1;
    for (i = 1; i <= m; i++) {
        s = s * i;
    }
    for (k = 1; k <= n; k++) {
        j = j * k;
    }
    cout << "tong giai thua la " << s + j << "\n";
}