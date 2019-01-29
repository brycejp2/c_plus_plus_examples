/*
Professor X, Section 0, prof@byu.edu
Description: Calculate how many pizzas of various sizes a user should buy for an event
*/

/*
Test cases: We show just one example here. 
Test case #1
Input: (8, 10)
Expected output: 1 large, 0 medium, 1 small
427.256 square inches, 53.407 per guest
Total cost: $24
Result: Passed
*/

#include <iostream>
#include <string> //this library allows access to string functions. someString.at(int), someString.push_back(char), someString.replace(), someString.size(), etc
#include <cmath> // Math functions: pow(double, double), sqrt(double), round(double), round(float), fabs(double), etc
#include <cctype> // Character functions: isalpha(char), isspace(char), ispunct(char), toupper(char), tolower(char), etc

using namespace std;

int main() {
	
	string inputString;
	getline(cin, inputString);
	while (inputString != "quit") {
		cout << "inputSTring: " << inputString << endl;
		string alphaString;
		for (int i = 0; i<inputString.size(); i++) {
			char currentChar = inputString.at(i);
			if (isalpha(currentChar)) {
				alphaString.push_back(currentChar);
			}
		}
		cout << alphaString << endl;
		getline(cin, inputString);
	}

	system("pause");
	return 0;
}





/* ---------- Book title - find/replace

string bookTitle;
cout << "Enter a book title: " << endl;
getline(cin, bookTitle);

string wordToFind;
cout << "Enter a word to find in the title: " << endl;
cin >> wordToFind;

string wordToReplace;
cout << "Enter a word to replace it with: " << endl;
cin >> wordToReplace;

string newBookTitle = bookTitle;
int wordToFindIndex = newBookTitle.find(wordToFind);
if (wordToFindIndex != string::npos) {
newBookTitle.replace(wordToFindIndex, wordToFind.size(), wordToReplace);
cout << "Original Title: " << bookTitle << endl;
cout << "Replaced Title: " << newBookTitle << endl;
}
else {
cout << "Word to find does not exist in the original title" << endl;
}
*/