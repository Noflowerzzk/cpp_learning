#pragma once
#include<iostream>
#include<fstream>
#include<ctime>
#include <cassert>
#include<Windows.h>
#include<shellapi.h>
using namespace std;
long mE(long a){//������λ 
	long s;
	if (a == 1)s = 10;
	else s = 10 * mE(a - 1);
	return s;
}
void doback(long a){//����Ƶ���ǰ 
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
long D(int a, int b, int c, int d) {//��������ʽ 
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
		cout << "1:һ�η���\t2:���η���\t3:�ֽ�������\t4:��Ԫһ�η���\t0:�˳�" << endl;
		cin >> set;
		switch (set)
		{
		case 0: {
			goto end;
			break;
		}
		case 1: {
			cout << "1:һ�η���\nax+b=0\n����a,b:" << endl;
			cin >> a;
			cin >> b;
			if (a == 0)
				cout << "a����Ϊ0." << endl;
			else
			{
				x = static_cast<double>(-b / a);
				cout << "����" << a << "x+" << b << "=0�Ľ�Ϊ:\n" << x << endl;
			}
			break;
		}
		case 2: {
			cout << "2:���η���:\nax^2+bx+c=0\n����a,b,c:" << endl;
			cin >> a;
			cin >> b;
			cin >> c;
			if (a == 0)
				cout << "a����Ϊ0." << endl;
			else if (b * b - 4 * a * c > 0)
			{
				x1 = ((-b + sqrt(b * b - 4 * a * c)) / 2 * a);
				x2 = ((-b - sqrt(b * b - 4 * a * c)) / 2 * a);
				cout << "����" << a << "x+" << b << "x+" << c << "=0�ж��������ʵ����,Ϊ:\nx1=" << x1 << "\nx2=" << x2 << endl;
			}
			else if (b * b - 4 * a * c == 0)
			{
				x1 = ((-b + sqrt(b * b - 4 * a * c)) / 2 * a);
				cout << "����" << a << "x+" << b << "x+" << c << "=0�ж�����ͬ��ʵ����,Ϊ:\nx1=" << x1 << endl;
			}
			else if (b * b - 4 * a * c < 0)
				cout << "����" << a << "x+" << b << "x+" << c << "=0�޽⡣" << endl;
			break;
		}
		case 3: {
			cout << "���������:" << endl;
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
						cout << i << "��";
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
		default:cout << "����." << endl; goto end;
		}
	}
end:;
}
void bell(int a){//����
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
	ofstream x("C:\\Users\\Administrator\\source\\repos\\c++ѧϰ\\Text.txt", ios::app);
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
	infile.open(file.data());   //���ļ����������ļ��������� 
	assert(infile.is_open());   //��ʧ��,�����������Ϣ,����ֹ�������� 

	int c;
	infile.seekg(-1, ios::end);
	infile >> c;
	cout << c;
	/*while (!infile.eof())
	{
		infile >> c;
		cout << c;
	}*/
	infile.close();             //�ر��ļ������� 
}
#if 0
void game() {
	SHELLEXECUTEINFO  ShExecInfo;
	ShExecInfo.cbSize = sizeof(SHELLEXECUTEINFO);
	ShExecInfo.fMask = NULL;
	ShExecInfo.hwnd = NULL;
	ShExecInfo.lpVerb = NULL;
	ShExecInfo.lpFile = ("C:\\Users\\Administrator\\Desktop\\�����ǵ��ļ�\\�ļ�\\Scrach2�ļ�\\���.sb2-627.exe");        // ִ�еĳ����� 
	ShExecInfo.lpParameters = NULL;
	ShExecInfo.lpDirectory = NULL;
	ShExecInfo.nShow = SW_MAXIMIZE;                // ȫ����ʾ������� 
	ShExecInfo.hInstApp = NULL;
	ShellExecuteEx(&ShExecInfo);
}
#endif // 0