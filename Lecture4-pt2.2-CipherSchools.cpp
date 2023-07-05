#include<iostream>
using namespace std;
// code 2 Grade calculator through if else
int main()
{
	
	int marks;
	
	cout<<"Enter the marks"<<endl;
	cin>>marks;
	
	if(marks >= 90)
	{
		cout<<"A";
	}
	else if(marks<90 && marks >=80)
	{
		cout<<"B";
	}
	else if(marks<80 && marks>=70)
	{
		cout<<"C";
	}
	else if(marks < 70)
	{
		cout<<"Pass";
	}
	
	return 0;
}

