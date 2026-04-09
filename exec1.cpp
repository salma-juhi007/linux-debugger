#include<iostream>
#include<unistd.h>
using namespace std;

int main()
{
	cout<<"PID of this process is: "<<getpid()<<endl;
	char* args[]={(char*)"./ex2",NULL};
	execv("./ex2",args);
	cout<<"back to the ex1 process"<<endl;
	return 0;
}

