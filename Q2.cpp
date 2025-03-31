#include <iostream>     // For input/output (cin, cout)
#include <string>       // For using the string class
#include <algorithm>    // For transform() and reverse()
using namespace std;

int main() {
	// Declare a string variable to hold user input
	string input;

	// Ask the user to enter a string
	cout << "Enter a string: ";
	getline(cin, input);  // Read the whole line including spaces

	// --- Convert string to uppercase ---
	// Use a built-in function to convert each character to uppercase
	string upperStr = input;  // Make a copy of the input
	transform(upperStr.begin(), upperStr.end(), upperStr.begin(), ::toupper);

	cout << "Uppercase: " << upperStr << endl;

	// --- Count vowels in the string ---
	int vowelCount = 0;

	// Go through each character and check if it is a vowel
	for (char c : input) {
		// Convert character to lowercase to match both 'A' and 'a'
		c = tolower(c);

		// Check if the character is a vowel
		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
			vowelCount++;
		}
	}

	cout << "Number of vowels: " << vowelCount << endl;

	// --- Reverse the string ---
	string reversedStr = input;  // Make a copy of the input
	reverse(reversedStr.begin(), reversedStr.end());  // Reverse it

	cout << "Reversed: " << reversedStr << endl;

	return 0;
}
