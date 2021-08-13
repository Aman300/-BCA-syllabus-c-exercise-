#include<iostream>
using namespace std;
struct Student{
    
        char name[50];
        int age;
        char Class[30];
};
	struct Student obj;
    void get_data()
    {
        cout<<"Enter the name:";
        cin>>obj.name;
        cout<<"Enter the age:";
        cin>>obj.age;
        cout<<"Enter the class:";
        cin>>obj.Class;
    }
    void show_data()
    {
        cout<<"Student name = "<<obj.name<<endl;
        cout<<"Student age = "<<obj.age<<endl;
        cout<<"Student Class = "<<obj.Class<<endl;
    }
    void Search_data()
    {
        
    }
    void Delete_Data()
    {
        
    }
    void Modify_Data()
    {
        
    }
int main()
{
    int ch;
    while(1)
    {
        cout<<"...............STUDENT MANAGEMENT SYSTEM..............\n";
        cout<<"======================================================\n";
        cout<<"0. Exit from Program\n";
        cout<<"1. get_data\n";
        cout<<"2. show_data\n";
        cout<<"3. Search_data\n";
        cout<<"4. Delete_Data \n";
        cout<<"5. Modify_Data \n";
        cout<<"Enter your choice  : ";
        cin>>ch;
        switch(ch)
        {
            case 0: exit(0);
            
            case 1: 
                get_data();
                break;
            case 2: 
                show_data();
                break;
            case 3: 
                Search_data();
                break;
            case 4: 
                Delete_Data();
                break;
            case 5: 
                Modify_Data();
                break;
                
            default :
                cout<<"Invalid choices:\n";
        }
    }
}

