#include <iostream>
#include <string>
using namespace std;

string mapping[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

int keypad(int num, string output[]){
    /* Insert all the possible combinations of the integer number into the output string array. You do not need to
    print anything, just return the number of strings inserted into the array.
    */
	// Base case
	if(num == 0) {
		output[0] = "";
		return 1;
	}
	string smallOutput[1000];
	
	// Recursion
	int keyValueCount = keypad(num/10, smallOutput);

	string keyValue = mapping[num%10];
	int count = 0;

	int k=0;

	for(int i=0; i<keyValue.size(); i++) {
		for(int j=0; j<keyValueCount; j++) {
			output[k++] = smallOutput[j] + keyValue[i];
		}
	}

	return k;
}

int main(){
    int num;
    cin >> num;

    string output[10000];
    int count = keypad(num, output);
    for(int i = 0; i < count && i < 10000; i++){
        cout << output[i] << endl;
    }
    return 0;
}
