#pragma once
using namespace std;
void swap1(int a, int b) {
	int t;
	t = a;
	a = b;
	b = t;
}
void swap2(int& a, int& b) {
	int t;
	t = a;
	a = b;
	b = t;
}
void homework2() {
	HOMEWORK(2)
	int x(2), y(3);
	cout << x << y << endl;
	swap1(x, y);//���ܽ���
	cout << x << y << endl;
	swap2(x, y);//�����ý���
	cout << x << y << endl;
}