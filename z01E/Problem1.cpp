#include <iostream>
using namespace std;

int main() {
	cout << "Please enter your height (in meters): " << endl;
	double height;
	cin >> height;

	cout << endl;

	cout << "Please enter your weight (in kg): " << endl;
	double weight;
	cin >> weight;

	double BMI;
	BMI = weight / (height * height);

	cout << "Your BMI is " << BMI << endl;

	system("pause");
}