#include <array>
#include <string>
#include <iostream>
#include <stdio.h> 
#include <stdlib.h>
#pragma once
using namespace std;

class sorts {
public: 
	int arry10[10000];
	int arry20[20000];
	int arry50[50000];
	int arry100[100000];
	void print(int arr[],int);
	void insert10(string);
	void insert20(string);
	void insert50(string);
	void insert100(string);
	void selectionsort(int array[],int);
	void bubblesort(int array[],int);
	void shellsort(int array[], int);
	
	void swap(int*, int*);
};
