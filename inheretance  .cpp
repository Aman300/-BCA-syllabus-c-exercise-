#include<iostream>
using namespace std;
class A{
	public:
		string Name;
	void get_name(string name){
		Name=name;
	}
	void put_name(){
		cout<<Name<<endl;
	}
};
class B: public A{
	public:
		int Age;
	void get_age(int age){
		Age=age;
	}
	void put_age(){
		cout<<Age<<endl;
	}
};
class C:public B{
	public:
		string Gender;
	void git_gender(string gender){
		Gender=gender;
	}
	void put_gender(){
		cout<<Gender<<endl;
	}
};

int main(){
	C c;
	c.get_name("Aman kumar");
	c.get_age(20);
	c.git_gender("Male");
	
	c.put_name();
	c.put_age();
	c.put_gender();
	return 0;
}

