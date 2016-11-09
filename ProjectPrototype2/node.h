#ifndef NODE_H
#define NODE_H

#include <iostream>

using namespace std;

class Node {

public:
	Node* next[3];
	Node* parent;
	int data1;

	Node();

	Node* getNext(int val1);
	void addNext(Node* next);
	void showNextdata(int val1);

	void setParent(Node* prev);
	Node* getParent();

};













#endif
