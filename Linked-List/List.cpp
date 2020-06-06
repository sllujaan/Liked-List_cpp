#include"List.h"
#include<iostream>
using namespace std;


template<typename T, typename U>
void List<T, U>::initValues(U parm)
{
	Node<U>* node = new Node<U>(1);
	node->value = parm;

	this->rearNode = node;

	this->currentNode = this->rearNode;
	this->prevNode = this->rearNode;
	this->nextNode = this->rearNode;
	this->rearNode = this->rearNode;
	this->frontNode = this->rearNode;

	cout << "allocated memory address = " << node << endl;

	this->length = 0;
	this->length++;
	
}

template<typename T, typename U>
List<T, U>::List(U parm)
{
	this->initValues(parm);
}

template<typename T, typename U>
List<T, U>::~List()
{
	cout << "destructor called." << endl;
	this->initDeleteAll();
}

template<typename T, typename U>
template<size_t size>
inline List<T, U>::List(U (&arr)[size])
{
	cout << "size = " << size << endl;

	this->initValues(arr[0]);
	
	for (size_t i = 1; i < size; i++)
	{
		this->add(arr[i]);
	}
	
}

template<typename T, typename U>
template<size_t size>
void List<T, U>::add(U (&arr)[size])
{
	for (size_t i = 0; i < size; i++)
	{
		this->add(arr[i]);
	}
}


template<typename T, typename U>
void List<T, U>::add(U parm)
{	
	Node<U>* newNode = new Node<U>(1);
	newNode->value = parm;

	this->prevNode = this->currentNode;
	this->currentNode = newNode;
	this->prevNode->nextNode = this->currentNode;
	this->currentNode->prevNode = this->prevNode;
	this->nextNode = this->currentNode;
	this->frontNode = this->currentNode;

	this->length++;

	cout << "allocated memory address = " << newNode << endl;
}

template<typename T, typename U>
U List<T, U>::remove(size_t index)
{
	if ((index > 0) && (index <= this->length)) {
		return U;
	}
	return U;
}

template<typename T, typename U>
U List<T, U>::removeCurrent()
{

		
		T* nodeToDelete = this->currentNode;
		U value = nodeToDelete->value;

		this->prevNode->nextNode = this->nextNode;
		if (this->nextNode) {
			this->nextNode->prevNode = this->prevNode;
			this->currentNode = this->nextNode;
		}
		else {
			this->currentNode = this->prevNode;
			cout << "deleting memory...>>>" << nodeToDelete << endl;
			delete[] nodeToDelete;
		}
		
		--this->length;
		return value;
}

template<typename T, typename U>
void List<T, U>::removeAll()
{
	cout << "removeAll called." << endl;
	this->initDeleteAll();
}

template<typename T, typename U>
void List<T, U>::initDeleteAll()
{

	this->currentNode = this->rearNode;

	for (size_t i = 0; i < this->length; i++)
	{
		T* nodeToDelete = this->currentNode;
		if (this->currentNode->nextNode) { this->currentNode = this->currentNode->nextNode; }

		cout << "deleting memory..." << nodeToDelete << endl;
		delete[] nodeToDelete;

	}
	this->length = 0;
}

