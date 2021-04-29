#include <iostream>
#include <string>

template<typename T>
T getMaxIndex(T arr, int size) {
	T max = arr[0];
	for (int i = 0; i < size; i++) { 
		if (arr[i] > max) max = arr[i];
	}
	return max;
}

int main() {
	using std::cout; using std::endl; using std::string;

	double ad[]{ 2.5, 9.1, 4.5, -1.0 };
	for (int i = 0; i < 4; i++) { cout << ad[i] << " | "; }
	cout << endl;
	cout << "For this arr max is: " << getMaxIndex(ad, 4) << endl;
	cout << endl;
	cout << endl;

	int    ai[]{ 2, 11, 5, 1, 9 };
	for (int i = 0; i < 4; i++) { cout << ai[i]; }

	cout << endl;
	cout << endl;

	system("pause");
}
