#include <iostream>
using namespace std;

int arr[20]; //Array to be searched
int n; //Number of elements the array
int i; //index of array element 

void input() {
	while (true) {
		cout << "Enter the number of elements in the array: ";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
		else
			cout << "\nArray should have minimum 1 maximum 20 element.\n\n";
	}
	//Accept array element
	cout << "\n ----------------------\n";
	cout << " Enter array elements \n";
	cout << "----------------------\n";
	}
