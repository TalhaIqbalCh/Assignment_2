#include <iostream>
#include <math.h>

using namespace std;

int main() {
	//Population
	double pop_A, pop_B, growth_rate_A, growth_rate_B, yrs = 0;

	cout << "Enter the population of Town A\t";
	cin >> pop_A;
	cout << "Enter the % growth rate of Town A\t";
	cin >> growth_rate_A;
	cout << "Enter the population of Town B\t";
	cin >> pop_B;
	cout << "Enter the % growth rate of Town B\t";
	cin >> growth_rate_B;

	if (pop_A > 0 && pop_B && growth_rate_A > 0 && growth_rate_B > 0) {
		while (pop_A < pop_B) {
			pop_A = ((growth_rate_A / 100) * pop_A) + pop_A;
			pop_B = ((growth_rate_B / 100) * pop_B) + pop_B;
			yrs++;
		}
		cout << "\nIt would take " << yrs << " years for population of Town A be equal or greater than Town B\n\n";
		cout << "Town A Population after " << yrs << " years is " << int(pop_A) << "\nTown B Population after " << yrs << " years is " << int(pop_B) << " \n";
	}
	else {
		cout << "invalid Input";
	}



	return 0;
}
