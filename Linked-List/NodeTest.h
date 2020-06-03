#pragma once
#include"Node.cpp"

void NodeTest() {
	STR_NODE node0 = "Jake";
	STR_NODE node = "mike";
	STR_NODE node2 = "Johnson";

	node.setNext(node2);
	node.setPrev(node0);

	cout << node.prevNode->value << endl;
	cout << node.value << endl;
	cout << (node.nextNode->value) << endl;
}