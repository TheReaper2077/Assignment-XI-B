// Check whether an entered number is Armstrong or not

#include <iostream>

using namespace std;

int is_armstrong(int num) {
	int sum = 0, tmp = num;

	while (tmp) {
		int d = tmp % 10;
		sum += d*d*d;
		tmp /= 10;
	}

	if (sum == num) return 1;
	return 0;
}

int main() {
	int num;
	cout << "Enter Number : ";
	cin >> num;
	
	if (is_armstrong(num)) cout << num << " is a Armstring number\n";
	else cout << num << " is not a Armstring number\n";
}

