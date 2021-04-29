/*
Write a program which asks the user, in a loop, to enter a positive integer until the
user enters 0. Then the program prints one number from those which have been read
in — the one for which the sum of digits is the largest (and this sum of digits).
The program communicates with the user in a language (e.g., Polish or English) which
depends on a preprocessor macro defined. For example, if a macro POL is defined,
the language is Polish, if ENG is defined, it should be English. If neither or both of
them are defined, the compilation should fail.
Example of a run of the program:
enter a natural number (0 if done): 23
enter a natural number (0 if done): 59
enter a natural number (0 if done): 78
enter a natural number (0 if done): 91
enter a natural number (0 if done): 0
Max sum of digits was 15 for 78
Note: Do not use arrays, strings and any other kind of collection.
*/

#include <iostream>

using namespace std;

int main() {

	int num, val, sum = 0, max, hold;
	bool is_zero = false;
	max = 0;

	while(is_zero == false) {
		cout << "enter a natural number(0 if done): ";
		
		cin >> val;
		num = val;

		while (num != 0)
		{
			sum = sum + num % 10;
			num = num / 10;
		}
		if (sum >= max) {
			max = sum;
			hold = val;
		}
		sum = 0;

		if (val == 0) is_zero = true;
	}

	cout << "Max sum of digits was " << max << " for " << hold << endl;

	system("pause");
	return 0;
}