#include<iostream>
using namespace std;
#include"List.cpp"
//#include"Node.cpp"

int main(int argc, char* argv[]) {


	
	int arr[] = { 1, 2, 3, 4, 5 };
	int arr2[] = { 7, 8, 9, 10 };
	INT_LIST list = arr;
	list.add(6);
	list.add(arr2);
	
	cout << "length = " << list.length << endl;
	cout << list.rearNode->value << endl;
	cout << list.frontNode->value << endl;

	cout << list << endl;
	
	
	/*
	list.add(2);
	list.add(3);
	list.add(4);
	list.add(5);


	cout << list.rearNode << endl;
	cout << list.prevNode << endl;
	cout << list.currentNode << endl;
	cout << list.nextNode << endl;
	cout << list.frontNode << endl;
	cout << endl;

	cout << list.rearNode->value << endl;
	cout << list.prevNode->value << endl;
	cout << list.currentNode->value << endl;
	cout << list.nextNode->value << endl;
	cout << list.frontNode->value << endl;


	cout << endl;

	
	cout << list.rearNode->nextNode->value << endl;
	cout << list.prevNode->nextNode->value << endl;
	cout << list.currentNode->prevNode->value << endl;


	*/
}



/*

	INT_NODE node = 1;
	INT_NODE* ptrNode = &node;

	cout << &node << endl;
	cout << ptrNode << endl;


	INT_NODE node = 1;
	INT_NODE* ptrNode = &node;

	cout << &node << endl;
	cout << ptrNode << endl;
	cout << &ptrNode << endl;
	cout << endl;

	INT_NODE & curr = node;
	cout << &curr << endl;
	INT_NODE && next = 10;




	*/