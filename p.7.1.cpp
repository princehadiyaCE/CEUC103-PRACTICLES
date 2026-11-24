#include <iostream>
#include <cstring>
using namespace std;

bool containsText(char text[], char word[]) {
    for (int i = 0; text[i] != '\0'; i++) {
        int j = 0;
        while (word[j] != '\0' && text[i + j] == word[j]) j++;
        if (word[j] == '\0') return true;
    }
    return false;
}

int main() {
    char enrollment[20], name[60], branch[15], referenceId[100], keyword[30];
    char libraryReference[100];
    cout << "STUDENT STRING PROCESSING" << endl;
    cout << "Enrollment number: "; cin >> enrollment;
    cin.ignore();
    cout << "Student name: "; cin.getline(name, 60);
    cout << "Branch: "; cin >> branch;

    int i = 0, j = 0;
    while (name[i] != '\0') referenceId[j++] = name[i++];
    referenceId[j++] = '-';
    i = 0;
    while (enrollment[i] != '\0') referenceId[j++] = enrollment[i++];
    referenceId[j] = '\0';
    cout << endl << "Student reference ID: " << referenceId << endl;
    strcpy(libraryReference, name);
    strcat(libraryReference, "-");
    strcat(libraryReference, enrollment);
    cout << "Reference using strcpy/strcat: " << libraryReference << endl;

    cout << "First name: ";
    i = 0; while (name[i] != ' ' && name[i] != '\0') cout << name[i++];
    cout << endl;
    cout << "Last name: ";
    int lastStart = 0;
    for (i = 0; name[i] != '\0'; i++) if (name[i] == ' ') lastStart = i + 1;
    for (i = lastStart; name[i] != '\0'; i++) cout << name[i];
    cout << endl;

    cout << "Keyword to search in name: "; cin >> keyword;
    if (containsText(name, keyword)) cout << "Keyword found." << endl;
    else cout << "Keyword not found." << endl;
    if (strstr(name, keyword) != NULL) cout << "Library search with strstr: found." << endl;
    else cout << "Library search with strstr: not found." << endl;

    cout << endl << "Student Report" << endl << "Enrollment: " << enrollment
         << endl << "Name: " << name << endl << "Branch: " << branch << endl;
    return 0;
}
