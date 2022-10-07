#include<iostream>
#include<cmath>
using namespace std;
const double pi=3.14159;
double radian;
void TrigFunc(double angle,double *_sin,double *_cos)
{
  radian=angle*(pi/180);
  cout<<"sin :"<<sin(radian);
  cout<<endl;
  cout<<"cos :"<<cos(radian);
}
int main()
{
	double angle,sin,cos;
	cout<<"pass the angle value \n";
	cin>>angle;
	TrigFunc(angle,&sin,&cos);
	return 0;	
}
