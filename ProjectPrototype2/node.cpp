#include "node.h"

Node::Node() {

	for (int i = 0; i < 3; i++) {
		next[i] = NULL;
	}

	int data1 = NULL;
	Node* parent = NULL;

}

Node* Node::getNext(int val1) {

	if (this->next[val1]) {
		return this->next[val1];
	}
	else {
		cout << "No next found" << endl;
		return NULL;
	}

}

void Node::addNext(Node* next) {


	for (int i = 0; i < 3; i++) {

		if (this->next[i] == NULL) {
			next->setParent(this);
			this->next[i] = next;
			cout << "Successfully put Next in slot " << i << endl;
			cout << "With data of " << this->next[i]->data1 << endl;
			break;
		}
		else {
			cout << "Failed to put Next in slot " << i << endl;
		}

	}



}
void Node::showNextdata(int val1) {

	for (int i = 0; i < 3; i++) {

		if (this->next[val1] != NULL) {
			cout << "The value in this node is : " << this->next[val1]->data1 << endl;
			break;
		}
		else {
			cout << "Failed to get data" << endl;
			break;
		}

	}

}
	
void Node::setParent(Node* prev) {

	this->parent = prev;

}

Node* Node::getParent() {

	return this->parent;


}
