#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    char text[500], extra[200], keyword[50], word[50];
    char copied[500], upper[700], lower[700], combined[700], compareText[700];
    cout << "DOCUMENT TEXT ANALYZER" << endl << "Enter a paragraph (one line):" << endl;
    cin.getline(text, 500);

    int length = 0, words = 0, letters = 0, digits = 0, special = 0;
    bool inWord = false;
    while (text[length] != '\0') {
        unsigned char ch = (unsigned char)text[length];
        if (isalpha(ch)) letters++;
        else if (isdigit(ch)) digits++;
        else if (ch != ' ') special++;
        if (ch != ' ' && !inWord) words++;
        inWord = (ch != ' ');
        length++;
    }
    if (length == 0) {
        cout << "Please enter a non-empty paragraph." << endl;
        return 0;
    }
    cout << endl << "Characters: " << length << endl << "Words: " << words
         << endl << "Alphabets: " << letters << endl << "Digits: " << digits
         << endl << "Special characters: " << special << endl;

    int firstEnd = 0;
    while (text[firstEnd] == ' ') firstEnd++;
    int lastStart = length - 1;
    while (lastStart >= 0 && text[lastStart] == ' ') lastStart--;
    if (firstEnd >= length) {
        cout << "Please enter at least one word." << endl;
        return 0;
    }
    int start = lastStart;
    while (start >= 0 && text[start] != ' ') start--;
    cout << "First word: ";
    for (int i = firstEnd; text[i] != ' ' && text[i] != '\0'; i++) cout << text[i];
    cout << endl << "Last word: ";
    for (int i = start + 1; i <= lastStart; i++) cout << text[i];
    cout << endl << "First character: " << text[firstEnd]
         << endl << "Last character: " << text[lastStart] << endl;

    cout << endl << "Additional sentence (one line):" << endl;
    cin.getline(extra, 200);
    strcpy(combined, text);
    strcat(combined, " ");
    strcat(combined, extra);
    cout << "Updated paragraph: " << combined << endl;

    cout << "Keyword to find: "; cin >> keyword;
    char *match = strstr(combined, keyword);
    if (match != NULL) cout << "Keyword found at position " << (match - combined + 1) << " (counting from 1)." << endl;
    else cout << "Keyword not found." << endl;

    strcpy(upper, combined);
    strcpy(lower, combined);
    int newLength = strlen(combined);
    cout << endl << "Uppercase: ";
    for (int i = 0; i < newLength; i++) { upper[i] = (char)toupper((unsigned char)upper[i]); cout << upper[i]; }
    cout << endl << "Lowercase: ";
    for (int i = 0; i < newLength; i++) { lower[i] = (char)tolower((unsigned char)lower[i]); cout << lower[i]; }
    cout << endl << "Reverse: ";
    for (int i = newLength - 1; i >= 0; i--) cout << combined[i];
    cout << endl;

    cout << "Word to check for palindrome: "; cin >> word;
    int left = 0, right = (int)strlen(word) - 1;
    bool palindrome = true;
    while (left < right) { if (word[left] != word[right]) palindrome = false; left++; right--; }
    cout << (palindrome ? "Palindrome" << endl : "Not a palindrome" << endl);

    // A short comparison using the standard character-array string functions.
    strcpy(copied, combined);
    cin.ignore();
    cout << "Enter another line for string comparison: ";
    cin.getline(compareText, 700);
    cout << endl << "Standard string functions" << endl;
    cout << "Length: " << strlen(combined) << endl;
    cout << "Copy: " << copied << endl;
    cout << "Compare with entered text: " << (strcmp(combined, compareText) == 0 ? "Equal" : "Different") << endl;
    cout << "Concatenation uses strcat; substring search uses strstr." << endl;
    cout << "toupper() and tolower() were used above." << endl;
    return 0;
}
