#include<iostream>
using namespace std;
int fact(int x){
    if(x==0)
        return 1;
    else
        return x*fact(x-1);
}

int main(){
    int num;
    cout<<"Enter the number:";
    cin>>num;
    int result = fact(num);
    cout<<"Factroial = "<<result;
}
