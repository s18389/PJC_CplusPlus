#include <algorithm>  // min
#include <iostream>
#include <fstream>
using namespace std;

int main() {
	constexpr size_t N = 5;
	int greatest[N];
	ifstream inpfile("NGreatest.txt");

	size_t count{};  // how many numbers have been read

	int n{};         // 'n' will hold the number just read

	size_t ile{};    // number of elements inserted into
					 // the array 'greatest'

	// maybe some auxiliary variables, but no
	// arrays or other kinds of collections!
	// ...

	while (inpfile >> n) {
		++count;
		cout << n << endl;
		// ... insert your code here
	}

	// numData - number of valid elements in
	// 'greatest',  may be smaller than N
	size_t numData = min(ile, N);
	cout << count << " numbers read. Greatest "
		<< numData << " different are: ";
	for (size_t i = 0; i < numData; ++i)
		cout << greatest[i] << " ";
	cout << "\n";
	system("pause");
}