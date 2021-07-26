#include<iostream>
using namespace std;
struct Student{
    string Name_of_emloyee;
    int age;
    int designation;
    float salary;
};
int main(){
    struct Student s;
    cout<<"Enter the Name_of_emloyee:";
    getline(cin,s.Name_of_emloyee);
    cout<<"Enter the age:";
    cin>>s.age;
    cout<<"Enter the designation:";
    cin>>s.designation;
    cout<<"Enter the salary:";
    cin>>s.salary;
    
    cout<<"Name of emloyee = "<<s.Name_of_emloyee<<endl;
    cout<<"Age of employee = "<<s.age<<endl;
    cout<<"Employee designation = "<<s.designation<<endl;
    cout<<"Employee = salary = "<<s.salary<<endl;
}
