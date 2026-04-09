#include<iostream>
#include<unistd.h>
using namespace std;

int main()
{
	pid_t pid=fork();
	if(pid == 0)
	{
		cout<<"child process"<<endl;
	}
	else
	{
		cout<<"parent process"<<endl;
	}

	return 0;
}
