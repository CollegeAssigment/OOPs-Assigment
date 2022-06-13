#include <iostream>
using namespace std;

void isArmstrong(int num){
	int a = num%10;
	int b = ((num-a)/10)%10;
	int c = (num-b)/100;


	auto csum = (a*a*a)+(b*b*b)+(c*c*c);
	if (csum == num){
		cout<<"Armstrong";
	}
	else{
		cout<<"Not Armstrong";
	}
}


int main(){

	isArmstrong(153);

	return 0;

}