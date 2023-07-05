#include<iostream>
using namespace std;

//Lecture 4 part 2 dealing with if else and switch 
// code 1

int main(){
	float a,b;
	
	cout<<"Enter 2 float values"<<endl;
	cin>>a>>b;
	if(a>0.01 && b>a){
		cout<<"True block is executed";
	}
	
	else{
		cout<<"This is the false block";
	}
	
	return 0;
	
}


