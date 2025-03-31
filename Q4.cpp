#include <iostream>
using namespace std;

// Macro to calculate square
#define SQUARE(x) ((x) * (x))

int main() {
	int num;

	// Take input from user
	cout << "Enter an integer: ";
	cin >> num;

	// Use macro to print the square
	int result = SQUARE(num);
	cout << "Square: " << result << endl;

	return 0;
}
