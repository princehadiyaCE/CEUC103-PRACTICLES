#include <iostream>
using namespace std;

struct Product {
    int code;
    char name[20];
    float price;
    int quantity;
};

struct OrderA { char type; double amount; int code; char status; };
struct OrderB { double amount; int code; char type; char status; };

union SharedData {
    int integerValue;
    float floatValue;
    char characterValue;
};

int main() {
    Product product;
    cout << "COMPOSITE DATA REPRESENTATION ANALYZER" << endl;
    cout << "Product member sizes (bytes)" << endl;
    cout << "code: " << sizeof(product.code) << endl;
    cout << "name array: " << sizeof(product.name) << endl;
    cout << "price: " << sizeof(product.price) << endl;
    cout << "quantity: " << sizeof(product.quantity) << endl;
    cout << "Total Product structure size: " << sizeof(Product) << endl;

    cout << endl << "Same members, different order" << endl;
    cout << "Order A size: " << sizeof(OrderA) << " bytes" << endl;
    cout << "Order B size: " << sizeof(OrderB) << " bytes" << endl;
    cout << "The sizes can differ because the compiler may add padding for alignment." << endl;

    SharedData data;
    cout << endl << "Union members share the same starting address:" << endl;
    cout << "Integer member: " << (void *)&data.integerValue << endl;
    cout << "Float member:   " << (void *)&data.floatValue << endl;
    cout << "Character:      " << (void *)&data.characterValue << endl;
    data.integerValue = 120;
    cout << "After storing integer, active value: " << data.integerValue << endl;
    data.floatValue = 120.5f;
    cout << "After storing float, active value: " << data.floatValue << endl;
    data.characterValue = 'x';
    cout << "After storing character, active value: " << data.characterValue << endl;
    cout << "Union size: " << sizeof(SharedData) << " bytes" << endl;
    cout << "Only the most recently assigned union member should be read." << endl;

    cout << endl << "Structure: separate space; all members can be used together." << endl;
    cout << "Union: shared space; use it when only one member is needed at a time." << endl;
    return 0;
}
