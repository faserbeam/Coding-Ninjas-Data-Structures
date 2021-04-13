// Input:	hello
// Output: 	hel*lo
//
// Input: 	aaaa
// Output:	a*a*a*a

#include <iostream>
using namespace std;

int sizeOfArray(char input[]) {
	int size = 0;
	for(int i=0; input[i]!='\0'; i++) {
		size++;
	}
	return size;
}

void pairStar(char input[]) {
    // Write your code here
	// Base Case
	if(input[0] == '\0') {
		return;
	}

	// Recursion
	pairStar(input+1);

	if(input[0] == input[1]) {
		for(int i=sizeOfArray(input)-1; i>=1; i--) {
			cout << input[i+1] << " : " << input[i] << endl;
			input[i+1] = input[i];
		}

		cout << sizeOfArray(input)-1 << endl;

		input[1] = '*';
	}	
}

int main() {
   char input[100];
   cin.getline(input, 100);
   pairStar(input);
   cout << input << endl;
}
