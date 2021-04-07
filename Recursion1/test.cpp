#include <iostream>
#include <string.h>
using namespace std;

int countSize(char input[]) {
	int size = 0;
	for(int i=0; input[i]!='\0'; i++) {
		size++;
	}
	return size;
}

int main() {
	char arr[50];
	cin >> arr;

	cout << countSize(arr);
}
