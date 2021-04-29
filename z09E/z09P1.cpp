#include <iostream>
#include <cmath>

class Point {
	double x, y;
public:
	Point() {
		this->x = 0;
		this->y = 0;
	};
	Point(double s) {
		this->x = s;
		this->y = s;
	};
	Point(double x, double y) {
		this->x = x;
		this->y = y;
	};

	double getX() const { return this->x; };
	double getY() const { return this->y; };
	Point& setX(double xx) { 
		this->x = xx;
		return *this;
	};
	Point& setY(double yy) { 
		this->y = yy;
		return *this;
	};
	Point& transX(double dx) { 
		this->x = this->x + dx;
		return *this;
	};
	Point& transY(double dy) { 
		this->y = this->y + dy; 
		return *this;
	};
	Point& transXY(double dx, double dy) {
		this->x = this->x + dx;
		this->y = this->y + dy;
		return *this;
	};
	static double dist(const Point& p, const Point& q) {
		static double distance = 0;
		distance = sqrt(((q.getX() - p.getX())*(q.getX() - p.getX())) + ((q.getY() - p.getY())*(q.getY() - p.getY())));
		return distance;
	}
};

int main() {
	Point p;
	Point q(1);
	Point r(1, 2);
	p.transXY(5, 6);
	q.transX(-1).transY(-1).transXY(2, 2);
	r.setX(10).transY(-8);
	std::cout << Point::dist(p, q) << std::endl;
	std::cout << Point::dist(p, r) << std::endl;
	system("pause");
}
