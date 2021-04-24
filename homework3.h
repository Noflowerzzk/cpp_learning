#pragma once
using namespace std;
class aclock {
public:
	aclock(int h, int m, int s);//构造函数,可以省略
	aclock();//默认构造函数,or clock():clock(0,0,0){},委托构造函数,可以省略
	aclock(const aclock& a);//复制构造函数,可以省略,
	//clock(const clock& a)=delete,不生成默认复制构造函数;
	~aclock();//析构函数
	void set(int h = 0, int m = 0, int s = 0);
	void show();
private:
	int hour, minu, sec;
};
void aclock::set(int h, int m, int s) {
	hour = h;
	minu = m;
	sec = s;
}
void aclock::show() {
	cout << hour << ':' << minu << ':' << sec << endl;
}
aclock::aclock(int h,int m,int s):
	hour(h),minu(m),sec(s){
	cout << "Calling the constructor" << endl;
}//也可以在函数体中赋值
aclock::aclock():
	hour(0),minu(0),sec(0){
	cout << "Calling the default constructor" << endl;
}
aclock::aclock(const aclock& a) {
	hour = a.hour;
	minu = a.minu;
	sec = a.sec;
	cout << "Calling the copy constructor" << endl;
}
aclock::~aclock() {
	cout << "Calling the destructor" << endl;
}
void homework3() {
	HOMEWORK(3)
	aclock a;//(0, 0, 0);已有默认构造函数，无需调用构造函数
	a.show();
	a.set(16, 18, 5);
	aclock b(a);//调用复制构造函数
	a.show();
	b.show();
	aclock c(8, 29, 30);//调用构造函数
	c.show();
}//块结束后自动调用析构函数