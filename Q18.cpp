#include <iostream>
#include <math.h>

using namespace std;

int main() {
	//Average Rainfall
	int yrs = 0, month = 0,inch_rainfall_per_month = 0, count = 0, yrs_count = 0, month_count = 1, total_inch_per_Rainfall = 0;

	cout << "Enter the number of years\t";
	cin >> yrs;

	if (yrs >= 1) {

		while (yrs_count < yrs) {
			month_count = 1;

			while (month_count <= 12) {
				cout << "Enter the number of inches of rainfall for month " << month_count << " \t";
				cin >> inch_rainfall_per_month;

				if (inch_rainfall_per_month > 0) {
					total_inch_per_Rainfall = total_inch_per_Rainfall + inch_rainfall_per_month;
				}

				month_count++;
			}
			yrs_count++;
		}
	}
	else {
		cout << "Invalid Input";
	}
	
	float avg_rainfall = total_inch_per_Rainfall / (yrs * 12);

	cout << "\n\nThe total number of months = " << yrs * 12 << endl;
	cout << "The total inches of rainfall = " << total_inch_per_Rainfall << endl;
	cout << "The average rainfall per month for the entire period = " << float(avg_rainfall) << endl;

	return 0;
}
