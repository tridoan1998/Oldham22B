/*
Write a program containing the following functions, in this order:
main - calls the other functions; otherwise does almost nothing
getSize - which asks the user how many strings they want
getSpace - which gets an array in the heap of the size requested by the user
inputData - which allows the user to input the strings and stores them in the array
printData - which prints all the strings, one string per line
destroy - which returns all the space to the heap

All of these functions, except main, shall have a return type of void.

 */
#include <iostream>
#include <string>
#include "data.h"


using namespace std;

void getSize(int &size);
void getSpace(string *&array, int &size);
void inputData(string *array, int &size);
void printData(string *array, int &size);
void destroy(string *array);

//main - calls the other functions; otherwise does almost nothing
int main() {
	int size = 0;
	getSize(size);
	size++;					//increasing the size by one to fit the size of the array later create
	string * array = NULL;
	getSpace(array, size);
	inputData(array, size);
	printData(array, size);
	destroy(array);
	return 0;
}

//getSize - which asks the user how many strings they want
void getSize(int &size)
{
	cout << "how many strings you want: ";
	cin >> size;
}

//getSpace - which gets an array in the heap of the size requested by the user
//function return pointer to main
void getSpace(string *&array, int &size)
{
	array = new string[size];
	//create a pointer point to string array called array
	//array = new string[size];
}

//inputData - which allows the user to input the strings and stores them in the array
void inputData(string *array, int &size)
{
	for (int i = 0; i < size; i++)
	{
		getline(cin, array[i]);
	}
}


//printData - which prints all the strings, one string per line
void printData(string *array, int &size)
{
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << endl;
	}
}


//destroy - which returns all the space to the heap
void destroy(string *array)
{
	delete [] array;		//free up allocated memory
}


