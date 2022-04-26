#ifndef HEADER_H
#define HEADER_H
#include <ctime>
#include <iostream>
void (*Case(int *arr , int size))(int* arr, int size);
int Sum(int *arr, int size);
void Sort_decreasing(int* arr, int size);
void Sort_increasing(int* arr, int size);
void Invert(int* arr, int size);
#endif