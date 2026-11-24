#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int LIMIT = 50;
    int count, score[LIMIT];
    char id[LIMIT][15], name[LIMIT][30], searchId[15];

    cout << "SPORTS EVENT SEARCH AND RANKING" << endl;
    cout << "Enter number of participants (1-50): ";
    cin >> count;
    if (count < 1 || count > LIMIT) {
        cout << "Please enter a number from 1 to 50." << endl;
        return 0;
    }

    for (int i = 0; i < count; i++) {
        cout << endl << "Participant " << i + 1 << " ID: "; cin >> id[i];
        cout << "Name (one word): "; cin >> name[i];
        cout << "Score: "; cin >> score[i];
    }

    cout << endl << "Enter ID to search: ";
    cin >> searchId;
    int found = -1;
    for (int i = 0; i < count; i++) {
        if (id[i][0] == searchId[0]) {
            int j = 0;
            while (id[i][j] == searchId[j] && id[i][j] != '\0') j++;
            if (id[i][j] == '\0' && searchId[j] == '\0') found = i;
        }
    }
    if (found == -1) cout << "Participant not found." << endl;
    else cout << "Found: " << id[found] << " " << name[found] << " " << score[found] << endl;

    // Sort all three arrays together so each participant keeps their details.
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - 1 - i; j++) {
            if (score[j] < score[j + 1]) {
                int tempScore = score[j]; score[j] = score[j + 1]; score[j + 1] = tempScore;
                char tempId[15], tempName[30];
                int k = 0;
                while ((tempId[k] = id[j][k]) != '\0') k++;
                k = 0; while ((id[j][k] = id[j + 1][k]) != '\0') k++;
                k = 0; while ((id[j + 1][k] = tempId[k]) != '\0') k++;
                k = 0; while ((tempName[k] = name[j][k]) != '\0') k++;
                k = 0; while ((name[j][k] = name[j + 1][k]) != '\0') k++;
                k = 0; while ((name[j + 1][k] = tempName[k]) != '\0') k++;
            }
        }
    }

    cout << endl << "Ranking List" << endl;
    cout << left << setw(10) << "Rank" << setw(15) << "Name" << "Score" << endl;
    for (int i = 0; i < count; i++)
        cout << left << setw(10) << i + 1 << setw(15) << name[i] << score[i] << endl;

    cout << endl << "Top Three Performers" << endl;
    for (int i = 0; i < count && i < 3; i++)
        cout << i + 1 << ". " << name[i] << " - " << score[i] << endl;
    return 0;
}
