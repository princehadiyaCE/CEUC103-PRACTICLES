#include <iostream>
#include <iomanip>
using namespace std;

void showRecords(char enrollment[][15], char name[][30], double percentage[],
                 char grade[][5], int count) {
    cout << endl << "Enrollment      Name                 Percentage  Grade" << endl;
    for (int i = 0; i < count; i++)
        cout << left << setw(16) << enrollment[i] << setw(21) << name[i]
             << setw(12) << fixed << setprecision(2) << percentage[i] << grade[i] << endl;
}

int main() {
    const int LIMIT = 50;
    char enrollment[LIMIT][15], name[LIMIT][30], grade[LIMIT][5];
    double percentage[LIMIT];
    int count, position;
    char searchId[15];

    cout << "STUDENT RECORD ARRAY OPERATIONS" << endl;
    cout << "Enter number of students (1-49): "; cin >> count;
    if (count < 1 || count >= LIMIT) {
        cout << "Please enter a number from 1 to 49." << endl; return 0;
    }
    for (int i = 0; i < count; i++) {
        cout << "Enrollment, name (one word), percentage, grade: ";
        cin >> enrollment[i] >> name[i] >> percentage[i] >> grade[i];
    }
    showRecords(enrollment, name, percentage, grade, count);

    cout << endl << "Position for new student (1 to " << count + 1 << "): "; cin >> position;
    if (position >= 1 && position <= count + 1 && count < LIMIT) {
        for (int i = count; i >= position; i--) {
            int k = 0;
            while ((enrollment[i][k] = enrollment[i - 1][k]) != '\0') k++;
            k = 0; while ((name[i][k] = name[i - 1][k]) != '\0') k++;
            k = 0; while ((grade[i][k] = grade[i - 1][k]) != '\0') k++;
            percentage[i] = percentage[i - 1];
        }
        cout << "Enter enrollment, name, percentage, grade: ";
        cin >> enrollment[position - 1] >> name[position - 1]
            >> percentage[position - 1] >> grade[position - 1];
        count++;
        cout << "Record inserted." << endl;
        showRecords(enrollment, name, percentage, grade, count);
    } else cout << "Invalid position." << endl;

    cout << endl << "Enrollment number to update: "; cin >> searchId;
    int found = -1;
    for (int i = 0; i < count; i++) {
        int j = 0; while (enrollment[i][j] == searchId[j] && enrollment[i][j] != '\0') j++;
        if (enrollment[i][j] == '\0' && searchId[j] == '\0') found = i;
    }
    if (found >= 0) {
        cout << "New percentage and grade: "; cin >> percentage[found] >> grade[found];
        cout << "Record updated." << endl;
    } else cout << "Student not found." << endl;

    cout << endl << "Position to delete (1 to " << count << "): "; cin >> position;
    if (position >= 1 && position <= count) {
        for (int i = position - 1; i < count - 1; i++) {
            int k = 0; while ((enrollment[i][k] = enrollment[i + 1][k]) != '\0') k++;
            k = 0; while ((name[i][k] = name[i + 1][k]) != '\0') k++;
            k = 0; while ((grade[i][k] = grade[i + 1][k]) != '\0') k++;
            percentage[i] = percentage[i + 1];
        }
        count--;
        cout << "Record deleted." << endl;
    } else cout << "Invalid position." << endl;
    showRecords(enrollment, name, percentage, grade, count);
    return 0;
}
