// To find the length of a string without using strlen() function.

#include <iostream>

using namespace std;

int main(int, char**) {
	char str[20];
	int len = 0;

	cin >> str;

	for (int i = 0; str[i] != '\0'; i++) {
		len++;
	}

	cout << len;
}
