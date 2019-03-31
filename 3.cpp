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
	// �ڴ˴�������Ĵ���
) {
	p->Fun();  p->Do();
}
int main() {
	Call(new A());//A* p  = new A();  p->Fun()���õ���Ȼ��A��Fun()��p->Do()���õ���Ȼ��A��Do()��
	Call(new C());//A* p  = new C();  p->Fun()����ΪFun�����麯��������������̬�����õ���Ȼ��A��Fun()��  p->Do()������Do���麯����������̬������C��Do()��
	system("pause");
	return 0;
}