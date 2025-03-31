#include <iostream>
using namespace std;

// Define a macro named LIMIT to represent the upper bound (50)
#define LIMIT 50

int main() {
	// Use 'unsigned short' instead of 'int' to save memory (non-negative small numbers)
	for (unsigned short i = 2; i <= LIMIT; i += 2) {
		cout << i << " ";
	}

	cout << endl; // New line after the loop output
	return 0;
}
