#include<iostream>
using namespace std;
int NetSal(int,float);
int main(){
	string name;
	int age;
	float salary;
	int nets;
	cout<<"Name: ";
	cin>>name;
	cout<<"Age: ";
	cin>>age;
	cout<<"Salary: ";
	cin>>salary;
	cout<<"Net Salary: "<<NetSal(age,salary);
	
	
	
	return 0;
}
int NetSal(int x,float y){
	int nets=x*100+1.1*y;
	return nets;
}
