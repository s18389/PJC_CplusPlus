#include <iostream>
#include <cmath>

const double* aver(const double* arr,
	size_t size, double& average) {
	double sum = 0;
	const double* element;
	element = &arr[3];
	for (int i = 0; i < size; i++) {
		sum = sum + arr[i];
	}
	average = sum / size;

	return element;

}

int main() {
	using std::cout; using std::endl;

	double arr[] = { 1,7,5,4,3,2 };
	size_t size = sizeof(arr) / sizeof(arr[0]);
	double average = 0;
	const double* p = aver(arr, size, average);
	cout << *p << " " << average << endl;
	system("pause");
}
