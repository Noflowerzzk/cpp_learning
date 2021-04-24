#pragma once
using namespace std;
const static int num(4);
void homework6() {
	HOMEWORK(6)
	int i, j;
	int t[4][4] = { {1,2,3,4},{4,3,2,1},{3,4,5,6},{6,5,4,3} };
	couttable(t, 4);
	for (i = 0; i < 4; i++) {
		for (j = 1; j < 4; j++)
			t[i][0] += t[i][j];
	}
	couttable(t, 4, 1);

	haha a[10] = { haha(2,3,3),haha(5,6,6) };
	for (i = 0; i < 10; i++)
		a[i] = haha::haha(i + 2, i + 2, i + 3);
	for (i = 0; i < 10; i++)
		cout << "S[" << i << "] = " << x(a[i]) << '\t';
	haha::showcount();

	aclock b[3] = { aclock(1,2,3) };
	aclock c(b[0]);

	int m[] = { 23,4,23,54,4,5,4,5,6,5,4,3,2,34 };
	for (int& e : m) {//基于范围的for循环，自动遍历整个容器
		e += 2;
		cout << e << '\t';
	}
	cout << endl;
}