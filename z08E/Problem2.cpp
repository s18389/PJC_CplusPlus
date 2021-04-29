#include <iostream>
struct Node {
	int   data;
	Node* next;
};

bool add(Node*& head, int data) {
	Node *temp = head;
	while (temp != nullptr)
	{
		if (data == temp->data) return false;
		temp = temp->next;
	}
	head = new Node{ data, head };
	return true;
}

size_t size(const Node* head) {
	int counter = 0;
	while (head != nullptr) {
		counter++;
	}
	return counter;
}

void clear(Node*& head) {
	while (head != nullptr) {
		Node *temp = head;
		std::cout << " DEL: " << head->data;
		temp = head->next;
		delete head;
		head = temp;
	}
}

void printList(Node* head) {
	Node *temp = head;
	while (temp != nullptr)
	{
		std::cout << temp->data << "  ";
		temp = temp->next;
	}
}

int main() {
	using std::cout; using std::endl;
	int tab[] = { 1,4,1,3,5 };
	Node* head = 0;
	for (size_t i = 0, e = std::size(tab); i != e; ++i) {
		bool b = add(head, tab[i]);
		cout << tab[i] << (b ? "     " : " NOT ")
			<< "added" << endl;
	}
//	cout << "Size of the list: " << size(head) << endl;
	printList(head);
	cout << endl;
	clear(head);
	cout << endl;
	system("pause");
}