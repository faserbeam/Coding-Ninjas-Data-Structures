#include <iostream>

using namespace std;

bool checkNumber(int input[], int size, int x) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */

    if(size == 0) {
        return false;
    }
    
   	if(input[0] == x) {
       return true;
   	} 
    
	checkNumber(input + 1, size - 1, x);
}

int main() {
	int input[] = {1, 2, 3, 4, 5};
	int size = 5;
	cout << checkNumber(input, size, 5);
}
