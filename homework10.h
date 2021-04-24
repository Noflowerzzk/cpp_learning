#pragma once
class Vector {
public:
	Vector(int a, int b) :x(a), y(b) {}
	Vector() :x(0), y(0) {}
	void showv() {
		cout << x << ',' << y << endl;
	}
	int getvx() const { return x; }
	int getvy() const { return y; }
	Vector operator + (const Vector& a) const {
		return Vector(x + a.x, y + a.y);
	}
	Vector operator - (const Vector& a) const {
		return Vector(x - a.x, y - a.y);
	}
	int operator * (const Vector& a) const {
		return (x * a.x + y * a.y);
	}
	Vector& operator ++ () {//Ç°ÖÃ++
		x++, y++;
		return *this;
	}
	Vector operator ++ (int) {//ºóÖÃ++
		Vector a(*this);
		++(*this);
		return a;
	}
private:
	int x, y;
};
ostream& operator << (ostream& out, const Vector& a) {
	out << a.getvx() << ',' << a.getvy();
	return out;
}
void homework10() {
	HOMEWORK(10);
	Vector a(2, 3), b(4, 5);
	Vector c(a + b);
	c.showv();
	c = a - b;
	c.showv();
	cout << a * b << endl;
	c++;
	c.showv();
	++c;
	c.showv();
	cout << c << endl;
}