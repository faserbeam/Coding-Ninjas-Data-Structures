#include <iostream>
using namespace std;

int sizeOfArray(char input[]) {
	int count = 0;
	for(int i=0; input[i]!='\0'; i++) {
		count++;
	}
	return count;
}

bool helper(char input[], int startIndex) {

	// Base case
	if(input[startIndex] == '\0') {
		return true;
	}

	if(input[startIndex] != 'a') {
		return false;
	}

	if(input[startIndex+1] != '\0' && input[startIndex+2] != '\0') {
		if(input[startIndex+1] == 'b' && input[startIndex+2] == 'b') {
			return helper(input, startIndex+3);	
		}
	}

	return helper(input, startIndex+1);
}

bool checkAB(char input[]) {
	// Write your code here
	return helper(input, 0);
}


int main() {
    char input[100];
    bool ans;
    cin >> input;
    ans=checkAB(input);
    if(ans)
        cout<< "true" << endl;
    else
        cout<< "false" << endl;
}
