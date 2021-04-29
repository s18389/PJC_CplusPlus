#include <iostream>
#include <cmath>

const double* aver(const double* arr, size_t size, double& average) {
	
	double sum = 0;
	int counter = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
		counter++;
	}
	average = sum / size;
	
	double arr2[100];
	for (int i = 0; i < size; i++) {
		arr2[i] = arr[i];
		arr2[i] -= average;
		arr2[i] = fabs(arr2[i]);
	}

	double min = arr2[0];
	int element = 0;

	for (int i = 0; i < size; i++) {
		if (arr2[i] < min) {
			min = arr2[i];
			element = i;
		}
	}

	return &arr[element];

}

int main() {
	using std::cout; using std::endl;

	double arr[] = { 1,7,5,4,3,2 };
	size_t size = sizeof(arr) / sizeof(arr[0]);

//	double experiment = -5.5;
//	cout << fabs(experiment) << endl;

	double average = 0;

	const double* p = aver(arr, size, average);

	cout << *p << " " << average << endl;
	system("pause");
}