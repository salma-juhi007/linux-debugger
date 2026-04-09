#include<iostream>
#include<unistd.h>
using namespace std;

int main()
{
	cout<<"we are in the ex2 process"<<endl;
	cout<<"PID of this process is: "<<getpid()<<"which is same as ex1"<<endl;
	return 0;
}
