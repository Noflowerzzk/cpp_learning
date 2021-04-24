#define HOMEWORK(a) cout<<"It is homework"<<a<<endl;
using namespace std;
#include<iostream>
#include<fstream>
#include<complex>
#include<string>
#include<algorithm>
#include<stdio.h>
#include<fstream>
#include<conio.h>
#include<initializer_list>
#include<cmath>
#include<stdlib.h>
#include"标头.h"
#include "C:/Users/Administrator/source/repos/c++学习/homework1.h"
#include "C:/Users/Administrator/source/repos/c++学习/homework2.h"
#include "C:/Users/Administrator/source/repos/c++学习/homework3.h"
#include "C:/Users/Administrator/source/repos/c++学习/homework4.h"
#include "C:/Users/Administrator/source/repos/c++学习/homework5.h"
#include "C:/Users/Administrator/source/repos/c++学习/homework6.h"
#include "homework7.h"
#include "homework8.h"
#include "homework9.h"
#include "homework10.h"
int main(){
#if 0
	int a,b=3;
	char *c, d[] = "12345";
	bool flag;
	string s;
	study f;
	c = d;
	cin >> a >> s;
	swap(a, b);
	cout << a << s << '\a' << a << endl;
	cout << c << endl;
	c = backward(d);
	cout << c << endl;
	cout << backward(d) << endl;
#else
	int a;
	cin >> a;
	switch (a)
	{
	case 100:p(); break;
	case 0:maths(); break;
	case 1:homework1(); break;
	case 2:homework2(); break;
	case 3:homework3(); break;
	case 4:homework4(); break;
	case 5:homework5(); break;
	case 6:homework6(); break;
	case 7:homework7(); break;
	case 8:homework8(); break;
	case 9:homework9(); break;
	case 10:homework10(); break;
	default:cout << "It's wrong";
	}
	return 0;
#endif
}