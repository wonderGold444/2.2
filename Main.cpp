#include <iostream>
#include "Header.h"
using namespace std;
int main ()
{
	void(*action)(int* arr, int size);
	const int size = 10;
	int arr[size];
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		arr[i] = 5 - (rand() % 10);
		cout << arr[i] << '|';
	}
	cout << "\n";
	action = Case(arr, size);
	action(arr, size);

}