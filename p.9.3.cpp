#include <iostream>
using namespace std;

void showStackValue() {
    int localNumber = 100; // A local variable is normally stored on the stack.
    cout << "Local value: " << localNumber << "  Address: " << &localNumber << endl;
}

int main() {
    cout << "MEMORY ORGANIZATION ANALYZER" << endl << "Stack memory" << endl;
    showStackValue();

    int *heapNumber = new int;
    *heapNumber = 250;
    cout << endl << "Dynamically allocated value: " << *heapNumber
         << "  Address: " << heapNumber << endl;

    int original = 50;
    int *singleLevel = &original;
    int **doubleLevel = &singleLevel;
    int ***tripleLevel = &doubleLevel;
    cout << endl << "Original value: " << original << endl;
    cout << "One-level access: " << *singleLevel << endl;
    cout << "Two-level access: " << **doubleLevel << endl;
    cout << "Three-level access: " << ***tripleLevel << endl;

    int *nullAddress = 0;
    if (nullAddress == 0) cout << endl << "Null pointer: safe to check, do not read a value from it." << endl;

    int *danglingAddress = heapNumber;
    delete heapNumber;
    heapNumber = 0;
    cout << "Memory released. The saved old address is now dangling; do not use it." << endl;
    cout << "The current heap pointer was reset to NULL." << endl;
    cout << "An uninitialized pointer is unsafe; do not print or dereference it." << endl;
    (void)danglingAddress; // Kept only to show the old address must not be used.
    return 0;
}
