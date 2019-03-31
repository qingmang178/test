#include <iostream>
using namespace std;
class A {
private:
	int nVal;
public:
	void Fun()
	{
		cout << "A::Fun" << endl;
	}
	virtual void Do()
	{
		cout << "A::Do" << endl;
	}
};
class B :public A {
public:
	virtual void Do()
	{
		cout << "B::Do" << endl;
	}
};
class C :public B {
public:
	void Do()
	{
		cout << "C::Do" << endl;
	}
	void Fun()
	{
		cout << "C::Fun" << endl;
	}
};
void Call(A *p
	// 在此处补充你的代码
) {
	p->Fun();  p->Do();
}
int main() {
	Call(new A());//A* p  = new A();  p->Fun()调用的自然是A的Fun()。p->Do()调用的自然是A的Do()。
	Call(new C());//A* p  = new C();  p->Fun()，因为Fun不是虚函数，不会引发多态，调用的依然是A的Fun()。  p->Do()，由于Do是虚函数，引发多态，调用C的Do()。
	system("pause");
	return 0;
}