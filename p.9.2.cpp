#include <iostream>
#include <iomanip>
using namespace std;

struct Student {
    char enrollment[15];
    char name[40];
    char branch[10];
    int semester;
    double percentage;
    char grade[5];
};

void displayRecords(Student *records, int count) {
    cout << endl << "Records using address-based access" << endl;
    for (int i = 0; i < count; i++) {
        Student *current = records + i; // Move to the next record by its address.
        cout << "Address: " << current << endl;
        cout << current->enrollment << " " << current->name << " " << current->branch
             << " Semester " << current->semester << " " << fixed << setprecision(2)
             << current->percentage << "% Grade " << current->grade << endl << endl;
    }
}

double classAverage(Student *records, int count) {
    double total = 0;
    for (int i = 0; i < count; i++) total += (records + i)->percentage;
    return total / count;
}

double highestPercentage(Student *records, int count) {
    double highest = records[0].percentage;
    for (int i = 1; i < count; i++) if (records[i].percentage > highest) highest = records[i].percentage;
    return highest;
}

double lowestPercentage(Student *records, int count) {
    double lowest = records[0].percentage;
    for (int i = 1; i < count; i++) if (records[i].percentage < lowest) lowest = records[i].percentage;
    return lowest;
}

int main() {
    int count;
    cout << "STUDENT RECORDS WITH DYNAMIC MEMORY" << endl;
    cout << "Number of students (1-50): "; cin >> count;
    if (count < 1 || count > 50) { cout << "Enter a number from 1 to 50." << endl; return 0; }

    Student *students = new Student[count];
    cout << "Memory allocated successfully." << endl;
    for (int i = 0; i < count; i++) {
        cout << endl << "Student " << i + 1 << " enrollment, name (one word), branch, semester, percentage, grade:" << endl;
        cin >> students[i].enrollment >> students[i].name >> students[i].branch
            >> students[i].semester >> students[i].percentage >> students[i].grade;
    }

    displayRecords(students, count);
    cout << fixed << setprecision(2);
    cout << "Class average: " << classAverage(students, count) << "%" << endl;
    cout << "Highest percentage: " << highestPercentage(students, count) << "%" << endl;
    cout << "Lowest percentage: " << lowestPercentage(students, count) << "%" << endl;

    delete[] students;
    students = 0;
    cout << "Memory released. Address reset to NULL." << endl;
    return 0;
}
