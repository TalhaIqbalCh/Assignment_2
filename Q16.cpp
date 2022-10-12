#include <iostream>
#include <math.h>
#define S 0
using namespace std;

int main() {
	//Series
	int count = 0, first_term = 0, N, p1 = 0, p2 = 1, next_pow = 0;
	double series = 0;

	cout << "Enter number of terms \t";
	cin >> N;
	
	if (N >= 1) {
		while (count < N) {
			if (count == 0) {
				first_term = pow(1, S + 1);
			}
			if (count % 2 != 0) {
				next_pow = p1 + p2;
				p1 = p2;
				p2 = next_pow;

				series = series + pow(2, S + next_pow);
			}
			else if (count % 2 == 0 && count != 0) {
				next_pow = p1 + p2;
				p1 = p2;
				p2 = next_pow;

				series = series + pow(3, S + next_pow);
			}
			count++;
		}
		cout << first_term + series;
	}

	return 0;
}