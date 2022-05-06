#include <iostream>
#include <math.h>

using namespace std;

double y(double a, double x) {
	if (a <= x) {
		return a + log(x + a);
	}
	if (a > x) {
		return sqrt(sin(a * x));
	}
}

double t(double a, double y, double x) {
	if (a > y) {
		return y / (a - x);
	}
	if (a = y) {
		return y / (a - x) + (a + x) / (y * y);
	}
	if (a < y) {
		return tan(a * x) + cos(2 * a * y);
	}
}

int main() {
	double a = 3.5;
	double x = -0.7;
	cout << "a = " << a << endl;
	cout << "x = " << x << endl;
	if ((sin(a * x) >= 0) && ((x + a) > 0)) {
		double y1 = y(a, x);
		cout << "y = " << y1 << endl;
		if (x != a && y1 != 0) {
			cout << "t = " << t(a, y1, x) << endl;
		}
		else cout << "Error" << endl;
	}
	else cout << "Error" << endl;
}