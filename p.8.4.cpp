#include <iostream>
using namespace std;

void printUp(int n) {
    if (n == 0) return;
    printUp(n - 1);
    cout << n << ' ';
}

void printDown(int n) {
    if (n == 0) return;
    cout << n << ' ';
    printDown(n - 1);
}

int reverseNumber(int number, int reversed) {
    if (number == 0) return reversed;
    return reverseNumber(number / 10, reversed * 10 + number % 10);
}

int sumDigits(int number) {
    if (number == 0) return 0;
    return number % 10 + sumDigits(number / 10);
}

void printBinary(int number) {
    if (number > 1) printBinary(number / 2);
    cout << number % 2;
}

int main() {
    int n, number, decimal;
    cout << "Enter N (1-50): "; cin >> n;
    if (n < 1 || n > 50) { cout << "Enter a value from 1 to 50." << endl; return 0; }
    cout << "From 1 to N: "; printUp(n);
    cout << endl << "From N to 1: "; printDown(n);

    cout << endl << "Enter a positive integer: "; cin >> number;
    cout << "Reverse: " << reverseNumber(number, 0) << endl;
    cout << "Sum of digits: " << sumDigits(number) << endl;
    cout << "Enter a decimal number (0 or more): "; cin >> decimal;
    cout << "Binary: "; printBinary(decimal); cout << endl;
    return 0;
}
