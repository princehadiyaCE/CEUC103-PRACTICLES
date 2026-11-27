#include <iostream>
#include <fstream>
using namespace std;

int main() {
    char line[200];

    cout << "FILE ORGANIZATION AND FILE OPERATIONS" << endl;
    cout << "Enter file contents. Type # on its own line to finish." << endl;

    ofstream document("Document.txt");
    if (!document) {
        cout << "Error: Unable to create Document.txt." << endl;
        return 0;
    }

    while (cin.getline(line, 200)) {
        if (line[0] == '#' && line[1] == '\0') {
            break;
        }
        document << line << endl;
    }
    document.close();
    cout << "Document.txt created and saved." << endl;

    ifstream input("Document.txt");
    if (!input) {
        cout << "Error: Unable to open Document.txt for reading." << endl;
        return 0;
    }

    cout << endl << "Reading Document.txt" << endl;
    while (input.getline(line, 200)) {
        cout << line << endl;
    }
    if (input.eof()) {
        cout << "End of file reached." << endl;
    }

    // tellg reports the current position. seekg moves the read pointer.
    input.clear();
    input.seekg(0, ios::end);
    long endPosition = (long)input.tellg();
    cout << endl << "File position at the end: " << endPosition << endl;

    input.clear();
    input.seekg(0, ios::beg);
    input.getline(line, 200);
    long secondLinePosition = (long)input.tellg();
    cout << "Reading again from after the first line:" << endl;
    if (secondLinePosition >= 0) {
        input.seekg(secondLinePosition, ios::beg);
        while (input.getline(line, 200)) {
            cout << line << endl;
        }
    }

    input.clear();
    input.seekg(0, ios::beg);
    cout << endl << "Complete contents after resetting to the beginning:" << endl;
    while (input.getline(line, 200)) {
        cout << line << endl;
    }
    input.close();

    ifstream original("Document.txt");
    if (!original) {
        cout << "Error: Unable to open Document.txt for copying." << endl;
        return 0;
    }

    ofstream backup("BackupDocument.txt");
    if (!backup) {
        cout << "Error: Unable to create BackupDocument.txt." << endl;
        original.close();
        return 0;
    }

    char character;
    while (original.get(character)) {
        backup.put(character);
    }
    original.close();
    backup.close();

    ifstream checkBackup("BackupDocument.txt");
    if (checkBackup) {
        cout << endl << "BackupDocument.txt created successfully." << endl;
        checkBackup.close();
    } else {
        cout << "Error: BackupDocument.txt was not created." << endl;
    }

    return 0;
}
