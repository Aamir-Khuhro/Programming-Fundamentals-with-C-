#include <iostream>
using namespace std;
int main()
{
	int num1, num2;
	int result = 0;
	cout<<"Enter Number 1:";
	cin>>num1;
	cout<<"Enter Number 2:";
	cin>>num2;
	result = num1+num2;
	cout<<"Addittion Of "<<num1<<" and "<<num2<<" = "<<result;
	cout<<endl;
	result = num1-num2;
	cout<<"Subtraction Of "<<num1<<" and "<<num2<<" = "<<result;
	cout<<endl;
	result = num1*num2;
	cout<<"Multiplication Of "<<num1<<" and "<<num2<<" = "<<result;
	cout<<endl;
	result = num1/num2;
	cout<<"Division Of "<<num1<<" and "<<num2<<" = "<<result;
	cout<<endl;
	result = (num1/num2)*100;
	cout<<"percentage Of "<<num1<<" and "<<num2<<" = "<<result;
	cout<<endl;
	return 0;

}
