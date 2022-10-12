#include <iostream>
#include <math.h>

using namespace std;

int main() {
	Prime Factors
	int num, count = 2;

	cout << "Enter a number\t";
	cin >> num;

	if (num > 0) {
		cout << "\nPrime Factors of " << num << endl;

		while (num != 1) {
			while (count <= num) {
				if (num % count == 0) {
					cout << count << "  ";
					num /= count;
					break;
				}
				count++;
			}
		}
	}
	else {
		cout << "Invalid Input";
	}
	return 0;
}