#include <iostream>
using namespace std;

int sizeOfArray(char *input) {
	int size = 0;
	for(int i=0; input[i]!='\0'; i++) {
		size++;
	}
	return size;
}

void removeConsecutiveDuplicates(char *input) {
	/* Don't write main().
	* Don't read input, it is passed as function argument.    
	* Change in the given string itself.
	* No need to return or print anything
	* Taking input and printing output is handled automatically.
	*/
	// Base case
	if(input[0] == '\0') {
		return;
	}
	// Recursive Call
	if(input[0] == input[1]) {
		int size = sizeOfArray(input);
		int i = 1;
		for(; i<size; i++) {
			input[i-1] = input[i];
		}
		input[i-1] = input[i];
		removeConsecutiveDuplicates(input);
	} else {
		removeConsecutiveDuplicates(input+1);
	}
}

int main() {
    char s[100000];
    cin >> s;
    removeConsecutiveDuplicates(s);
    cout << s << endl;
}
