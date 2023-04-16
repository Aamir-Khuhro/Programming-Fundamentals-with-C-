#include<iostream>
#include<cstring>
using namespace std;
struct Product{
	char name[50];
	int model;
	float salary;
};
int main(){
	Product p[10];
	for(int i=0;i<10;i++)
	{
		cout<<"RECORD"<<i+1<<endl;
		cout<<"Name: ";
		cin.get(p[i].name,50);
		if(p[i].name=="quit")
		break;
		cout<<"Model: ";
		cin>>p[i].model;
		cout<<"Salary: ";
		cin>>p[i].salary;
		cin.ignore();
	}
	
	return 0;
}



