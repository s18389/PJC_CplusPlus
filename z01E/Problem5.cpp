#include <iostream>
#include <random>
#include <string>
#include <stdlib.h> 
#include <ctime> 

using namespace std;

int main() {

	int min = 1;
	int max = 1000000;
	string sby;
	int  n;
	srand((int)time(0));

	for (int i = 1;; i++) {
				//	cout<< min << " to " << max << endl;

		if (i == 21) {
			cout << "Unfortunetly we don't guess you number after 20 questuions.. or you were cheating! :/";
			break;
		}
		n = rand() % ((max-min)+1) + min;

		cout << "Is this " << n << " ?" << endl;

		cin >> sby;

		if (sby == "y") {
			cout << "Number that you think of is ... " << n << " !! :D" << endl;
			cout << "Number of trials: " << i << endl;
			break;
		}

		if (sby == "s") {
			//	cout << "We need smaller!" << endl;;
			max = n - 1;
		}
		if (sby == "b") {
			//	cout<< "We need bigger!" << endl;
			min = n + 1;
		}


	}
		system("pause");
}