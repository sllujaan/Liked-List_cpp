#include "Node.h"

template<typename T>
inline Node<T>::Node()
{
	this->value = '\0';
	this->prevNode = nullptr;
	this->nextNode = nullptr;
}

template<typename T>
Node<T>::Node(T value)
{
	this->value = value;
	this->prevNode = nullptr;
	this->nextNode = nullptr;
}

template<typename T>
Node<T>::Node(const char* value)
{
	this->value = value;
	this->prevNode = nullptr;
	this->nextNode = nullptr;
}

template<typename T>
void Node<T>::setNext(Node& nextNode)
{
	this->nextNode = &nextNode;
}

template<typename T>
void Node<T>::setPrev(Node& prevNode)
{
	this->prevNode = &prevNode;
}
