#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main() {
    int count, semester;
    char enrollment[20], name[60], branch[20], grade[5];
    double percentage;

    cout << "STUDENT RECORD MANAGEMENT SYSTEM" << endl;
    cout << "Number of students (1-10): ";
    cin >> count;
    if (count < 1 || count > 10) {
        cout << "Please enter a number from 1 to 10." << endl;
        return 0;
    }

    ofstream records("StudentRecords.txt");
    if (!records) {
        cout << "Error: Unable to create StudentRecords.txt." << endl;
        return 0;
    }

    for (int i = 0; i < count; i++) {
        cout << endl << "Student " << i + 1 << endl;
        cout << "Enrollment number: ";
        cin >> enrollment;
        cin.ignore(1000, '\n');
        cout << "Student name: ";
        cin.getline(name, 60);
        cout << "Branch: ";
        cin >> branch;
        cout << "Semester: ";
        cin >> semester;
        cout << "Percentage: ";
        cin >> percentage;
        cout << "Grade: ";
        cin >> grade;

        records << "Enrollment number: " << enrollment << endl;
        records << "Student name: " << name << endl;
        records << "Branch: " << branch << endl;
        records << "Semester: " << semester << endl;
        records << "Percentage: " << fixed << setprecision(2) << percentage << endl;
        records << "Grade: " << grade << endl;
        records << "----------------------------------------" << endl;
    }
    records.close();
    cout << endl << "Student records stored successfully." << endl;

    ifstream input("StudentRecords.txt");
    if (!input) {
        cout << "Error: Unable to open StudentRecords.txt for reading." << endl;
        return 0;
    }

    cout << endl << "Reading StudentRecords.txt" << endl;
    char line[150];
    while (input.getline(line, 150)) {
        cout << line << endl;
    }
    if (input.eof()) {
        cout << "All student records were read." << endl;
    }
    input.close();

    ifstream original("StudentRecords.txt");
    if (!original) {
        cout << "Error: Unable to open StudentRecords.txt for backup." << endl;
        return 0;
    }

    ofstream backup("BackupStudentRecords.txt");
    if (!backup) {
        cout << "Error: Unable to create BackupStudentRecords.txt." << endl;
        original.close();
        return 0;
    }

    char character;
    while (original.get(character)) {
        backup.put(character);
    }
    original.close();
    backup.close();

    ifstream checkBackup("BackupStudentRecords.txt");
    if (checkBackup) {
        cout << "BackupStudentRecords.txt created successfully." << endl;
        checkBackup.close();
    } else {
        cout << "Error: BackupStudentRecords.txt was not created." << endl;
    }

    return 0;
}
