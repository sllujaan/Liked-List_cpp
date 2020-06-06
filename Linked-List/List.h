#pragma once
#include"Node.cpp"
#include<iostream>
using namespace std;

template<typename T, typename U>
class List {
private:
	void initValues(U parm);
public:
	T* currentNode;
	T* prevNode;
	T* nextNode;
	T* rearNode;
	T* frontNode;
	size_t length;

	List(U parm);

	~List();

	template<size_t size>
	List(U (&arr)[size]);

	void add(U parm);
	U remove(size_t index);
	U removeCurrent();
	void removeAll();
	void initDeleteAll();


	template<size_t size>
	void add(U(&arr)[size]);

	//T& remove(size_t index);
	//T& search(T parm);

	template<typename T, typename U>
	friend ostream& operator << (ostream& os, const List<T, U>& list);

};



typedef List<INT_NODE, int> INT_LIST;

template<typename T, typename U>
inline ostream& operator<<(ostream& os, const List<T, U>& list)
{


	T* tempNode = list.rearNode;

	os << "{";

	for (size_t i = 0; i < list.length; i++)
	{
		os << tempNode->value;
		if(i != list.length-1) os<< ", ";
		if (tempNode->nextNode) { tempNode = tempNode->nextNode; }
	}
	os << "}";
	return os;
	// TODO: insert return statement here
}
