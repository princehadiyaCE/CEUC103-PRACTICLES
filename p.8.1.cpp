#include <iostream>
#include <iomanip>
using namespace std;

char enrollment[20], studentName[50], branch[15];
int semester, marks[5], total;
double percentage;
char grade[5], result[10];

void displayHeader() {
    cout << "STUDENT RECORD MANAGEMENT SYSTEM" << endl;
}

void acceptStudentDetails() {
    cout << "Enrollment number: "; cin >> enrollment;
    cin.ignore();
    cout << "Student name: "; cin.getline(studentName, 50);
    cout << "Branch: "; cin >> branch;
    cout << "Semester: "; cin >> semester;
    total = 0;
    for (int i = 0; i < 5; i++) {
        cout << "Subject " << i + 1 << " marks: "; cin >> marks[i];
        total += marks[i];
    }
}

void calculateAcademicResult() {
    percentage = total / 5.0;
    if (percentage >= 90) { grade[0] = 'O'; grade[1] = '\0'; }
    else if (percentage >= 80) { grade[0] = 'A'; grade[1] = '+'; grade[2] = '\0'; }
    else if (percentage >= 70) { grade[0] = 'A'; grade[1] = '\0'; }
    else if (percentage >= 60) { grade[0] = 'B'; grade[1] = '\0'; }
    else { grade[0] = 'C'; grade[1] = '\0'; }
    if (percentage >= 40) { result[0] = 'P'; result[1] = 'A'; result[2] = 'S'; result[3] = 'S'; result[4] = '\0'; }
    else { result[0] = 'F'; result[1] = 'A'; result[2] = 'I'; result[3] = 'L'; result[4] = '\0'; }
}

void displayStudentReport() {
    cout << fixed << setprecision(2);
    cout << endl << "Academic Report" << endl << "Enrollment: " << enrollment
         << endl << "Name: " << studentName << endl << "Branch: " << branch
         << endl << "Semester: " << semester << endl << "Total marks: " << total
         << endl << "Percentage: " << percentage << "%" << endl << "Grade: " << grade
         << endl << "Result: " << result << endl;
}

int main() {
    displayHeader();
    acceptStudentDetails();
    calculateAcademicResult();
    displayStudentReport();
    return 0;
}
