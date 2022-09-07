#include<iostream>
using namespace std;
class A {
	public:
	void func() 
    {
		cout << " Data of class A" << endl;
	}
};
class B {
	public:
	void func() 
    {
		cout << " Data of class B" << endl;
	}
};
class C: public A, public B 
{

};
int main() 
{
	C obj;
	obj.A::func();
    obj.B::func();
	return 0;
}
