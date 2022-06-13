#include <iostream>
using namespace std;

void cheakDisc(int a,int b,int c){
	auto disc = (b*b) - 4*a*c;

	if(disc > 0){
		cout<<"Real Roots";
	}
	else{
		cout<<"Imaginary Roots";
	}

}


int main(){

	cheakDisc(4,5,6);

	return 0;

}