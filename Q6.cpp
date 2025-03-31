#include <iostream>
using namespace std;

int main() {
	int num;
	cout << "Enter an integer: ";
	cin >> num;

	int reversed = 0;

	// Reverse the digits using a loop
	for (; num > 0; num /= 10) {
		reversed = reversed * 10 + (num % 10);
	}

	cout << "Reversed: " << reversed << endl;

	return 0;
}
