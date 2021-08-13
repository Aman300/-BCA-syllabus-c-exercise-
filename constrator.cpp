#include<iostream>
using namespace std;
class A{
	protected:
		int n1,n2;
	public:
		A(int a,int b)
		{
			n1=a;
			n2=b;
		}
};
class B: public A{
	public:
	void display()
		{
			cout<<n1+n2;
		}
};
int main()
{
	B a1;
	a1.display();
	return 0;
}
