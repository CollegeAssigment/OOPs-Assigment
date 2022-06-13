#include <iostream>
using namespace std;

class Employee{
public:
	void display_data(){
		cout<<"Name\t"<<"Year of Joining\t"<<"Address\t"<<"Salary"<<endl;
		cout<<name<<"\t"<<yoj<<"\t\t"<<address<<"\t"<<salary;
	}

public:
	void getData(){
		cout<<"Enter Name : ";
		cin>>name;

		cout<<"Enter YOJ : ";
		cin>>yoj;

		cout<<"Enter Address : ";
		cin>>address;

		cout<<"Enter Salary : ";
		cin>>salary;
	}

private:
	string name;
	int yoj;
	string address;
	string salary;
};


int main(){

	Employee e;
	e.getData();
	e.display_data();

	return 0;

}