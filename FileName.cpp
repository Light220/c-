#include<iostream>
#include <iomanip>
#include<cmath>
using namespace std;
int main() {
	double pi_4=0, PI;
	int steps=0,a=1,sign=1;
	while (true) {
		double b = sign * 1.0 / a;
		pi_4 += b;
		steps++;
		if (fabs(b) < 1e-8) {
			break;
		}
		a += 2;
		sign = -sign;
	}
	PI = pi_4 * 4;
	cout << "steps=" << steps << " PI=" << fixed << setprecision(5) << PI << endl;
	return 0;

}