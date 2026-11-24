#include <iostream>
using namespace std;

int main() {
    int first[3][3], second[3][3], result[3][3] = {};
    cout << "Enter the 9 values of the first 3 x 3 matrix:" << endl;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) cin >> first[i][j];
    cout << "Enter the 9 values of the second 3 x 3 matrix:" << endl;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) cin >> second[i][j];

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            for (int k = 0; k < 3; k++) result[i][j] += first[i][k] * second[k][j];

    cout << endl << "Product matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) cout << result[i][j] << ' ';
        cout << endl;
    }

    int a[20], b[20], merged[40], n, m;
    cout << endl << "Length of first sorted array (1-20): "; cin >> n;
    if (n < 1 || n > 20) { cout << "Invalid length." << endl; return 0; }
    cout << "Enter its values in sorted order: ";
    for (int i = 0; i < n; i++) cin >> a[i];
    cout << "Length of second sorted array (1-20): "; cin >> m;
    if (m < 1 || m > 20) { cout << "Invalid length." << endl; return 0; }
    cout << "Enter its values in sorted order: ";
    for (int i = 0; i < m; i++) cin >> b[i];

    int i = 0, j = 0, k = 0;
    while (i < n && j < m) {
        if (a[i] < b[j]) merged[k++] = a[i++];
        else merged[k++] = b[j++];
    }
    while (i < n) merged[k++] = a[i++];
    while (j < m) merged[k++] = b[j++];
    cout << "Merged array: ";
    for (int x = 0; x < k; x++) cout << merged[x] << ' ';
    cout << endl;
    return 0;
}
