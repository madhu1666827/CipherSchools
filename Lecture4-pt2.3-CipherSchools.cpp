#include<iostream>
using namespace std;

// code 3 using of switch and break statements


int main()
{
	int a;
	cout<<"Enter some random value"<<endl;
	cin>>a;
	
switch(a)
{
case 1:
	cout<<"The value of a is 1";
	break;
case 2:
	cout<<"The value of a is 2";
	break;
case 3:
	cout<<"The value of a is 3";
	break;
default:
	cout<<"Default is always printed";
}
	
	return 0;
}
