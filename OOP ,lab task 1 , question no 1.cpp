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
	student s1;
	//assigning values
	s1.firstname="ESSA";
	s1.lastname="KHAN";
	s1.rollno=101;
	s1.marks=94;
	//calling member function
	s1.displaystudentinfo();
	return 0;
}
