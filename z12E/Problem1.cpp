#include <iostream>
#include <algorithm>
using namespace std;


class Segment {
	double A, B;
public:
	Segment(double A, double B) : A(A), B(B) { }

	friend ostream& operator<<(ostream& str, const Segment& s);
	friend Segment operator+ (double d, const Segment& b);
	friend Segment operator+ (Segment&a, double d);
	friend Segment operator* (double d, const Segment& b);
	friend Segment operator* (Segment&a, double d);
	friend Segment operator- (double d, const Segment& b);
	friend Segment operator- (Segment&a, double d);
	friend Segment operator/ (double d, const Segment& b);
	friend Segment operator/ (Segment&a, double d);
	friend Segment operator+ (Segment&a, Segment&b);
	friend bool operator() (Segment&a, double d);

};


ostream& operator<<(ostream& str, const Segment& s) {
	return str << "["<<s.A<<","<<s.B<<"]";
};


Segment operator+ (double d, const Segment& b) {
	return Segment(b.A + d, b.B + d);
};
Segment operator+ (Segment&a, double d) {
	return Segment(a.A + d, a.B + d);
};

Segment operator* (double d, const Segment& b) {
	return Segment(b.A * d, b.B * d);
};
Segment operator* (Segment&a, double d) {
	return Segment(a.A * d, a.B * d);
};

Segment operator- (double d, const Segment& b) {
	return Segment(b.A - d, b.B - d);
};
Segment operator- (Segment&a, double d) {
	return Segment(a.A - d, a.B - d);
};

Segment operator/ (double d, const Segment& b) {
	return Segment(b.A / d, b.B / d);
};
Segment operator/ (Segment&a, double d) {
	return Segment(a.A / d, a.B / d);
};

Segment operator+ (Segment&a, Segment&b) {
	return Segment(min(a.A, b.A), max(a.B, b.B));
};

bool operator() (Segment&a, double d) {
	if (d >= a.A && d <= a.B) return true;
	else return false;
};





int main() {

	Segment seg{ 2,3 };
	cout << seg << "-- Segment" << endl;

	seg = seg + 2;
	cout<< seg << "-- Add 2 " << endl;

	seg = seg - 2;
	cout << seg << " -- Subtract 2: " << endl;

	seg = seg * 2;
	cout <<  seg << " -- Multiplicate by 2 " << endl;

	seg = seg / 2;
	cout  << seg << " -- Divided by 2 " << endl;
	cout << endl;

	Segment seg2{ 2,4 };
	cout << seg2 << "-- seg1" << endl;
	Segment seg3{ 3,5 };
	cout << seg3 << "-- seg2" << endl;

	Segment seg4 = seg2 + seg3;
	cout << seg4 << "--  seg1 + seg2" << endl;

	//s = 2 + seg;
	//,s = 1 + 2 * ((seg - 2) / 2 + seg) / 3;
	

//	for (double x = 0.5; x < 4; x += 1) cout << "x=" << x << ": " << s(x) << endl;

	system("pause");
	return 0;
}