// Input a group code and display the corresponding group name based on the
// following:
// 5, 7 – Science (Computer Science)
// 33, 34 – Humanities (Computer Applications)
// 39 – Commerce (Computer Applications)
// Other codes – Non Computer groups

#include <iostream>

using namespace std;

int main() {
	int code;

	cout << "Enter Group Code : ";
	cin >> code;

	switch(code) {
		case 5:
		case 7:
			cout << "Science (Computer Science)";
			break;
		case 33:
		case 34:
			cout << "Humanities (Computer Applications)";
			break;
		case 39:
			cout << "Commerce (Computer Applications)";
			break;
		default:
			cout << "Non Computer groups";
	}
}

