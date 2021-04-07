#include <iostream>
#include <string.h>
using namespace std;


int countSize(char input[]) {
	int size = 0;
	for(int i=0; i!='\0'; i++) {
		size++;
	}
	return size;
}

bool helper(char input[], int start, int end) {
	// Base Case
	if(start >= end) {
		return true;
	}

	if(input[start] != input[end]) {
		return false;
	}

	return helper(input, start+1, end-1);

}

bool checkPalindrome(char input[]) {
    // Write your code here	
	return helper(input, 0, strlen(input)-1);
}

int main() {
    char input[50];
    cin >> input;
    
    if(checkPalindrome(input)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}
