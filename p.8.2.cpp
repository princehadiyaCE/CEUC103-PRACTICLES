#include <iostream>
using namespace std;

int instituteCode = 103; // Global variable: available to all functions below.

void sayHello() { cout << "Function with no parameter and no return value." << endl; }
int getNumber() { return 10; }
void showSquare(int number) { cout << "Square: " << number * number << endl; }
int addNumbers(int a, int b) { return a + b; }

void changeByValue(int number) { number = 99; }
void changeByReference(int &number) { number = 99; }

void displayStudent(int enrollment) {
    cout << "Student enrollment: " << enrollment << endl;
}
void displayStudent(int enrollment, int semester) {
    cout << "Enrollment: " << enrollment << ", semester: " << semester << endl;
}
void displayStudent(int enrollment, int semester, int marks) {
    cout << "Enrollment: " << enrollment << ", semester: " << semester
         << ", marks: " << marks << endl;
}

int main() {
    sayHello();
    cout << "Function with no parameter, with return value: " << getNumber() << endl;
    showSquare(5);
    cout << "Function with parameters and return value: " << addNumbers(4, 6) << endl;

    int value = 5;
    changeByValue(value);
    cout << "After call by value: " << value << " (original is unchanged)" << endl;
    changeByReference(value);
    cout << "After call by reference: " << value << " (original is changed)" << endl;

    int localNumber = 20; // Local variable: declared inside main.
    cout << "Local variable: " << localNumber << endl << "Global variable: " << instituteCode << endl;
    displayStudent(24001);
    displayStudent(24001, 1);
    displayStudent(24001, 1, 85);
    return 0;
}
