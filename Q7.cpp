#include <iostream>
#include <string>
using namespace std;

#define MIN_LENGTH 8  // Minimum password length

int main() {
	string password;
	cout << "Enter your password: ";
	cin >> password;  // Input without spaces

	// Flags for password strength conditions
	bool hasUpper = false, hasLower = false, hasDigit = false, hasSpecial = false;
	string specialChars = "!@#$%^&*";

	// Check each character in the password
	for (char c : password) {
		if (isupper(c)) hasUpper = true;
		else if (islower(c)) hasLower = true;
		else if (isdigit(c)) hasDigit = true;
		else if (specialChars.find(c) != string::npos) hasSpecial = true;
	}

	bool isStrong = true;

	// Evaluate conditions
	if (password.length() < MIN_LENGTH) {
		cout << "Weak Password: too short" << endl;
		isStrong = false;
	}
	if (!hasUpper) {
		cout << "Weak Password: missing uppercase letter" << endl;
		isStrong = false;
	}
	if (!hasLower) {
		cout << "Weak Password: missing lowercase letter" << endl;
		isStrong = false;
	}
	if (!hasDigit) {
		cout << "Weak Password: missing digit" << endl;
		isStrong = false;
	}
	if (!hasSpecial) {
		cout << "Weak Password: missing special character" << endl;
		isStrong = false;
	}

	if (isStrong) {
		cout << "Strong Password" << endl;
	}

	return 0;
}
