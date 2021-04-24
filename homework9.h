#pragma once
class Point1 {
public:
	Point1(int a) :x(a) {}
	Point1() :x(0) {}
	void showp1() {
		cout << '(' << x << ')';
	}
	void setp1(int a) { x = a; }
	int getxp() const { return x; }
private:
	int x;
};
class Point2 :public Point1 {
public:
	Point2(int a, int b) :Point1(a), y(b) {}
	Point2() :Point1(0), y(0) {}
	void showp2() {
		cout << '(' << Point1::getxp() << ',' << y << ')';
	}
	void setp2(int a, int b) {
		setp1(a);
		y = b;
	}
	int getyp() const { return y; }
private:
	int y;
};
class Point3 :public Point2 {
public:
	Point3(int a, int b, int c) :Point2(a, b), z(c) {}
	Point3() :Point2(0, 0), z(0) {}
	void showp3() {
		cout << '(' << getxp() << ',' << getyp() << ',' << z << ')';
	}
	void setp3(int a, int b, int c) {
		setp2(a, b);
		z = c;
	}
	int getzp() const { return z; }
	Point3(const Point3& a) :Point2(a), z(a.z) {}
	~Point3() {}
private:
	int z;
};
void homework9() {
	HOMEWORK(9);
	Point3 p(1,2,3);
	p.showp3();
	cout << endl;
	p.showp2();
	cout << endl;
	p.showp1();
}