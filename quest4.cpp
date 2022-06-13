#include <iostream>
using namespace std;

void search(int arr[],int size,int item){
	int occ = 0;

	for (int i = 0; i < size; ++i)	{
		if (arr[i] == item)	{
			occ++;
		}
	}
	cout<<"Number of Occurance of "<<item<<" is "<<occ;
}

int main(){
	int size;
	cout<<"size : ";
	cin>>size;
	int arr[size];

	for (int i = 0; i < size; ++i){
		cout<<"Enter item at post "<<i<<" : ";
		cin>>arr[i];
	}

	search(arr,size,5);

	return 0;

}