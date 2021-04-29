#include <iostream>
#include <ctime>     // time
#include <utility>   // std::swap may be useful
using namespace std;

template <typename T, typename FUN>
size_t part(T* arr, size_t size, FUN f) {
	int counter = 0;
	for (int i = 0; i < size; i++) {
		if (f(arr[i])) {
			swap(arr[i], arr[counter++]);
		}
	}
	return counter;
}

template <typename T>
void printTab(const T* t, size_t size) {
	cout << "[ ";
	for (int i = 0; i < size; i++) cout << t[i] << " ";
	cout << "]";
}

bool isEven(int e) { 
	return e % 2 == 0; 
}


int main() {
	size_t ind = 0;

	int a1[] = {1,2,3,4,5,6};
	ind = part(a1, 6, isEven);
	cout << "ind = " << ind << " ";
	printTab(a1, 6);

	cout << endl;
	
	int a2[] = { 1,2,3,4,5,6 };
	// lambda as argument: a predicate checking
	// if the given number is odd
	ind = part(a2, size(a2), [](int x) -> bool {
		return x % 2 != 0;
	});
	cout << "ind = " << ind << " ";
	printTab(a2, size(a2));

	
	string a3[] = { "Ala", "Ula", "Ela", "Ola", "Maja" };
	string mn = "Bea";
	string mx = "Sue";
	// lambda as argument: a predicate checking
	// if the given name is in the range [mn,mx]
	ind = part(a3, size(a3), [=](string x) -> bool {
		if (x > mn && x < mx) return true;
		return false;
	});
	cout << "ind = " << ind << " ";
	printTab(a3, size(a3));

	/*
	constexpr size_t DIM = 500000;
	int* a4 = new int[DIM];
	srand(unsigned(time(0)));
	for (size_t i = 0; i < DIM; ++i) a4[i] = rand() % 21 + 1;
	// lambda as argument: a predicate checking
	// if the given number is divisible by 7
	ind = part(a4, DIM, /* ... );
	cout << "ind = " << ind << std::endl;
	delete[] a4;
	
	*/
	system("pause");
}