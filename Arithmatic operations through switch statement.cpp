#include<iostream>
using namespace std;
int main(){
	int num_1,num_2;
	char operation;
	cout<<"Enter No 1: ";
	cin>>num_1;
	cout<<"Enter No 2: ";
	cin>>num_2;
	cout<<"Operation: ";
	cin>>operation;
	switch(operation)
	{
		case '+':
			cout<<num_1<<" + "<<num_2<<" = "<<num_1+num_2;
			break;
		case '-':
			cout<<num_1<<" - "<<num_2<<" = "<<num_1-num_2;
			break;
		case '*':
			cout<<num_1<<" * "<<num_2<<" = "<<num_1*num_2;
			break;
		case '/':
			cout<<num_1<<" / "<<num_2<<" = "<<(float)num_1/num_2;
			break;
		case '%':
			cout<<num_1<<" % "<<num_2<<" = "<<num_1%num_2;
			break;
		default:
			cout<<"I can't claculate....";
	}
	
	cout<<"\nEnter an interger: ";
	int num;
	cin>>num;
	cout<<2*num;
	return 0;
}
