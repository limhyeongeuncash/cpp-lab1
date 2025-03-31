#include <iostream>
using namespace std;

int main() {
	int num;
	cout << "Enter an integer: ";
	cin >> num;

	int sum = 0;

	// Calculate sum of digits using a loop
	for (; num > 0; num /= 10) {
		sum += num % 10;
	}

	cout << "Sum of digits: " << sum << endl;

	return 0;
}