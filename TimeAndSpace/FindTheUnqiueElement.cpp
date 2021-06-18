#include <iostream>
using namespace std;


/* 
 * Greedy Approach: Time: O(n^2)
 *
 * int findUnique(int *arr, int n) {
    // Write your code here
	for(int i=0; i<n; i++) {
		int count = 0;
		for(int j=0; j<n; j++) {
			if(arr[i] == arr[j] && i!=j) {
				count++;
				break;
			}
		}
		if(count == 0){
			return arr[i];
			break;
		}
	}	
} */

int findUnique(int *arr, int n) {
	int res = 0;
	for(int i=0; i<n; i++) {
		res ^= arr[i];
	}

	return res;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int size;
        cin >> size;
        int *input = new int[size];

        for (int i = 0; i < size; ++i) {
            cin >> input[i];
        }

        cout << findUnique(input, size) << endl;
    }

    return 0;
}
