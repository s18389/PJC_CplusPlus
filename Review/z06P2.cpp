#include <iostream>
#include <string>

template<typename T>
T getMaxRecur(const T* arr, size_t size) {
	T max = arr[0];
	for (int i = 0; i < size; i++) {
		if (arr[i] >= max) max = arr[i];
	}
	return max;
}

int main() {
	using std::cout; using std::endl; using std::string;

	double ad[]{ 2.5, 9.1, 4.5, -1.0 };
	cout << "ad: " << getMaxRecur(ad, 4) << "; ";

	int    ai[]{ 2, 11, 5, 1, 9 };
	cout << "ai: " << getMaxRecur(ai, 5) << "; ";

	string as[]{ "Ala", "Ela", "Ula", "Ola" };
	cout << "as: " << getMaxRecur(as, 4) << endl;
	system("pause");
}
