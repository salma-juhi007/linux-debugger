#include<iostream>
using namespace std;

int main()
{
	int arr[3]={10,20,30};

	int *p=arr;

	cout<<"value of arr[0] is: "<<*p<<endl;
	cout<<"address of arr[0] is: "<<p<<endl;

	cout<<"value of arr[1] is: "<<*(p+1)<<endl;
        cout<<"address of arr[1] is: "<<(p+1)<<endl;
	
	cout<<"value of arr[2] is: "<<*(p+2)<<endl;
        cout<<"address of arr[2] is: "<<(p+2)<<endl;

	return 0;
}



