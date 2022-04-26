#include "Header.h"
#include <iostream>


using namespace std;
int Sum(int *arr , int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum = sum + arr[i];
	}
	return sum;
}
void Sort_decreasing(int* arr, int size)
{
	int t = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (arr[i] > arr[j])
			{
				t = arr[i];
				arr[i] = arr[j];
				arr[j] = t;
			}
		}
	}
	for (int k = 0; k < size; k++)
	{
		cout << arr[k] << "|";
	}
}

void Sort_increasing(int* arr, int size)
{
	int t = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (arr[i] < arr[j])
			{
				t = arr[i];
				arr[i] = arr[j];
				arr[j] = t;
			}
		}
	}
	for (int k = 0; k < size; k++)
	{
		cout << arr[k] << "|";
	}
}
void Invert(int* arr, int size)
{
	for (int i = 0, j = size - 1; i < j; i++, j--)
	{
		int t = arr[i];
		arr[i] = arr[j];
		arr[j] = t;
	}
	for (int k = 0; k < size; k++)
	{
		cout << arr[k] << "|";
	}
}
void (*Case(int *arr , int size))(int *arr, int size )  
{
	if (Sum(arr,size) == arr[0])
	{
		return Invert;
	}
	if (Sum(arr, size) > arr[0])
	{
		return Sort_increasing;
	}
	if (Sum(arr, size) < arr [0])
	{
		return Sort_decreasing;
	}
}