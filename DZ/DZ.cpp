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
	return 0;
}
