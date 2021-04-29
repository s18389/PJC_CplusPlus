#include <iostream>
using namespace std;
// Methods here are implementing function isalpha, thats illegal, but we can replace it by checking if the character in the arrey is between some number in ASCII code if(((int)characrer < 201) && ((int)character > 88));
size_t length(const char* cstr) {
	int result = 0;
	for (int i = 0;; i++) {
		if (cstr[i] == NULL) break;
		result++;
	}
	return result;
}

size_t words(const char* cstr) {
	int counterL = 0;
	int counterW = 0;

	for (int i = 0;; i++) {
		if (cstr[i] == NULL) break;
		if (isalpha(cstr[i])) counterL++;
		else counterL = 0;

		if (counterL == 1) counterW++;
	}
	return counterW;
}

size_t words2(const char* cstr) {
	int counterL = 0;
	int counterW = 0;
	
	for (int i = 0;; i++) {
		if (cstr[i] == NULL) break;
		if (isalpha(cstr[i])) counterL++;
		else counterL = 0;

		if (counterL == 2) counterW++;
	}
	return counterW;
}

char* reverse(char* cstr) {
	int  size = strlen(cstr);
	int size1 = 0;
	for (int i = 0; i < size; i++) size1++;
	const int size2 = size1;
	char s1[19];
	char temp;

	cout << cstr << endl;
	cout << size << endl;

	for (int i = 0, j = 20; i < 20; i++, j--) {
		temp = cstr[i];
		s1[i] = cstr[j];
		s1[j] = temp;
	}

	return s1;
}

int main() {

	char s1[] = "Alice in Wonderland";
	cout << "reverse: " << reverse(s1) << endl;
	cout << "length : " << length(s1) << endl;

	char s2[] = " ... for (int i = 0; i < n; ++i){...} ...";
	cout << "words : " << words(s2) << endl;
	cout << "words2 : " << words2(s2) << endl;

	char s3[100] = "Hello";
//	cout << "concat : "<< concat(concat(s3, ", world"), "!") << endl;

	system("pause");
}

