#include<iostream>
#include<unistd.h>
using namespace std;

int main()
{
	fork();
	cout<<"hello salma"<<endl<<"PID: "<<getpid()<<endl;
	return 0;
}


