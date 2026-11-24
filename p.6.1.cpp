#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int LIMIT = 50;
    int count, score[LIMIT], total = 0;
    int highest, lowest;
    char id[LIMIT][15], name[LIMIT][30];

    cout << "SPORTS EVENT SCORE ANALYSIS" << endl;
    cout << "Enter number of participants (1-50): ";
    cin >> count;
    if (count < 1 || count > LIMIT) {
        cout << "Please enter a number from 1 to 50." << endl;
        return 0;
    }

    for (int i = 0; i < count; i++) {
        cout << endl << "Participant " << i + 1 << " ID: ";
        cin >> id[i];
        cout << "Name (one word): ";
        cin >> name[i];
        cout << "Score: ";
        cin >> score[i];
        total += score[i];
    }

    highest = lowest = score[0];
    cout << endl << "Participant Performance" << endl;
    cout << left << setw(15) << "ID" << setw(20) << "Name" << "Score" << endl;
    for (int i = 0; i < count; i++) {
        cout << left << setw(15) << id[i] << setw(20) << name[i] << score[i] << endl;
        if (score[i] > highest) highest = score[i];
        if (score[i] < lowest) lowest = score[i];
    }

    cout << "Total score: " << total << endl;
    cout << fixed << setprecision(2);
    cout << "Average score: " << (double)total / count << endl;
    cout << "Highest score: " << highest << endl;
    cout << "Lowest score: " << lowest << endl;
    return 0;
}
