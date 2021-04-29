#include <iostream>
#include <algorithm>
using namespace std;

class Segment {
	double A, B;
public:
	Segment(double A, double B) : A(A), B(B) { }
	
	Segment operator *(double b) {
		return Segment(A*b, B*b);
	}
	friend Segment operator/(const Segment&, double);

	Segment operator+(double b) {
		return Segment(A + b, B + b);
	}
	friend Segment operator-(const Segment&, double);
	friend Segment operator+(const Segment&, const Segment &);
	friend ostream& operator<<(ostream&, const Segment&);
	bool operator()(double b) {
		if (b >= A && b <= B) return true;
		else return false;
	} // operatrator like (), [], =, -> can be only override in class method, never by global functions
};

Segment operator/(const Segment &a, double b) {
	return Segment(a.A / b, a.B / b);
}

Segment operator-(const Segment &a, double b) {
	return Segment(a.A - b, a.B - b);
}
Segment operator+(const Segment &a, const Segment &b) {
	return Segment(min(a.A, b.A), max(a.B, b.B));
}
ostream& operator<<(ostream& str, const Segment &a) {
	return str << "[" << a.A << "," << a.B << "]";
}



int main() {
	Segment seg{ 2,3 };
	cout << seg << "-- Segment" << endl;

	seg = seg + 2;
	cout << seg << "-- Add 2 " << endl;

	seg = seg - 2;
	cout << seg << " -- Subtract 2: " << endl;

	seg = seg * 2;
	cout << seg << " -- Multiplicate by 2 " << endl;

	seg = seg / 2;
	cout << seg << " -- Divided by 2 " << endl;
	cout << endl;

	Segment seg2{ 2,4 };
	cout << seg2 << "-- seg1" << endl;
	Segment seg3{ 3,5 };
	cout << seg3 << "-- seg2" << endl;

	Segment seg4 = seg2 + seg3;
	cout << seg4 << "--  seg1 + seg2" << endl;
	
	for (double x = 0.5; x < 4; x += 1)
		cout << "x=" << x << ": " << seg4(x) << endl;

	system("pause");
}