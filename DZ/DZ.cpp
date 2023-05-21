#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int number;
	cout << "Enter number = ";
	cin >> number;
	if (number < 100000 || number >999999) {
		cout << "number must be 6-digit" << endl;
		return 1;
	}
	int first_three = number / 1000;
	int second_three = number % 1000;
	int sum_first_three = first_three / 100 + (first_three / 10) % 10 + first_three % 10;
	int sum_second_three = second_three / 100 + (second_three / 10) % 10 + second_three % 10;

	if (sum_first_three == sum_second_three) {
		cout << "Number is lucky!" << endl;
	}
	else
	{
		cout << "Number is not lucky!";
	}
	cout << "\n";

	int num;
	cout << "Enter number = ";
	cin >> num;
	if (num < 1000 || num > 9999) {
		cout << "number must be 4-digit" << endl;
		return 1;
	}
	int thousands = num / 1000;
	int hundreds = (num / 100) % 10;
	int tens = (num / 10) % 10;
	int units = num % 10;

	int change = units * 1000 + tens * 100 + hundreds * 10 + thousands;
	cout << "Change = " << change << endl;

	cout << "\n";
	int nums[7];
	for (int i = 0; i < 7; i++) {
		cout << "Num " << i + 1 << ": ";
		cin >> nums[i];

	}
	int max_num = *std::max_element(nums, nums + 7);
	cout << "Max = " << max_num;

	cout << "\n";
	double distanceAB, distanceBC, cargoWeight;
	double fuelConsumption = 0;
	double fuelNeeded = 0;

	cout << "Enter distance AB :";
	cin >> distanceAB;

	cout << "Enter distance BC: ";
	cin >> distanceBC;

	cout << "Enter weight: ";
	cin >> cargoWeight;

	if (cargoWeight > 2000) {
		cout << "Error" << endl;
		return 0;
	}
	else if (cargoWeight > 1500) {
		fuelConsumption = 9;
	}
	else if (cargoWeight > 1000) {
		fuelConsumption = 7;
	}
	else if (cargoWeight > 500) {
		fuelConsumption = 4;
	}
	else {
		fuelConsumption = 1;
	}

	fuelNeeded = (distanceAB + distanceBC) * fuelConsumption;

	if (fuelNeeded <= 300) {
		cout << "Required amount of fuel for refueling at point B: 0 l." << endl;
	}
	else if (fuelNeeded <= 600) {
		cout << "Required amount of fuel for refueling at point B: " << fuelNeeded - 300 << " л." << endl;
	}
	else {
		cout << "The plane will not be able to overcome this route without additional refueling!" << endl;
	}

	bool isLeapYear(int year) {
	    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
	}

	int getDaysInMonth(int month, int year) {
	    switch (month) {
		case 2:
		    return isLeapYear(year) ? 29 : 28;
		case 4:
		case 6:
		case 9:
		case 11:
		    return 30;
		default:
		    return 31;
	    }
	}

	int main() {
	    int day1, month1, year1;
	    int day2, month2, year2;

	    cout << "Enter the first date (day month year): ";
	    cin >> day1 >> month1 >> year1;

	    cout << "Enter the second date (day month year): ";
	    cin >> day2 >> month2 >> year2;

	    int days = 0;

	    if (year2 > year1 || (year2 == year1 && month2 > month1) || (year2 == year1 && month2 == month1 && day2 > day1)) {
		while (year1 < year2 || month1 < month2 || day1 < day2) {
		    days++;
		    day1++;

		    if (day1 > getDaysInMonth(month1, year1)) {
			day1 = 1;
			month1++;

			if (month1 > 12) {
			    month1 = 1;
			    year1++;
			}
		    }
		}
	    }

	    cout << "Number of days between the two dates: " << days << endl;
		    double sales1, sales2, sales3;
    double commissionRate = 0.0;
    double salary1, salary2, salary3;

    cout << "Enter sales for manager 1: ";
    cin >> sales1;
    cout << "Enter sales for manager 2: ";
    cin >> sales2;
    cout << "Enter sales for manager 3: ";
    cin >> sales3;

    // Розрахунок зарплати для кожного менеджера
    if (sales1 <= 500) {
        commissionRate = 0.03;
    } else if (sales1 <= 1000) {
        commissionRate = 0.05;
    } else {
        commissionRate = 0.08;
    }
    salary1 = 200 + (sales1 * commissionRate);

    if (sales2 <= 500) {
        commissionRate = 0.03;
    } else if (sales2 <= 1000) {
        commissionRate = 0.05;
    } else {
        commissionRate = 0.08;
    }
    salary2 = 200 + (sales2 * commissionRate);

    if (sales3 <= 500) {
        commissionRate = 0.03;
    } else if (sales3 <= 1000) {
        commissionRate = 0.05;
    } else {
        commissionRate = 0.08;
    }
    salary3 = 200 + (sales3 * commissionRate);

    double maxSalary = max(max(salary1, salary2), salary3);

    if (maxSalary == salary1) {
        salary1 += 200;
    } else if (maxSalary == salary2) {
        salary2 += 200;
    } else {
        salary3 += 200;
    }


    cout << "Salary for manager 1: $" << salary1 << endl;
    cout << "Salary for manager 2: $" << salary2 << endl;
    cout << "Salary for manager 3: $" << salary3 << endl;
	return 0;
}
