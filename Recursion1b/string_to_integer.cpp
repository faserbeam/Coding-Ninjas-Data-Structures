#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

int sizeOfArray(char input[]) {
	int size = 0;
	for(int i=0; input[i]!='\0'; i++) {
		size++;
	}
	return size;
}

int stringToNumber(char input[]) {
    // Write your code here
	
	if(input[0] == '\0') {
		return 0;
	}	

	//if(sizeOfArray(input) == 1) {
		//return input[0] - 48;
	//}

	int ans = stringToNumber(input+1);

	return ans + ((input[0]-48) * pow(10, sizeOfArray(input)-1));
}

int main() {
    char input[50];
    cin >> input;
    cout << stringToNumber(input) << endl;
}
