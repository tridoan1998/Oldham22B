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
void getSpace(int size);



//main - calls the other functions; otherwise does almost nothing
int main() {

	int size = getSize();
	getSpace(size);
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
void getSpace(int size)
{
	int array[size];
}

//inputData - which allows the user to input the strings and stores them in the array

