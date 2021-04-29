#include <iostream>
using namespace std;
struct Node {
	int   data;
	Node* next;
};

bool add(Node*& head, int data) {
	bool is_not_here = true;
	Node* temp;
	temp = head;
	while (temp != nullptr) {
		if (temp->data == data) {
			is_not_here = false;
			break;
		}
		temp = temp->next;
	}
	if (is_not_here == false) return false;
	if (is_not_here == true) {
		head = new Node{ data, head };
		return true;
	}
};
size_t size(const Node* head) {
	const Node* temp;
	temp = head;
	int size = 0;
	while (temp != nullptr) {
		size++;
		temp = temp->next;
	}
	return size;
};


void clear(Node*& head) {
	while (head != nullptr) {
		Node* temp;
		temp = head;
		cout << "DEL: " << temp->data << " ";
		temp = head->next;
		delete head;
		head = temp;

	}
};



void printList(Node* head) {
	Node* temp;
	temp = head;
	while (temp != nullptr) {
		cout << temp->data << " ";
		temp = temp->next;
	}
};

int main() {
	using std::cout; using std::endl;
	int tab[] = { 1,4,1,3,5 };
	Node* head = 0;
	for (size_t i = 0, e = std::size(tab); i != e; ++i) {
		bool b = add(head, tab[i]);
		cout << tab[i] << (b ? "     " : " NOT ")
			<< "added" << endl;
	}
	cout << "Size of the list: " << size(head) << endl;
	printList(head);
	clear(head);
	system("pause");
}
