#include<iostream>
using namespace std;
class A{
	private:
		int num1,num2;
	public:
		void Add(int x,int y)
		{
			num1=x;
			num2=y;
		}
};
class B:public A{
	private:
		int number1,number2;
	public:
		void Sub(int a,int b)
		{
			number1=a;
			number2=b;
		}
};
class final:public A,public B{
	private:
		int add,sub;
	public:
		void display()
		{
			add=num1+num2;
			sub=number1-number2;
			cout<<"Addiction = "<<add;
			cout<<"Substraction = "<<sub;
		}
};
int main()
{
	final f;
	f.Add(10,20);
	f.Sub(20,10);
	f.display();
	return 0;
}
