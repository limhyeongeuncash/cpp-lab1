#include <iostream>
#include <string>
using namespace std;

namespace MathOperations {
	int add(int a, int b) {
		return a + b;
	}
}

namespace TextOperations {
	string concat(string s1, string s2) {
		return s1 + s2;
	}
}

int main() {
	int sum = MathOperations::add(10, 20);
	cout << "Sum: " << sum << endl;

	string combined = TextOperations::concat("Hello,
