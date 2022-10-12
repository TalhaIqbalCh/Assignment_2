#include<iostream>
#include<math.h>
using namespace std;

int main() {
	//Drunk Runner
	int N, count = 1, sq_dist;
	int x = 0, y = 0;
	char direction;

	cout << "Enter the number of steps the drunkard took: ";
	cin >> N;
	cout << "Enter the direction of the step taken (N for North / S for South / W for West / E for East): ";
	cin >> direction;

	if (direction == 'N') {
		y++;
	}
	else if (direction == 'S') {
		y--;
	}
	else if (direction == 'E') {
		x++;
	}
	else {
		x--;
	}

	cout << "(" << x << ", " << y << ")";

	while (count < N) {

		cout << "\nEnter Next Step: ";
		cin >> direction;

		if (direction == 'N') {
			y++;
		}
		else if (direction == 'S') {
			y--;
		}
		else if (direction == 'E') {
			x++;
		}
		else if (direction == 'W') {
			x--;
		}
		else {
			cout << "Invalid Input";
			break;
		}

		cout << "(" << x << ", " << y << ")";
		count++;
	}

	sq_dist = pow(x, 2) + pow(y, 2);

	cout << "\nSquared Distance: " << sq_dist;

	return 0;
}