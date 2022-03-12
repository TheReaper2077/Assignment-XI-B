// Program to read admission number of N students in a class and search for a given admission number in the list. Use linear search of searching.

#include <iostream>

using namespace std;

int main() {
	int array[100], n, check, present = 0;

	cout << "Enter Number of Students : ";
	cin >> n;

	cout << "Enter Admission Numbers for Array\n";
	for (int i = 0; i < n; i++) {
		cin >> array[i];
	}

	// read Admission numbers
	cout << "Addmission Numbers of Students are\n";
	for (int i = 0; i < n; i++) {
		cout << array[i] << '\n';
	}

	cout << "Enter Addmission Number to Check\n";
	cin >> check;

	// search Admission numbers
	for (int i = 0; i < n; i++) {
		if (array[i] == check) {
			present = 1;
			break;
		}
	}

	if (present) cout << "Addmision Number is Present";
	else cout << "Addmision Number is Not Present";
}

