#pragma once
using namespace std;
void homework1() {
	HOMEWORK(1)
	int a(1), c;//a=1
	cin >> c;
	cout << a << endl;
	int b = (a += 2, 3 * a);//b=3*3=9
	cout << "b=" << b << endl;
	b = c > 2 ? 2 * a : 4 * a;//if c>2,b=2*a=6,else b=4*a=12
	cout << "b=" << b << endl;
	cout << "stringµÄ×Ö½ÚÊı£º" << sizeof(string) << endl;
}