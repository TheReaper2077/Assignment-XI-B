// Find area of a rectangle,triangle and a circle. Use switch statement for selecting an option from a menu.

#include <iostream>

using namespace std;

const double PI = 3.141592654;

int main() {
	int option;
	float radius, height, length, area;

	cout << "0 - Rectangle\n";
	cout << "1 - Triangle\n";
	cout << "2 - Circle\n";

	cin >> option;

	switch (option) { 
		case 0:
			cout << "Enter Breadth : ";
			cin >> height;
			cout << "Enter Length : ";
			cin >> length;

			area = height * length;
			break;

		case 1:
			cout << "Enter Height : ";
			cin >> height;
			cout << "Enter Length : ";
			cin >> length;

			area = (height * length)/2.0;
			break;

		case 2:
			cout << "Enter Radius : ";
			cin >> radius;

			area = 2*PI*radius*radius;
			break;
	}

	cout << "Area = " << area;
}
