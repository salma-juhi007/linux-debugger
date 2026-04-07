#include<iostream>
using namespace std;


void func()
{
	int x=10;
	cout<<"Address of x is: "<<&x<<endl;
}

int main()
{
	int a=5;
	cout<<"Address of a is: "<<&a<<endl;

	func();

	return 0;
}

