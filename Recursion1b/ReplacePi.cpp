#include <iostream>

using namespace std;

// Change in the given string itself. So no need to return or print anything

// Returns the size of char array
int sizeOfArray(char input[]) {
	int size = 0;
	for(int i=0; input[i]!='\0'; i++) {
		size++;
	}
	return size;
}

void replacePi(char input[]) {
	// Write your code here

	if(sizeOfArray(input) <= 1) {
		return;
	}

	replacePi(input+1);

	if(input[0] == 'p' && input[1] == 'i') {
		for(int i=sizeOfArray(input)-1; i>0; i--) {
			input[i+2] = input[i];
		}

		input[0] = '3';
		input[1] = '.';
		input[2] = '1';
		input[3] = '4';
	}
}

int main() {
    char input[10000];
    cin.getline(input, 10000);
    replacePi(input);
    cout << input << endl;
}
