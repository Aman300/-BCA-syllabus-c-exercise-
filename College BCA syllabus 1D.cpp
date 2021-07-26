#include<iostream>
using namespace std;
int main(){
    int num,t1=0,t2=1,t3;
    cout<<"Enter the number:";
    cin>>num;
    cout<<t1<<" "<<t2<<" ";
    for(int i=2;i<=num;i++)
    {
        t3=t1+t2;
        t1=t2;
        t2=t3;
        cout<<t3<<" ";
    }
}
