#include <iostream>

using namespace std;

int sizeOfArray(char input[]) {
	int size = 0;
	for(int i=0; input[i]!='\0'; i++) {
		size++;
	}
	return size;
}

void removeX(char input[]) {
    // Write your code here
	
	// Base Case
	if(sizeOfArray(input) == 0) {
		return;
	}

	// Recursion
	removeX(input+1);

	// Small Calc
	if(input[0] == 'x') {
		for(int i=0; i<sizeOfArray(input); i++) {
			input[i] = input[i+1];
		}		
	}
}

int main() {
    char input[100];
    cin.getline(input, 100);
    removeX(input);
    cout << input << endl;
}

