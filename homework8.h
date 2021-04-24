#pragma once
#include <vector>
using namespace std;
class Array {
public:
	Array(int lenth) :
		lenth(lenth) {
		a = new point[lenth];
	}
	~Array() {
		delete[] a;
	}
	Array(const Array& v);
	Array(Array&& v) {//移动构造
		a = v.a;
		v.a = nullptr;
	}
	point& ele(int a1) {
		assert(a1 >= 0 && a1 < lenth);
		return a[a1];
	}
private:
	int lenth;
	point* a;
};
Array::Array(const Array& v) {//深层复制
	lenth = v.lenth;
	a = new point[lenth];
	for (int i = 0; i < lenth; i++)
		a[i] = v.a[i];
}
void homework8() {
	HOMEWORK(8)
	point* p = new point;
	delete p;
	p = new point(1, 2);
	cout << '(' << p->getx() << ',' << p->gety() << ')' << endl;
	delete p;

	int a;
	cout << "输入a:";
	cin >> a;
	int* p1 = new int[a];
	for (int i = 0; i < a; i++)
		p1[i] = i;
	for (int i = 0; i < a; i++)
		cout << p1[i] << ' ';
	int sum(0);
	for (int i = 0; i < a; i++)
		sum += p1[i];
	cout << sum << endl;
	delete[] p1;

	Array b(a);
	b.ele(0).set(2, 3);
	for (int i = 0; i < a; i++) {
		b.ele(i).set((2 + i), (3 + i));
		b.ele(i).show();
	}

	vector<int>c(a);
	c[2] = 2;
	cout << c.size() << endl;
	for (auto i : c) {
		static int j(0);
		c[j] = j;
		cout << c[j] << ' ';
		j++;
	}
}