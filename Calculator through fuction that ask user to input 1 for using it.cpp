#include<iostream>
using namespace std;
void calculator();
int main(){
	cout<<"Here you are in main fuction";
	cout<<endl;
	cout<<"Press 1 to use calcualor.....";
	int no;
	cin>>no;
	for(int i=1; i<n=no; )
	{
		
		if(no == 1)
		{
			calculator();
			cout<<"Press 1 to use calcualor.....";
			cin>>no;
		}
		
	else{
			cout<<"Thanks for using our service....";
		}
		
	}
	
	
	return 0;
}
void calculator(){
	int x,y;
	cout<<"Enter 1st no: ";
	cin>>x;
	cout<<"Enter 2nd no: ";
	cin>>y;
	cout<<"Sum of two numbers: ";
	cout<<x+y<<endl;
	cout<<"Product of two numbers: ";
	cout<<x*y<<endl;
	cout<<"Differece of two numbers: ";
	cout<<x-y<<endl;
	cout<<"Divisio of two numbers: ";
	cout<<x/y<<endl;
}
