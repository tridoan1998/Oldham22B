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

int getSize();
string * getSpace(int size);
void inputData(string *array, int size);
void printData(string *array, int size);
void destroy(string *array);

//main - calls the other functions; otherwise does almost nothing
int main() {
	int size = getSize();
	size++;
	string * array = getSpace(size);
	inputData(array, size);
	//cout << array[0];
	for (int i =  0; i < size; i++)
		cout << array[i] << endl;
	//printData(array, size);
	//destroy(array);
	return 0;
}

//getSize - which asks the user how many strings they want
int getSize()
{
	int size = 0;
	cout << "how many strings you want: ";
	cin >> size;
	return size;
}

//getSpace - which gets an array in the heap of the size requested by the user
//function return pointer to main
string * getSpace(int size)
{
	//create a pointer point to string array called array
	string *array = new string[size];
	return array;
}

//inputData - which allows the user to input the strings and stores them in the array
void inputData(string *array, int size)
{
	for (int i =  0; i < size; i++)
	{
		getline(cin, array[i]);
	}
}


//printData - which prints all the strings, one string per line
void printData(string *array, int size)
{
	for (int i =  0; i < size; i++)
	cout << array[i] << endl;
}


//destroy - which returns all the space to the heap
void destroy(string *array)
{
	delete [] array;		//free up allocated memory
}


