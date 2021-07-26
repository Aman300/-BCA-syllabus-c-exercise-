#include<iostream>
using namespace std;
void swap_value(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    cout<<"Before swaping y = "<<y<<endl;;
    cout<<"Before swaping x = "<<x<<endl;;
    cout<<"After swaping x = "<<x<<endl;
    cout<<"After swaping y = "<<y<<endl;
    
}
void swap_rafrance(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    cout<<"Before swaping y = "<<*y<<endl;;
    cout<<"Before swaping x = "<<*x<<endl;;
    cout<<"After swaping x = "<<*x<<endl;
    cout<<"After swaping y = "<<*y<<endl;
}
int main()
{
    int num,n1,n2;
    cout<<"Enter the number:\n";
    cout<<"1 for swap_value:\n";
    cout<<"2 for swap_rafrance:\n";
    cin>>num;
    switch(num)
    {
        case 1:
            cout<<"Ente the first number:";
            cin>>n1;
            cout<<"Enter the second number:";
            cin>>n2;
            swap_value(n1,n2);
            break;
        case 2: 
            cout<<"Ente the first number:";
            cin>>n1;
            cout<<"Enter the second number:";
            cin>>n2;
            swap_rafrance(&n1,&n2);
            break;
    }
}
