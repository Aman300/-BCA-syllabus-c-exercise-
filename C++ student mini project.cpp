#include<iostream>
using namespace std;
class Student{
    protected:
        string name[20];
        string Class[20];
        int roll_no[20];
        int marks[20];
        int n;
        int total;
    public:
        void Enter_data()
        {
            cout<<"Enter the number how much Student data:\n";
            cin>>n;
            if(total==0)
            {
                total+=n;
                for(int i=0;i<n;i++)
                {
                    cout<<"Enter data => "<<i+1<<endl;
                    cout<<"Enter the student name:";
                    cin>>name[i];
                    cout<<"Enter the student Class:";
                    cin>>Class[i];
                    cout<<"Enter the student roll_no:";
                    cin>>roll_no[i];
                    cout<<"Enter the student marks:";
                    cin>>marks[i];
                }
            }
            else 
            {
                for(int i=total;i<total+n;i++)
                {
                    cout<<"Enter data => "<<i+1<<endl;
                    cout<<"Enter the student name:";
                    cin>>name[i];
                    cout<<"Enter the student Class:";
                    cin>>Class[i];
                    cout<<"Enter the student roll_no:";
                    cin>>roll_no[i];
                    cout<<"Enter the student marks:";
                    cin>>marks[i];
                }
                total+=n;
            }
        }
        void Display_data()
        {
            if(total==0)
            {
                cout<<"No data is entered!!!!!!!\n";
            }
            else
            {
                cout<<"\n---------All data is Display------------\n";
                for(int i=0;i<total;i++)
                {
                    cout<<i+1<<endl;
                    cout<<"Student name => "<<name[i]<<endl;
                    cout<<"Student Class => "<<Class[i]<<endl;
                    cout<<"Student roll_no => "<<roll_no[i]<<endl;
                    cout<<"Student marks => "<<marks[i]<<endl;
                    cout<<"__________________________________\n";
                }
            }
        }
        void Sarch_data()
        {
            if(total==0)
            {
                cout<<"No data is entered!!!!!!!\n";
            }
            else
            {
                int rollno;
                cout<<"Enter the rollno :";
                cin>>rollno;
                for(int i=0;i<total;i++)
                {
                    if(rollno==roll_no[i])
                    {
                        cout<<i+1<<endl;
                        cout<<"Student name => "<<name[i]<<endl;
                        cout<<"Student Class => "<<Class[i]<<endl;
                        cout<<"Student roll_no => "<<roll_no[i]<<endl;
                        cout<<"Student marks => "<<marks[i]<<endl;
                        cout<<"__________________________________\n";
                    }
                }
            }
        }
        void update_data()
        {
            if(total==0)
            {
                cout<<"No data is entered!!!!!!!\n";
            }
            else
            {
                int rollno;
                cout<<"Enter the rollno";
                cin>>rollno;
                for(int i=0;i<total;i++)
                {
                    if(rollno==roll_no[i])
                    {
                        cout<<"\nPrevious data"<<endl<<endl;
                        cout<<i+1<<endl;
                        cout<<"Student name => "<<name[i]<<endl;
                        cout<<"Student Class => "<<Class[i]<<endl;
                        cout<<"Student roll_no => "<<roll_no[i]<<endl;
                        cout<<"Student marks => "<<marks[i]<<endl;
                        cout<<"__________________________________\n";
                        cout<<"\nEnter the new data:\n";
                        cout<<"Enter data => "<<i+1<<endl;
                        cout<<"Enter the student name:";
                        cin>>name[i];
                        cout<<"Enter the student Class:";
                        cin>>Class[i];
                        cout<<"Enter the student roll_no:";
                        cin>>roll_no[i];
                        cout<<"Enter the student marks:";
                        cin>>marks[i];
                        
                    }
                }
            }
        }
        void delete_data()
        {
            if(total==0)
            {
                 cout<<"No data is entered!!!!!!!\n";
            }
            else
            {
                int num;
                cout<<"Press 1 to delete all record"<<endl;
				cout<<"Press 2 to delete specific record"<<endl;
				cin>>num;
				if(num==1)
				{
				    total = 0;
				    cout<<"All record is deleted:\n";
				}
				else
				{
				    if(num==2)
				    {
				        int rollno;
				        cout<<"Enter the rollno:";
				        cin>>rollno;
				        for(int i=0;i<total;i++)
				        {
				            if(total==roll_no[i])
				            {
				                for(int j=i;j<total;j++)
						        {
						            roll_no[i]=roll_no[j+1];
						            roll_no[i]=roll_no[j+1];
					                roll_no[i]=roll_no[j+1];
						            roll_no[i]=roll_no[j+1];
						            roll_no[i]=roll_no[j+1];
				     	        }
					            total--;
					            cout<<"Your required record is deleted"<<endl;
				            }
				        }
				    }
				    else
				    {
				        cout<<"Invalid input";
				    }
				}
                
            }
        }
        
};
int main()
{
    Student s;
    int ch;
    while(1)
    {
        cout<<"------------Enter choices---------\n";
        cout<<"Press 1 Enter_data\n";
        cout<<"Press 2 Display_data\n";
        cout<<"Press 3 Sarch_data\n";
        cout<<"Press 4 update_data\n";
        cout<<"Press 5 delete_data\n";
        cout<<"Press 0 exit : ";
        cin>>ch;
        switch(ch)
        {
            case 1:
                s.Enter_data();
                break;
            case 2:
                s.Display_data();
                break;
            case 3:
                s.Sarch_data();
                break;
            case 4:
                s.update_data();
                break;
            case 5:
                s.delete_data();
                break;
            case 0:
                exit(0);
            default:
                cout<<"Invalid input\n";
        }
    }
    return 0;
}








