#include<iostream>

using namespace std;

// Node definition
struct Node {
	//public:
	int data;
	Node *next;

	Node(int i) {
		this->data = i;
		this->next = NULL;
	}
};

Node *head;

// Insert the elements in Node
void Insert(Node *first) {

}

int main() {

	// Static creation of nodes
	Node n1(10);
	Node n2(20);
	Node n3(30);
	Node n4(40);
	Node n5(50);

	n1.next = &n2;
	n2.next = &n3;
	n3.next = &n4;
	n4.next = &n5;

	Node *head = &n1;
	Node *temp = head;

	while(temp != NULL) {
		cout << temp->data << "->";
		temp = temp->next;
	}
	

	// Dynamic creation of nodes
	// Node n3 = new Node(30);
	// Node n4 = new Node(40);

	// n3->next = n4;
	
	// cout << n1.data << " : " << n2.data;

}
