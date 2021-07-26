#include<iostream>
using namespace std;
int main()
{
    int num_unit,n=50,result;
    //char name[100];
    string name;
    cout<<"Enter the cnsumer name:";
  //  cin.get(name,100);
    getline(cin,name);
    cout<<"Enter the No unit:";
    cin>>num_unit;
    if(num_unit<=100)
    {
        result=num_unit*0.5+n;
        cout<<"Name of consumer = "<<name<<endl;
        cout<<"Total amount = " <<result;
    }
    else if(num_unit<=300)
    {
        num_unit=num_unit-100;
        result=100*0.5+num_unit*0.8+n;
        cout<<"Name of consumer = "<<name<<endl;
        cout<<"Total amount = " <<result;
    }
    else if(num_unit>300)
    {
        num_unit=num_unit-300;
        result=100*0.5 + 200*0.8+num_unit+0.9+n;
        if(result>300)
        {
            result = result + ( 15.0 / 100.0 ) * result;
        }
        cout<<"Name of consumer = "<<name<<endl;
        cout<<"Total Bill amount = " <<result;
    }
   return 0;
}

