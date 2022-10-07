#include<iostream>
using namespace std;
int main()
{
 	int*ptr=new int (5);
	cout<<"value of pointer :"<<*ptr<<"\n";
	cout<<"Address of a Pointer :"<<ptr<<"\n";
	delete ptr;
	return 0;
}
