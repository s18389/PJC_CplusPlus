#include <iostream>
using namespace std;

int main() {

	int n1, n2, n3, max, max2;

	cout << "Enter three numbers: ";
	cin >> n1;
	max = n1;

	cin >> n2;
	if (n2 >= max) {
		max = n2;
		max2 = n1;
	}

	cin >> n3;
	if (n3 >= max) {
		max = n3;
		if (n1 >= n2) max2 = n1;
		if (n2 >= n1) max2 = n2;
	}

	cout << "Max is: " << max << endl;
	cout << "2Max is: " << max2 << endl;



	system("pause");
	return 0;
}