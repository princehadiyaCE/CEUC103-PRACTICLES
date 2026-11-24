#include <iostream>
#include <iomanip>
using namespace std;

struct AcademicInfo {
    int semester;
    double percentage;
    char grade[5];
};

struct ContactInfo {
    char mobile[20];
    char email[60];
};

struct Student {
    char enrollment[15];
    char name[50];
    char branch[10];
    AcademicInfo academic;
    ContactInfo contact;
};

void displayStudentDetails(Student *student) {
    cout << endl << student->enrollment << " " << student->name
         << " " << student->branch << endl;
    cout << "Semester: " << student->academic.semester
         << "  Percentage: " << fixed << setprecision(2) << student->academic.percentage
         << "  Grade: " << student->academic.grade << endl;
    cout << "Mobile: " << student->contact.mobile
         << "  Email: " << student->contact.email << endl;
}

void updateContactInformation(Student *student) {
    cout << "Enter new mobile and email (no spaces): ";
    cin >> student->contact.mobile >> student->contact.email;
}

void displayAcademicInformation(Student *student) {
    cout << "Academic information for " << student->name << ": semester "
         << student->academic.semester << ", " << student->academic.percentage
         << "% , grade " << student->academic.grade << endl;
}

int main() {
    Student students[20];
    int count;
    cout << "STUDENT RECORD MANAGEMENT SYSTEM" << endl << "Number of students (1-20): ";
    cin >> count;
    if (count < 1 || count > 20) { cout << "Enter a number from 1 to 20." << endl; return 0; }

    for (int i = 0; i < count; i++) {
        cout << endl << "Student " << i + 1 << " enrollment: "; cin >> students[i].enrollment;
        cin.ignore();
        cout << "Name: "; cin.getline(students[i].name, 50);
        cout << "Branch, semester, percentage, grade: ";
        cin >> students[i].branch >> students[i].academic.semester
            >> students[i].academic.percentage >> students[i].academic.grade;
        cout << "Mobile and email (no spaces): ";
        cin >> students[i].contact.mobile >> students[i].contact.email;
    }

    cout << endl << "Student Records" << endl;
    for (int i = 0; i < count; i++) displayStudentDetails(&students[i]);

    cout << endl << "Update contact information for each student." << endl;
    for (int i = 0; i < count; i++) {
        cout << students[i].name << " - ";
        updateContactInformation(&students[i]);
    }
    cout << endl << "Updated Student Records" << endl;
    for (int i = 0; i < count; i++) {
        displayStudentDetails(&students[i]);
        displayAcademicInformation(&students[i]);
    }
    return 0;
}
