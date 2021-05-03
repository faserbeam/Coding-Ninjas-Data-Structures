#include<iostream>

using namespace std;

void printSubsequences(string input, string output) {
	// Base case
	if(input == "") {
		cout << output << endl;
		return;
	}

	// Call the next element of the string with the same output
	printSubsequences(input.substr(1), output);

	// Call the next element of the string and add the current output value
	printSubsequences(input.substr(1), output + input[0]);
}

int main() {
	string input;
	cin >> input;
	string output = "";

	printSubsequences(input, output);
}
