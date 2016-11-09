#include <iostream>
#include "node.h"

using namespace std;

int main() {

	Node* testNode1 = new Node();
	testNode1->data1 = 1;
	Node* testNode2 = new Node();
	testNode2->data1 = 2;
	testNode1->addNext(testNode2);
	testNode1->showNextdata(0);
	Node* testNode3 = new Node();
	testNode3->data1 = 3;
	testNode1->addNext(testNode3);

	system("pause");
	return 0;
}