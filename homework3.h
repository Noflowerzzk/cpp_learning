#pragma once
using namespace std;
class aclock {
public:
	aclock(int h, int m, int s);//���캯��,����ʡ��
	aclock();//Ĭ�Ϲ��캯��,or clock():clock(0,0,0){},ί�й��캯��,����ʡ��
	aclock(const aclock& a);//���ƹ��캯��,����ʡ��,
	//clock(const clock& a)=delete,������Ĭ�ϸ��ƹ��캯��;
	~aclock();//��������
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
}//Ҳ�����ں������и�ֵ
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
	aclock a;//(0, 0, 0);����Ĭ�Ϲ��캯����������ù��캯��
	a.show();
	a.set(16, 18, 5);
	aclock b(a);//���ø��ƹ��캯��
	a.show();
	b.show();
	aclock c(8, 29, 30);//���ù��캯��
	c.show();
}//��������Զ�������������