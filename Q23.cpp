// check whether an entered string is palindrome or not

#include <iostream>

using namespace std;

int main() {
	char str[30];

	cout << "Enter String: ";
	cin >> str;

	int len;
	for (len = 0; str[len] != '\0'; len++);

	int palindrome = 1;
	for (int i = 0; i != len; i++) {
		if (str[i] != str[len - i - 1]) {
			palindrome = 0;
		}
	}

	if (palindrome) cout << str << " Is a palindrome";
	else cout << str << " Is not a palindrome";
}
