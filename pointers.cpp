#include<iostream>
using namespace std;

int main()
{
        int a=5;
        int *p=&a;

        cout<<"value of a: "<<a<<endl;
        cout<<"address of a: "<<&a<<endl;
        cout<<"value of pointer p: "<<p<<endl;
        cout<<"deferenced value of p is : "<<*p<<endl;

        return 0;
}


