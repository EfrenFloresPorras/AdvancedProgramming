// decimalToBinary.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
using namespace std;

// Binary is in base 2.
// Decimal is in base 10.

void DecimalToBinary(int n) {
    int binaryNumber[100], num = n; // The standard says when int a[100] = {1};, the rest will be left 0. 
    int i = 0;
    while (n > 0) {
        binaryNumber[i] = n % 2;    // Do the operation with a number, its super logical the operation.
        n = n / 2; // This coauses the while to cicle again.
        i++;
    }
    cout << "Binary form of " << num << " is ";
    for (int j = i - 1; j >= 0; j--)
        cout << binaryNumber[j];
    cout << endl;
}
int main() {
    int l;

    cout << "Input a number: ";
    cin >> l;
    DecimalToBinary(l); // run the code
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
