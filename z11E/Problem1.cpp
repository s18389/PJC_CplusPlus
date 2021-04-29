#include <iostream>
using namespace std;

class Resistor {
		double re;

	public:
		Resistor(double re = 0.0) {
			this->re = re;
		}

		double r() const {
			return re;
		}

		void r(double r) {
			re = r;
		}
		friend ostream& operator<<(ostream&, const Resistor&);
		friend Resistor operator+(const Resistor&, const Resistor&);
		friend Resistor operator*(const Resistor&, const Resistor&);
};


Resistor operator+ (const Resistor& c, const Resistor& b) {
	return c.r() + b.r();
};

Resistor operator* (const Resistor& c, const Resistor& b) {
	return (c.r() * b.r())/(c.r()+b.r());
};

ostream& operator<<(ostream& str, const Resistor& a) {
	return str << a.r();
};


int main() {
	Resistor r1, r2{6};
	r1.r(3);
	cout << "1. Resitance = " << r1.r() << endl;
	cout << "2. Resitance = " << r2.r() << endl;
	cout << endl;

	cout << "Sum (series): " << (r1 + r2) << endl;
	cout << "Sum (parallel) " << (r1 * r2) << endl;
	system("pause");
	return 0;
}