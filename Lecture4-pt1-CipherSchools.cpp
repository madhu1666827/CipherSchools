#include <iostream>
 using namespace std;
 
 // Lecture 4 conditional statements
 
 int main()
 {
 	int a,b,c,d;
 	
 	cout<<"Input two integers a and b"<<endl;
 	
 	cin>>a;
 	cin>>b;
 	
 	cout<<"Input two integers c and d"<<endl;
 	
 	cin>>c;
 	cin>>d;
 	
 	
 	cout<<(a>b && c<d)<<endl;
 	cout<<(a>b || c<d);
 	
 	//c++ interprets 1 as true and 0 as false
 	
 	
 	
 	return 0;
 }
