#include<iostream>
using namespace std;
void Create(int &i)
{    
    int*Darray;
	Darray=new int[i];
	for(int x=0;x<i;x++)
	{
		cout<<"Enter element ["<<x+1<<"] :";
		cin>>Darray[x];
	}
	cout<<endl;
	cout<<"------the array element------\n";
	 for(int x=0;x<i;x++)
	{
        cout<<"element ["<<x+1<<"] :";		
		cout<<Darray[x]<<endl;
	}
	 
	delete []Darray;
	cout<<"\n";
}
void resize(int&i)
{
	int x;
	cout<<"press 1 for resize /0 for p end\n";
	cin>>x;
	if (x==1)
	{
		int temp=i;
		int *a=&i;
		
		
		cout<<"enter size of array\n";
		cin>>*a;	
		for(int x=0;x<i;x++)
    {
    	cout<<"Enter element ["<<temp+1<<"] :";
    	int Darray[x];
        cin>>Darray[x];
	}
	for(int x=0;x<i;x++)
    {
    	cout<<"Enter element ["<<temp+1<<"] :";
    	int Darray[x];
        cout<<Darray[x]<<endl;
	}
    } 
}
int main()
{
	int p;
	int*i=&p;
	cout<<"enter the array size\n";
	cin>>*i;
	Create(p);
	resize(p);
}  
