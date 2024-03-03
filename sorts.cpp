#pragma once
#include "sorts.h"

void sorts::insert20(string type) {
	if (type == "inc") {
		for (int i = 0; i < 20000; i++) {
			arry20[i] = i;
		}
	}
	else if (type == "dec") {
		int count = 0;
		for (int i = 20000; i > 0; i--) {
			arry20[count] = i;
			count += 1;
		}
	}
	else if (type == "rand") {
		for (int i = 0; i < 20000; i++) {
			arry20[i] = rand();
		}
	}
	else {
		throw out_of_range("error");
	}
}
void sorts::insert10(string type) {
	if (type == "inc") {
		for (int i = 0; i < 10000; i++) {
			arry10[i] = i;
		}
	}
	else if (type == "dec") {
		int count = 0;
		for (int i = 10000; i > 0; i--) {
			arry10[count] = i;
			count += 1;
		}
	}
	else if (type == "rand") {
		for (int i = 0; i < 10000; i++) {
			arry10[i] = rand();
		}
	}
	else {
		throw out_of_range("error");
	}
}
void sorts::insert50(string type) {
	if (type == "inc") {
		for (int i = 0; i < 50000; i++) {
			arry50[i] = i;
		}
	}
	else if (type == "dec") {
		int count = 0;
		for (int i = 50000; i > 0; i--) {
			arry50[count] = i;
			count += 1;
		}
	}
	else if (type == "rand") {
		for (int i = 0; i < 50000; i++) {
			arry50[i] = rand();
		}
	}
	else {
		throw out_of_range("error");
	}
}
void sorts::insert100(string type) {
	if (type == "inc") {
		for (int i = 0; i < 100000; i++) {
			arry100[i] = i;
		}
	}
	else if (type == "dec") {
		int count = 0;
		for (int i = 100000; i > 0; i--) {
			arry100[count] = i;
			count += 1;
		}
	}
	else if (type == "rand") {
		for (int i = 0; i < 100000; i++) {
			arry100[i] = rand();
		}
	}
	else {
		throw out_of_range("error");
	}
}
void sorts::swap(int* x, int* y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}
void sorts::print(int arr[] , int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
void sorts::selectionsort(int arr[], int temp) {
	int min,i,j;
	for (i = 0; i < temp - 1; i++) {
		min = i;
		for (j = i + 1; j < temp; j++) {
			if (arr[j] < arr[min]) {
				min = j;
			}
		}
		swap(&arr[min], &arr[i]);
	}
}
void sorts::bubblesort(int arr[], int temp) {
	for (int i = 0; i < temp - 1; i++) {
		for (int j = 0; j < temp - i - 1; j++) {
			if (arr[j] > arr[j+1]) {
				swap(&arr[j], &arr[j + 1]);
			}
		}
	}
}

void sorts::shellsort(int arr[], int temp) {
	for (int gap = temp / 2; gap > 0; gap /= 2)
	{
		for (int i = gap; i < temp; i += 1)
		{
			int temp = arr[i];
			int j;
			for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
				arr[j] = arr[j - gap];
			}
			arr[j] = temp;
		}
	}
}