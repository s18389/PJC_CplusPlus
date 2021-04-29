#include <iostream>
#include <string>
using namespace std;

template <typename T>

int max(T* arr, int size) {
	int max = arr[0];
	int arrmax = 0;

	for (int i = 0; i < size; i++) {
		if (arr[i] > max) {
			arrmax = i;
			max = arr[i];
		}
		cout << arr[i] << endl;
	}

	cout << "max " << max << endl;

	return arrmax;
}



int main() {
	int ai[]{ 2, 11, 5, 1, 9 };
	
	cout << "ai: " << max(ai, 5) << "; ";

	system("pause");
}