#pragma once
class point {
public:
	point(double xx, double yy);
	point();
	point(const point& p);
	double getx();
	double gety();
	void set(double xx,double yy) {
		x = xx;
		y = yy;
	}
	void show() {
		cout << '(' << x << ',' << y << ')' << ' ';
	}
private:
	double x, y;
};
class line {
public:
	line(point aa, point bb);
	line(const line& l);
	double getl();
private:
	point a, b;
	double len;
};
point::point(double xx, double yy) :
	x(xx), y(yy) {
	cout << "Calling the constructor of point" << endl;
}
point::point() :
	x(0), y(0) {
	cout << "Calling the default constructor of point" << endl;
}
point::point(const point& p) {
	x = p.x;
	y = p.y;
	cout << "Calling the copy constructor of point" << endl;
}
inline double point::getx() {
	return x;
}
inline double point::gety() {
	return y;
}
line::line(point aa, point bb) :
	a(aa), b(bb) {
	double x = static_cast<double>(a.getx() - b.getx());
	double y = static_cast<double>(a.gety() - b.gety());
	len = sqrt(x * x + y * y);
	cout << "Calling the constructor of line" << endl;
}
line::line(const line& l) {
	a = l.a;
	b = l.b;
	len = l.len;
	cout << "Calling the copy constructor of line" << endl;
}
inline double line::getl() {
	return len;
}
void homework4() {
	HOMEWORK(4)
	point a(1, 3), b(5, 6);
	line l(a, b);
	line l2(l);
	cout << l.getl() << endl;
	cout << l2.getl() << endl;
}