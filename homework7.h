#pragma once
int compute(int a, int b, int (*func)(int, int)) {
	return func(a, b);
}
int Max(int a, int b) {
	return a > b ? a : b;
}
int Min(int a, int b) {
	return a < b ? a : b;
}
void homework7() {
	HOMEWORK(7)
	int a(2), * p(&a);
	cout << *p << ' ' << a << ' ' << p << ' ' << &a << endl;
	int t[50],*pp(t);
	for (pp = t; pp < t + 50; pp++) {
		static int i(0);
		*pp = i;
		i++;
	}
	pp = nullptr;
	for (pp = t; pp < t + 50; pp++)
		cout << *pp << ' ';
	cout << endl;
	p = nullptr;
	const int* p1(&a);
	int b(3);
	p1 = &b;
	int* const p2(&a);
	cout << *p1 << ' ' << *p2 << endl;
	cout << compute(3, 4, Max) << ' ';
	cout << compute(3, 4, Min) << ' ' << endl;
	point* p3, c(1, 2);
	p3 = &c;
	cout << '(' << p3->getx() << ',' << p3->gety() << ')' << endl;
}