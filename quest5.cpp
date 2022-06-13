#include <iostream>
using namespace std;

class Student{
public:
	void display_data(){
		cout<<endl;
		cout<<"Maths     : "<<maths<<endl;
		cout<<"Physics   : "<<physics<<endl;
		cout<<"Chemistry : "<<chemistry<<endl;
		cout<<"Biology   : "<<biology<<endl;
		cout<<"English   : "<<english<<endl;
	}

public:
	void getData(){
		cout<<endl<<"MARKS"<<endl;
		cout<<"Maths     : ";
		cin>>maths;
		cout<<"Physics   : ";
		cin>>physics;
		cout<<"Chemistry : ";
		cin>>chemistry;
		cout<<"Biology   : ";
		cin>>biology;
		cout<<"English   : ";
		cin>>english;
	}

private:
	int maths;
	int physics;
	int chemistry;
	int biology;
	int english;
};


int main(){

	Student arr[3];
	for (int i = 0; i < 3; ++i)	{
		cout<<"Object "<<i<<endl;
		arr[i].getData();
	}
	for (int i = 0; i < 3; ++i)	{
		cout<<endl<<"Detail "<<i<<endl;
		arr[i].display_data();
	}

	return 0;

}