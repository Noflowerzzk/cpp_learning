#pragma once
#include<iostream>
#include<fstream>
#include<ctime>
#include <cassert>
#include<Windows.h>
#include<shellapi.h>
using namespace std;
long mE(long a){//计算数位 
	long s;
	if (a == 1)s = 10;
	else s = 10 * mE(a - 1);
	return s;
}
void doback(long a){//光标移到数前 
	int i = 0;
	long s = 1;
	while ((a / s) >= 1)
	{
		i++;
		s = mE(i);
	}
	int j = i;
	while (j>0)
	{
		putchar('\b');
		j--;
	}
}
long D(int a, int b, int c, int d) {//二阶行列式 
	long x;
	x = a * d - b * c;
	return x;
}
void maths()
{
	long long a, b, c, set, i, flag = 0;
	double x1, x2, x;
	while (1)
	{
		cout << "1:一次方程\t2:二次方程\t3:分解质因数\t4:二元一次方程\t0:退出" << endl;
		cin >> set;
		switch (set)
		{
		case 0: {
			goto end;
			break;
		}
		case 1: {
			cout << "1:一次方程\nax+b=0\n输入a,b:" << endl;
			cin >> a;
			cin >> b;
			if (a == 0)
				cout << "a不能为0." << endl;
			else
			{
				x = static_cast<double>(-b / a);
				cout << "方程" << a << "x+" << b << "=0的解为:\n" << x << endl;
			}
			break;
		}
		case 2: {
			cout << "2:二次方程:\nax^2+bx+c=0\n输入a,b,c:" << endl;
			cin >> a;
			cin >> b;
			cin >> c;
			if (a == 0)
				cout << "a不能为0." << endl;
			else if (b * b - 4 * a * c > 0)
			{
				x1 = ((-b + sqrt(b * b - 4 * a * c)) / 2 * a);
				x2 = ((-b - sqrt(b * b - 4 * a * c)) / 2 * a);
				cout << "方程" << a << "x+" << b << "x+" << c << "=0有二个相异的实数根,为:\nx1=" << x1 << "\nx2=" << x2 << endl;
			}
			else if (b * b - 4 * a * c == 0)
			{
				x1 = ((-b + sqrt(b * b - 4 * a * c)) / 2 * a);
				cout << "方程" << a << "x+" << b << "x+" << c << "=0有二个相同的实数根,为:\nx1=" << x1 << endl;
			}
			else if (b * b - 4 * a * c < 0)
				cout << "方程" << a << "x+" << b << "x+" << c << "=0无解。" << endl;
			break;
		}
		case 3: {
			cout << "输入测试数:" << endl;
			cin >> a;
			cout << a << " = ";
			c = a;
			while (1)
			{
				i = 2;
				flag = 0;
				while (i <= sqrt(c))
				{
					if (!(c % i))//
					{
						cout << i << "×";
						flag = 1;
						break;
					}
					else
					{
						//printf("%lld",i);
						//doback(i);
						i++;
					}

				}
				if (flag == 1)
					c /= i;
				else
				{
					cout << c << endl;
					break;
				}
			}
			break;
		}
		default:cout << "错误." << endl; goto end;
		}
	}
end:;
}
void bell(int a){//鸣铃
	int i=1;
	while(i<=a){
		putchar('\a');
		i++;
	}
}
char *backward(char* a){
	int i = 0,j;
	while (*(a+i)!=0)
		i++;
	j = i - 1;
	if (i%2==1)
	{
		while (j >= (i/2-0.5))
		{
			swap(*(a + j), *(a + i - 1 - j));
			j--;
		}
	}
	else
	{
		while (j >= i/2)
		{
			swap(*(a + j), *(a + i - 1 - j));
			j--;
		}
	}
	return a;
}
void couttable(int a[][4], int x, int b = 4) {
	int i, j;
	for (i = 0; i < x; i++) {
		for (j = 0; j < b; j++)
			cout << a[i][j] << '\t';
		cout << endl;
	}
}
void prime(long long a) {
	static long c(1);
	bool flag(true);
	long long i(2);
	ofstream x("C:\\Users\\Administrator\\source\\repos\\c++学习\\Text.txt", ios::app);
	while (i <= sqrt(a))
	{
		if (a % i == 0)
		{
			flag = false;
			break;
		}
		else i++;
	}
	if (flag) {
		x << ' ' << a;
		c++;
		flag = false;
		if (c % 15 == 0)
			x << '\n';
	}
}
void p() {
	clock_t start, end;
	long long a(2);
	ifstream x;// (, ios::ate);
	x.open("Text.txt");
	assert(x.is_open());
	x.seekg(-1, ios::end);
	x >> a;
	while (true) {
		static int aa(1),xx(2);
		x.seekg(-aa, ios::end);
		x >> a;
		aa++;
		if (xx == a)
			break;
		xx = a;
	}
	x.close();
	start = clock();
	int i(1);
	while (i < 100000) {
		prime(a);
		a++;
		i++;
	}
	end = clock();
	double endtime = static_cast<double>(end - start) / CLOCKS_PER_SEC;
	cout << "Total time:" << endtime << "s" << endl;
	bell(3);
}
void readTxt(string file)
{
	ifstream infile;
	infile.open(file.data());   //将文件流对象与文件连接起来 
	assert(infile.is_open());   //若失败,则输出错误消息,并终止程序运行 

	int c;
	infile.seekg(-1, ios::end);
	infile >> c;
	cout << c;
	/*while (!infile.eof())
	{
		infile >> c;
		cout << c;
	}*/
	infile.close();             //关闭文件输入流 
}
#if 0
void game() {
	SHELLEXECUTEINFO  ShExecInfo;
	ShExecInfo.cbSize = sizeof(SHELLEXECUTEINFO);
	ShExecInfo.fMask = NULL;
	ShExecInfo.hwnd = NULL;
	ShExecInfo.lpVerb = NULL;
	ShExecInfo.lpFile = ("C:\\Users\\Administrator\\Desktop\\张桢锴的文件\\文件\\Scrach2文件\\射击.sb2-627.exe");        // 执行的程序名 
	ShExecInfo.lpParameters = NULL;
	ShExecInfo.lpDirectory = NULL;
	ShExecInfo.nShow = SW_MAXIMIZE;                // 全屏显示这个程序 
	ShExecInfo.hInstApp = NULL;
	ShellExecuteEx(&ShExecInfo);
}
#endif // 0