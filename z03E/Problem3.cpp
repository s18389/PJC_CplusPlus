#include <iostream>
// you can (but not have to) use std::swap
#include <utility>
using namespace std;

void getMinMax(double &a, double& b, double& c, double*& ptrMin, double*& ptrMax) {
	double *max = &a;
	if (b > *max) max = &b;
	if (c > *max) max = &c;
	ptrMax = max;

	double *min = &a;
	if (b < *min) min = &b;
	if (c < *min) min = &c;
	ptrMin = min;
}

void getMinMax(double *a, double* b, double* c, double** ptrMin, double** ptrMax) {
	
	double *max = a;
	if (*b > *max) max = b;
	if (*c > *max) max = c;
	*ptrMax = max;

	//cout << "MAX:    " << *max << "   " << &max << "     " << max << endl;
	//cout << "A:    " << *a << "   " << &a << "     " << a << endl;

	double *min = a;
	if (*b < *min) min = b;
	if (*c < *min) min = c;
	*ptrMin = min;
}

void ord3(double& a, double& b, double& c) {
	double *temp;
	if (a > b) {
		temp = &a;
		a = b;
		b = *temp;
	}
	if (a > c) {
		temp = &a;
		a = c;
		c = *temp;
	}
	if (b > c) {
		temp = &b;
		b = c;
		c = *temp;
	}

}

void ord3(double* a, double* b, double* c) {
	int temp;
	if (*a > *b) {
		temp = *a;
		*a = *b;
		*b = temp;
	}
	if (*a > *c) {
		temp = *a;
		*a = *c;
		*c = temp;
	}
	if (*b > *c) {
		temp = *b;
		*b = *c;
		*c = temp;
	}

}

void printOrd(const double* a, const double* b, const double* c) {
	cout << *a << " " << *b << " " << *c << endl;
}
void printMinMax(const double* pmn, const double* pmx) {
	cout << "Min = " << *pmn << "; "
		<< "Max = " << *pmx << endl;
}

int main() {
	double a, b, c, *ptrMin, *ptrMax;

	double a1 = 3.6;

	double *pa1 = &a1;

	cout << "variable : " << a1 << endl;
	cout << "address pointer : " << &a1 << endl;
//	cout << "variable : " << *a1 << endl;

	cout << "variable : " << *pa1 << endl;
	cout << "address of pointer's variable : " << pa1 << endl;
	cout << "pointer address " << &pa1 << endl;

	cout << endl;
	cout << endl;

	a = 2; b = 1; c = 3;
	ord3(a, b, c);
	printOrd(&a, &b, &c);

	a = 3; b = 2; c = 1;
	ord3(&a, &b, &c);
	printOrd(&a, &b, &c);

	a = -1; b = -1; c = 1;
	ord3(&a, &b, &c);
	printOrd(&a, &b, &c);

	a = 2; b = 3; c = 1;
	getMinMax(a, b, c, ptrMin, ptrMax);
	printMinMax(ptrMin, ptrMax);

	a = 3; b = 1; c = 2;
	getMinMax(&a, &b, &c, &ptrMin, &ptrMax);
	printMinMax(ptrMin, ptrMax);

	a = 3; b = 3; c = -1;
	getMinMax(&a, &b, &c, &ptrMin, &ptrMax);
	printMinMax(ptrMin, ptrMax);

	system("pause");
}
