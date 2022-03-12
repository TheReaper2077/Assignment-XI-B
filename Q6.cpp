// To input the three coefficients of a quadratic equation and find the roots.

#include <iostream>
#include <cmath>

using namespace std;

int main(int, char**) {
	double a, b, c, res1 = 0, res2 = 0, real = 0, imaginary = 0;
	cin >> a >> b >> c;

	double discriminant = b*b - 4*a*c;

	if (discriminant == 0) {
		res1 = -b / 2*a;

		cout << res1;
	} else if (discriminant > 0) {
		res1 = (-b + sqrt(discriminant)) / 2*a;
		res2 = (-b - sqrt(discriminant)) / 2*a;

		cout << res1 << ", " << res2;
	} else {
		real = -b / 2*a;
		imaginary = sqrt(-discriminant)/2*a;

		cout << real << " +- " << imaginary << "i";
	}
}
