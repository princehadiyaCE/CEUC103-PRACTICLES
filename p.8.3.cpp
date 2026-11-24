#include <iostream>
using namespace std;

int recursiveCalls = 0;

long factorialRecursive(int n) {
    if (n <= 1) return 1;
    return n * factorialRecursive(n - 1);
}

long fibonacciRecursive(int n) {
    recursiveCalls++;
    if (n <= 1) return n;
    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}

int main() {
    int number, terms;
    cout << "Enter a number for factorial (0-12): "; cin >> number;
    if (number < 0 || number > 12) cout << "Enter a value from 0 to 12." << endl;
    else {
        long factorial = 1;
        for (int i = 1; i <= number; i++) factorial *= i;
        cout << "Factorial using loop: " << factorial << endl;
        cout << "Factorial using recursion: " << factorialRecursive(number) << endl;
    }

    cout << endl << "Number of Fibonacci terms (1-10): "; cin >> terms;
    if (terms < 1 || terms > 10) { cout << "Enter a value from 1 to 10." << endl; return 0; }
    cout << "Fibonacci using loop: ";
    int previous = 0, current = 1;
    for (int i = 0; i < terms; i++) {
        cout << previous << ' ';
        int next = previous + current; previous = current; current = next;
    }
    cout << endl << "Fibonacci using recursion: ";
    recursiveCalls = 0;
    for (int i = 0; i < terms; i++) cout << fibonacciRecursive(i) << ' ';
    cout << endl << "Recursive Fibonacci function calls: " << recursiveCalls << endl;
    cout << "Observation: recursion is easy to follow, but repeats work for Fibonacci." << endl;
    return 0;
}
