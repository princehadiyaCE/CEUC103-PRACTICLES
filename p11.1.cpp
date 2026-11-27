#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int globalValue = 100;

int main() {
    int localValue = 200;

    cout << "PROGRAM EXECUTION AND ERROR HANDLING" << endl;
    cout << "Global value: " << globalValue << endl;
    cout << "Local value: " << localValue << endl;

    // new asks for memory while the program is running.
    int *dynamicValue = new int;
    *dynamicValue = 300;
    cout << "Dynamic memory value: " << *dynamicValue << endl;

    cout << endl << "Overflow demonstration" << endl;
    unsigned char smallValue = 255;
    smallValue = smallValue + 1;
    cout << "Unsigned char value after 255 + 1: " << (int)smallValue << endl;

    cout << endl << "Pointer aliasing" << endl;
    int number = 50;
    int *firstAddress = &number;
    int *secondAddress = &number;
    cout << "Original value: " << number << endl;
    *firstAddress = 75;
    cout << "Value through second address: " << *secondAddress << endl;

    cout << endl << "Dynamic memory release" << endl;
    int *temporaryValue = new int;
    *temporaryValue = 500;
    cout << "Allocated value: " << *temporaryValue << endl;
    delete temporaryValue;
    temporaryValue = 0;
    cout << "Memory released with delete." << endl;

    delete dynamicValue;
    dynamicValue = 0;

    cout << endl << "Division" << endl;
    double dividend, divisor;
    cout << "Enter dividend: ";
    if (!(cin >> dividend)) {
        cout << "Error: Please enter a number." << endl;
        return 0;
    }
    cout << "Enter divisor: ";
    if (!(cin >> divisor)) {
        cout << "Error: Please enter a number." << endl;
        return 0;
    }

    if (divisor == 0) {
        cout << "Error: Division by zero is not allowed." << endl;
    } else {
        cout << fixed << setprecision(2);
        cout << "Answer: " << dividend / divisor << endl;
    }

    cout << endl << "File error demonstration" << endl;
    ifstream missingFile("missing_practical_file_11_1.txt");
    if (!missingFile) {
        cout << "Error: Unable to open the file." << endl;
    } else {
        cout << "File opened successfully." << endl;
        missingFile.close();
    }

    cout << endl << "Program finished safely." << endl;
    return 0;
}
