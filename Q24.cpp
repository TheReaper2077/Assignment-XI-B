// display vowels in entered string

#include <iostream>

using namespace std;

int main() {
	char str[30];

	cout << "Enter String: ";
	cin >> str;

	for (int i = 0; str[i] != '\0'; i++) {
		switch(str[i]) {
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			cout << str[i];
		}
	}
}
