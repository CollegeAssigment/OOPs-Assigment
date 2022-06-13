#include <iostream>
#include <string.h>

using namespace std;


string isPalindrome(string str){
	int len = str.length();
	for(int i=0;i<len/2;i++){

		if(str[i] != str[str.length() - i -1]){
			return "No";
		}

	}
	return "Yes";
}

int main(){

	string str;
	cout<<"Enter : ";
	cin>>str;

	cout<<isPalindrome(str);










	
	return 0;
}