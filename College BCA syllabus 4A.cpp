#include<iostream>
using namespace std;
int rev(int num){
    int r,digit;
    while(1<=num){
        r=num%10;
        digit=digit*10+r;
        num/=10;
    }
    return digit;
}
int main(){
    int num;
    cout<<"Enter the numbre:";
    cin>>num;
    int result = rev(num);
    cout<<"Reverse number  = "<<result;
}
