#pragma once
#include<string>

template<typename T>
class Node {
public:
	T value;
	Node* prevNode;
	Node* nextNode;

	Node();
	Node(T value);
	Node(const char* value);
	void setNext(Node& nextNode);
	void setPrev(Node& nextNode);
};



typedef Node<int> INT_NODE;
typedef Node<double> DOUBLE_NODE;
typedef Node<std::string> STR_NODE;