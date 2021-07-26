#include<iostream>
using namespace std;
void rev(int num){
    int r,digit;
    while(1<=num){
        r=num%10;
        digit=digit*10+r;
        num/=10;
    }
    cout<<"Revers number = "<<digit;
}
int main(){
    int num;
    cout<<"Enter the numbre:";
    cin>>num;
    rev(num);
}
