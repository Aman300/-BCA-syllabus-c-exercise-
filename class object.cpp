#include<iostream>
using namespace std;
class student{
	private:
		int num;
	public:
		void getdata()
		{
			cout<<"Enter the number:";
			cin>>num;
		}		
		void display()
		{
			for(int i=1;i<10;i++)
			{
				cout<<num<<" X "<<i<<" = "<<i*num<<endl;
			}
			cout<<"------------\n";
		}
};
int main()
{
	student s1[5];
	for(int i=0;i<5;i++)
	{
		s1[i].getdata();
	}
	for(int i=0;i<5;i++)
	{
		s1[i].display();
	}
	return 0;
}
