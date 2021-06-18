#include<iostream>

using namespace std;

// Day 5: Linked List structure

class Node {
	public:
		int data;
		Node *next;
	
	 Node(int data) {
		this->data = data;
		next = NULL;
	}
};

int main() {
	Node n1(10);
	cout << n1.data;
}
