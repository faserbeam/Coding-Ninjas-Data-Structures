#include<iostream>

using namespace std;

int subs(string str, string output[]) {
	// Base case
	if(str.empty()) {
		output[0] = '\0';
		return 1;
	}

	string smallString = str.substr(1);
	int smallOutputCount = subs(smallString, output);	
	for(int i=0; i<smallOutputCount; i++) {
		output[i + smallOutputCount] = str[0] + output[i];
		cout << "Value: " << i + smallOutputCount << endl;
	}
	
	cout << 2*smallOutputCount << endl;
	return 2*smallOutputCount;
}

int main() {
	// Return the subsequence of string 
	// Input: abc 
	// Output: ["", a, b, c, ab, bc, ac, abc]
	string str;
	cin >> str;
	string* output = new string[100];
	int sizeOfString = subs(str, output);

	for(int i=0; i<sizeOfString; i++) {
		cout << output[i] << endl;
	}
}
