#include<iostream>

using namespace std;

int sum(int input[], int n) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */
	
    if(n == 0) {
        return 0;
    }
    
    return input[0] + sum(input + 1, n - 1);
}

int main() {
	int input[] = {1, 2, 3};
	int size = 3;
	cout << sum(input, size);
}
