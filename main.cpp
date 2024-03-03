#include <iostream>
#include <string>
#include <ctime>
#include <chrono>
#include <vector>
#include "sorts.h"

using namespace std;
typedef chrono::high_resolution_clock Clock;

int main()
{
	sorts Sorting;
	double duration;
	vector<int> vect;

	//10,000 inc
	
	cout << "10,000 inc" << endl;
	for(int i = 0; i < 10; i++) {
		Sorting.insert10("inc");
		auto temp1 = Clock::now();
		Sorting.selectionsort(Sorting.arry10, 10000);
		auto temp2 = Clock::now();
		vect.push_back(chrono::duration_cast<chrono::microseconds>(temp2 - temp1).count());
	}
	int total = 0;
	for (int i = 0; i < vect.size(); i++) {
		total = total + vect[i];
	}
	cout << "Selection: " << total / vect.size() << endl;


	vect.clear();
	for (int i = 0; i < 10; i++) {
		Sorting.insert10("inc");
		auto temp1 = Clock::now();
		Sorting.bubblesort(Sorting.arry10, 10000);
		auto temp2 = Clock::now();
		vect.push_back(chrono::duration_cast<chrono::microseconds>(temp2 - temp1).count());
	}
	total = 0;
	for (int i = 0; i < vect.size(); i++) {
		total = total + vect[i];
	}
	cout << "Bubble: " << total / vect.size() << endl;


	vect.clear();
	for (int i = 0; i < 10; i++) {
		Sorting.insert10("inc");
		int n = sizeof(Sorting.arry10) / sizeof(Sorting.arry10[0]);
		auto temp1 = Clock::now();
		Sorting.shellsort(Sorting.arry10,n);
		auto temp2 = Clock::now();
		vect.push_back(chrono::duration_cast<chrono::microseconds>(temp2 - temp1).count());
	}
	total = 0;
	for (int i = 0; i < vect.size(); i++) {
		total = total + vect[i];
	}
	cout << "Shellsort: " << total / vect.size() << endl;
	vect.clear();



	//10,000 dec
	cout << endl << "10,000 dec" << endl;

	vect.clear();
	for (int i = 0; i < 10; i++) {
		Sorting.insert10("dec");
		auto temp1 = Clock::now();
		Sorting.selectionsort(Sorting.arry10, 10000);
		auto temp2 = Clock::now();
		vect.push_back(chrono::duration_cast<chrono::microseconds>(temp2 - temp1).count());
	}
	total = 0;
	for (int i = 0; i < vect.size(); i++) {
		total = total + vect[i];
	}
	cout << "Selection: " << total / vect.size() << endl;

	vect.clear();
	for (int i = 0; i < 10; i++) {
		Sorting.insert10("dec");
		auto temp1 = Clock::now();
		Sorting.bubblesort(Sorting.arry10, 10000);
		auto temp2 = Clock::now();
		vect.push_back(chrono::duration_cast<chrono::microseconds>(temp2 - temp1).count());
	}
	total = 0;
	for (int i = 0; i < vect.size(); i++) {
		total = total + vect[i];
	}
	cout << "Bubble: " << total / vect.size() << endl;

	vect.clear();
	for (int i = 0; i < 10; i++) {
		Sorting.insert10("dec");
		auto temp1 = Clock::now();
		Sorting.shellsort(Sorting.arry10, 10000);
		auto temp2 = Clock::now();
		vect.push_back(chrono::duration_cast<chrono::microseconds>(temp2 - temp1).count());
	}
	total = 0;
	for (int i = 0; i < vect.size(); i++) {
		total = total + vect[i];
	}
	cout << "ShellSort: " << total / vect.size() << endl;

	//10,000 rand

	cout << endl << "10,000 rand" << endl;

	vect.clear();
	for (int i = 0; i < 10; i++) {
		Sorting.insert10("rand");
		auto temp1 = Clock::now();
		Sorting.selectionsort(Sorting.arry10, 10000);
		auto temp2 = Clock::now();
		vect.push_back(chrono::duration_cast<chrono::microseconds>(temp2 - temp1).count());
	}
	total = 0;
	for (int i = 0; i < 10; i++) {
		total = total + vect[i];
	}
	cout << "Selection: " << total / 10 << endl;

	vect.clear();
	for (int i = 0; i < 10; i++) {
		Sorting.insert10("rand");
		auto temp1 = Clock::now();
		Sorting.bubblesort(Sorting.arry10, 10000);
		auto temp2 = Clock::now();
		vect.push_back(chrono::duration_cast<chrono::microseconds>(temp2 - temp1).count());
	}
	total = 0;
	for (int i = 0; i < 10; i++) {
		total = total + vect[i];
	}
	cout << "Bubble: " << total / 10 << endl;

	vect.clear();
	for (int i = 0; i < 10; i++) {
		Sorting.insert10("rand");
		auto temp1 = Clock::now();
		Sorting.shellsort(Sorting.arry10, 10000);
		auto temp2 = Clock::now();
		vect.push_back(chrono::duration_cast<chrono::microseconds>(temp2 - temp1).count());
	}
	total = 0;
	for (int i = 0; i < 10; i++) {
		total = total + vect[i];
	}
	cout << "ShellSort: " << total / 10 << endl << endl;

	//20,000 inc 
	cout << endl << "20,000 inc" << endl;

	vect.clear();
	for (int i = 0; i < 10; i++) {
		Sorting.insert20("inc");
		auto temp1 = Clock::now();
		Sorting.selectionsort(Sorting.arry20, 20000);
		auto temp2 = Clock::now();
		vect.push_back(chrono::duration_cast<chrono::microseconds>(temp2 - temp1).count());
	}
	total = 0;
	for (int i = 0; i < 10; i++) {
		total = total + vect[i];
	}
	cout << "Selection: " << total / 10 << endl;

	vect.clear();
	for (int i = 0; i < 10; i++) {
		Sorting.insert20("inc");
		auto temp1 = Clock::now();
		Sorting.bubblesort(Sorting.arry20, 20000);
		auto temp2 = Clock::now();
		vect.push_back(chrono::duration_cast<chrono::microseconds>(temp2 - temp1).count());
	}
	total = 0;
	for (int i = 0; i < 10; i++) {
		total = total + vect[i];
	}
	cout << "Bubble: " << total / 10 << endl;

	vect.clear();
	for (int i = 0; i < 10; i++) {
		Sorting.insert20("inc");
		auto temp1 = Clock::now();
		Sorting.shellsort(Sorting.arry20, 20000);
		auto temp2 = Clock::now();
		vect.push_back(chrono::duration_cast<chrono::microseconds>(temp2 - temp1).count());
	}
	total = 0;
	for (int i = 0; i < 10; i++) {
		total = total + vect[i];
	}
	cout << "ShellSort: " << total / 10 << endl << endl;

	//20,000 dec 
	cout << endl << "20,000 dec" << endl;

	vect.clear();
	for (int i = 0; i < 10; i++) {
		Sorting.insert20("dec");
		auto temp1 = Clock::now();
		Sorting.selectionsort(Sorting.arry20, 20000);
		auto temp2 = Clock::now();
		vect.push_back(chrono::duration_cast<chrono::microseconds>(temp2 - temp1).count());
	}
	total = 0;
	for (int i = 0; i < 10; i++) {
		total = total + vect[i];
	}
	cout << "Selection: " << total / 10 << endl;

	vect.clear();
	for (int i = 0; i < 10; i++) {
		Sorting.insert20("dec");
		auto temp1 = Clock::now();
		Sorting.bubblesort(Sorting.arry20, 20000);
		auto temp2 = Clock::now();
		vect.push_back(chrono::duration_cast<chrono::microseconds>(temp2 - temp1).count());
	}
	total = 0;
	for (int i = 0; i < 10; i++) {
		total = total + vect[i];
	}
	cout << "Bubble: " << total / 10 << endl;

	vect.clear();
	for (int i = 0; i < 10; i++) {
		Sorting.insert20("dec");
		auto temp1 = Clock::now();
		Sorting.shellsort(Sorting.arry20, 20000);
		auto temp2 = Clock::now();
		vect.push_back(chrono::duration_cast<chrono::microseconds>(temp2 - temp1).count());
	}
	total = 0;
	for (int i = 0; i < 10; i++) {
		total = total + vect[i];
	}
	cout << "ShellSort: " << total / 10 << endl << endl;

	//20,000 rand 
	cout << endl << "20,000 rand" << endl;

	vect.clear();
	for (int i = 0; i < 10; i++) {
		Sorting.insert20("rand");
		auto temp1 = Clock::now();
		Sorting.selectionsort(Sorting.arry20, 20000);
		auto temp2 = Clock::now();
		vect.push_back(chrono::duration_cast<chrono::microseconds>(temp2 - temp1).count());
	}
	total = 0;
	for (int i = 0; i < 10; i++) {
		total = total + vect[i];
	}
	cout << "Selection: " << total / 10 << endl;

	vect.clear();
	for (int i = 0; i < 10; i++) {
		Sorting.insert20("rand");
		auto temp1 = Clock::now();
		Sorting.bubblesort(Sorting.arry20, 20000);
		auto temp2 = Clock::now();
		vect.push_back(chrono::duration_cast<chrono::microseconds>(temp2 - temp1).count());
	}
	total = 0;
	for (int i = 0; i < 10; i++) {
		total = total + vect[i];
	}
	cout << "Bubble: " << total / 10 << endl;

	vect.clear();
	for (int i = 0; i < 10; i++) {
		Sorting.insert20("rand");
		auto temp1 = Clock::now();
		Sorting.shellsort(Sorting.arry20, 20000);
		auto temp2 = Clock::now();
		vect.push_back(chrono::duration_cast<chrono::microseconds>(temp2 - temp1).count());
	}
	total = 0;
	for (int i = 0; i < 10; i++) {
		total = total + vect[i];
	}
	cout << "ShellSort: " << total / 10 << endl << endl;

	
	//50,000 inc 
	cout << endl << "50,000 inc" << endl;

	vect.clear();
	for (int i = 0; i < 10; i++) {
		Sorting.insert50("inc");
		auto temp1 = Clock::now();
		Sorting.selectionsort(Sorting.arry50, 50000);
		auto temp2 = Clock::now();
		vect.push_back(chrono::duration_cast<chrono::microseconds>(temp2 - temp1).count());
	}
	total = 0;
	for (int i = 0; i < 10; i++) {
		total = total + vect[i];
	}
	cout << "Selection: " << total / 10 << endl;

	vect.clear();
	for (int i = 0; i < 10; i++) {
		Sorting.insert50("inc");
		auto temp1 = Clock::now();
		Sorting.bubblesort(Sorting.arry50, 50000);
		auto temp2 = Clock::now();
		vect.push_back(chrono::duration_cast<chrono::microseconds>(temp2 - temp1).count());
	}
	total = 0;
	for (int i = 0; i < 10; i++) {
		total = total + vect[i];
	}
	cout << "Bubble: " << total / 10 << endl;

	vect.clear();
	for (int i = 0; i < 10; i++) {
		Sorting.insert50("inc");
		auto temp1 = Clock::now();
		Sorting.shellsort(Sorting.arry50, 50000);
		auto temp2 = Clock::now();
		vect.push_back(chrono::duration_cast<chrono::microseconds>(temp2 - temp1).count());
	}
	total = 0;
	for (int i = 0; i < 10; i++) {
		total = total + vect[i];
	}
	cout << "ShellSort: " << total / 10 << endl << endl;

	//50,000 dec 
	cout << endl << "50,000 dec" << endl;

	vect.clear();
	for (int i = 0; i < 10; i++) {
		Sorting.insert50("dec");
		auto temp1 = Clock::now();
		Sorting.selectionsort(Sorting.arry50, 50000);
		auto temp2 = Clock::now();
		vect.push_back(chrono::duration_cast<chrono::microseconds>(temp2 - temp1).count());
	}
	total = 0;
	for (int i = 0; i < 10; i++) {
		total = total + vect[i];
	}
	cout << "Selection: " << total / 10 << endl;

	vect.clear();
	for (int i = 0; i < 10; i++) {
		Sorting.insert50("dec");
		auto temp1 = Clock::now();
		Sorting.bubblesort(Sorting.arry50, 50000);
		auto temp2 = Clock::now();
		vect.push_back(chrono::duration_cast<chrono::microseconds>(temp2 - temp1).count());
	}
	total = 0;
	for (int i = 0; i < 10; i++) {
		total = total + vect[i];
	}
	cout << "Bubble: " << total / 10 << endl;

	vect.clear();
	for (int i = 0; i < 10; i++) {
		Sorting.insert50("dec");
		auto temp1 = Clock::now();
		Sorting.shellsort(Sorting.arry50, 50000);
		auto temp2 = Clock::now();
		vect.push_back(chrono::duration_cast<chrono::microseconds>(temp2 - temp1).count());
	}
	total = 0;
	for (int i = 0; i < 10; i++) {
		total = total + vect[i];
	}
	cout << "ShellSort: " << total / 10 << endl << endl;

	//50,000 rand 
	cout << endl << "50,000 rand" << endl;

	vect.clear();
	for (int i = 0; i < 10; i++) {
		Sorting.insert50("rand");
		auto temp1 = Clock::now();
		Sorting.selectionsort(Sorting.arry50, 50000);
		auto temp2 = Clock::now();
		vect.push_back(chrono::duration_cast<chrono::microseconds>(temp2 - temp1).count());
	}
	total = 0;
	for (int i = 0; i < 10; i++) {
		total = total + vect[i];
	}
	cout << "Selection: " << total / 10 << endl;

	vect.clear();
	for (int i = 0; i < 10; i++) {
		Sorting.insert50("rand");
		auto temp1 = Clock::now();
		Sorting.bubblesort(Sorting.arry50, 50000);
		auto temp2 = Clock::now();
		vect.push_back(chrono::duration_cast<chrono::microseconds>(temp2 - temp1).count());
	}
	total = 0;
	for (int i = 0; i < 10; i++) {
		total = total + vect[i];
	}
	cout << "Bubble: " << total / 10 << endl;

	vect.clear();
	for (int i = 0; i < 10; i++) {
		Sorting.insert50("rand");
		auto temp1 = Clock::now();
		Sorting.shellsort(Sorting.arry50, 50000);
		auto temp2 = Clock::now();
		vect.push_back(chrono::duration_cast<chrono::microseconds>(temp2 - temp1).count());
	}
	total = 0;
	for (int i = 0; i < 10; i++) {
		total = total + vect[i];
	}
	cout << "ShellSort: " << total / 10 << endl << endl;

	//100,000 inc 
	cout << endl << "100,000 inc" << endl;

	vect.clear();
	for (int i = 0; i < 10; i++) {
		Sorting.insert100("inc");
		auto temp1 = Clock::now();
		Sorting.selectionsort(Sorting.arry100, 100000);
		auto temp2 = Clock::now();
		vect.push_back(chrono::duration_cast<chrono::microseconds>(temp2 - temp1).count());
	}
	total = 0;
	for (int i = 0; i < 10; i++) {
		total = total + vect[i];
	}
	cout << "Selection: " << total / 10 << endl;

	vect.clear();
	for (int i = 0; i < 10; i++) {
		Sorting.insert100("inc");
		auto temp1 = Clock::now();
		Sorting.bubblesort(Sorting.arry100, 100000);
		auto temp2 = Clock::now();
		vect.push_back(chrono::duration_cast<chrono::microseconds>(temp2 - temp1).count());
	}
	total = 0;
	for (int i = 0; i < 10; i++) {
		total = total + vect[i];
	}
	cout << "Bubble: " << total / 10 << endl;

	vect.clear();
	for (int i = 0; i < 10; i++) {
		Sorting.insert100("inc");
		auto temp1 = Clock::now();
		Sorting.shellsort(Sorting.arry100, 100000);
		auto temp2 = Clock::now();
		vect.push_back(chrono::duration_cast<chrono::microseconds>(temp2 - temp1).count());
	}
	total = 0;
	for (int i = 0; i < 10; i++) {
		total = total + vect[i];
	}
	cout << "ShellSort: " << total / 10 << endl << endl;

	//100,000 dec 
	cout << endl << "100,000 dec" << endl;

	vect.clear();
	for (int i = 0; i < 10; i++) {
		Sorting.insert100("dec");
		auto temp1 = Clock::now();
		Sorting.selectionsort(Sorting.arry100, 100000);
		auto temp2 = Clock::now();
		vect.push_back(chrono::duration_cast<chrono::microseconds>(temp2 - temp1).count());
	}
	total = 0;
	for (int i = 0; i < 10; i++) {
		total = total + vect[i];
	}
	cout << "Selection: " << total / 10 << endl;
	
	vect.clear();
	for (int i = 0; i < 10; i++) {
		Sorting.insert100("dec");
		auto temp1 = Clock::now();
		Sorting.bubblesort(Sorting.arry100, 100000);
		auto temp2 = Clock::now();
		vect.push_back(chrono::duration_cast<chrono::milliseconds>(temp2 - temp1).count());
	}
 	total = 0;
	for (int i = 0; i < 10; i++) {
		total = total + vect[i];
	}
	cout << "Bubble: " << total / 10 << endl;

	vect.clear();
	for (int i = 0; i < 10; i++) {
		Sorting.insert100("dec");
		auto temp1 = Clock::now();
		Sorting.shellsort(Sorting.arry100, 100000);
		auto temp2 = Clock::now();
		vect.push_back(chrono::duration_cast<chrono::microseconds>(temp2 - temp1).count());
	}
	total = 0;
	for (int i = 0; i < 10; i++) {
		total = total + vect[i];
	}
	cout << "ShellSort: " << total / 10 << endl << endl;

	//100,000 rand 
	cout << endl << "100,000 rand" << endl;

	vect.clear();
	for (int i = 0; i < 10; i++) {
		Sorting.insert100("rand");
		auto temp1 = Clock::now();
		Sorting.selectionsort(Sorting.arry100, 100000);
		auto temp2 = Clock::now();
		vect.push_back(chrono::duration_cast<chrono::microseconds>(temp2 - temp1).count());
	}
	total = 0;
	for (int i = 0; i < 10; i++) {
		total = total + vect[i];
	}
	cout << "Selection: " << total / 10 << endl;

	vect.clear();
	for (int i = 0; i < 10; i++) {
		Sorting.insert100("rand");
		auto temp1 = Clock::now();
		Sorting.bubblesort(Sorting.arry100, 100000);
		auto temp2 = Clock::now();
		vect.push_back(chrono::duration_cast<chrono::microseconds>(temp2 - temp1).count());
	}
	total = 0;
	for (int i = 0; i < 10; i++) {
		total = total + vect[i];
	}
	cout << "Bubble: " << total / 10 << endl;

	vect.clear();
	for (int i = 0; i < 10; i++) {
		Sorting.insert100("rand");
		auto temp1 = Clock::now();
		Sorting.shellsort(Sorting.arry100, 100000);
		auto temp2 = Clock::now();
		vect.push_back(chrono::duration_cast<chrono::microseconds>(temp2 - temp1).count());
	}
	total = 0;
	for (int i = 0; i < 10; i++) {
		total = total + vect[i];
	}
	cout << "ShellSort: " << total / 10 << endl << endl;
	return 0;
}
