#include<iostream>
using namespace std;
struct student{
	int rollno;
	string firstname;
	string lastname;
	float marks;
	void displaystudentinfo(){
		cout<<"student name:"<<firstname<<" "<<lastname<<endl;
	cout<<"student roll="<<rollno<<endl;
	cout<<"student marks:"<<marks<<endl;	
	}
};
int main()
{
	int n;
	cout<<"enter number of students:";
	cin>>n;
	//using array of structures.
	student students[n];
	for(int i=0;i<n;i++)
	{
		cout<<"\nEnter details of students"<<i+1<<endl;
		cout<<"First name:";
		cin>>students[i].firstname;
		cout<<"last name:";
		cin>>students[i].lastname;
		cout<<"Roll Number:";
		cin>>students[i].rollno;
		cout<<"marks:";
		cin>>students[i].marks;
	}
	for(int i=0;i<n;i++)
	{
	students[i].displaystudentinfo();
}
return 0;
	}
	
	

