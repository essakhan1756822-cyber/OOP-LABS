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
	//using pointer to make structure
	student*ptr=new student;
	cout<<"Enter first name:";
	cin>>ptr->firstname;
	cout<<"Enter last name:";
	cin>>ptr->lastname;
	cout<<"Enter Roll Number:";
	cin>>ptr->rollno;
	cout<<"Enter marks:";
	cin>>ptr->marks;
	//calling member function using pointer
	ptr->displaystudentinfo();
	return 0;
}
