// thanh toan tien hat.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int a, b;


int main()
{
    std::cout << "Hello World!\n";
    cout << "nhap thoi gian vao\n";
    cin >> a;
    cout << "nhap thoi gian nghi\n";
    cin >> b;
    while (a < 8, b>24) {
        cout << "nhap sai gio";
        break;
    }
    while (b - a <= 3) {
        cout << "so tien phai tra la " << (b - a) * 30000 << "\n";
        break;
    }
    while (b - a > 3, b - a < 16)
    {
        cout << "so tien phai tra la " << 3 * 30000 + (b - a - 3) * 30000 * 7 / 10 << "\n";
        break;
    }
    while (a = 8, b = 24) {
        cout << "so tien can tra la " << (b - a) * 30000 * 9 / 10 << "\n";
        break;
    }
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
