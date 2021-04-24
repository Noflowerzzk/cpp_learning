#pragma once
using namespace std;
class haha {
public:
	static void showcount();//静态成员函数
	haha(int aa, int bb, int cc);
	haha();
	haha(const haha& x);
	~haha();
	friend double x(const haha& a);//友元函数
private:
	int a, b, c;
	static int count;//静态成员变量
};
int haha::count = 0;
inline void haha::showcount() {
	cout << "Object count = " << count << endl;
}
inline haha::haha(int aa, int bb, int cc) :
	a(aa), b(bb), c(cc) {
	count++;
}
inline haha::haha() :
	a(0), b(0), c(0) {
	count++;
}
inline haha::haha(const haha& x) {
	a = x.a, b = x.b, c = x.c;
	count++;
}
inline haha::~haha() {
	count--;
}
double x(const haha& a) {
	double p = (a.a + a.b + a.c) / 2;
	return static_cast<double>(sqrt(p * (p - a.a) * (p - a.b) * (p - a.c)));
}
void homework5() {
	HOMEWORK(5)
	haha::showcount();
	haha a(3, 4, 5);
	haha b(a);
	haha::showcount();
	cout << "Sa = " << x(a) << endl;
	a.~haha();
	haha::showcount();
	b.~haha();
	haha::showcount();
}