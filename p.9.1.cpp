#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int number = 25;
    char letter = 'A';
    float percentage = 85.60f;
    int *numberAddress = &number;

    cout << "MEMORY ADDRESS EXPLORER" << endl;
    cout << "Integer value: " << number << "  Address: " << &number << endl;
    cout << "Character value: " << letter << "  Address: " << (void *)&letter << endl;
    cout << "Float value: " << fixed << setprecision(2) << percentage
         << "  Address: " << &percentage << endl;

    cout << endl << "Value through pointer: " << *numberAddress << endl;
    *numberAddress = 30;
    cout << "Value after changing it through the pointer: " << number << endl;

    int values[5] = {10, 20, 30, 40, 50};
    cout << endl << "Array using indexes: ";
    for (int i = 0; i < 5; i++) cout << values[i] << ' ';
    cout << endl << "Array using address access: ";
    int *arrayAddress = values;
    for (int i = 0; i < 5; i++) cout << *(arrayAddress + i) << ' ';
    cout << endl << "Both ways display the same array values." << endl;
    return 0;
}
