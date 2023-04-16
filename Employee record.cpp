#include<iostream>
using namespace std;
struct emp{
	string name;
	string destination;
	float age;
	int salary;
} ;       //}emp Si; would'nt work here because it doest not know what actually
			// i is.
int main(){
	char opt;
//	Employess DATA
cout<<"Employee Data Collector\n";
	do{
		for(int i=1;i<2000;i++){
			emp Si;
		cout<<"Name: ";
		cin>>Si.name;
		cout<<"Destination: ";
		cin>>Si.destination;
		cout<<"Age: ";
		cin>>Si.age;
		cout<<"Salary: ";
		cin>>Si.salary;
		cout<<"Do you want to continue? (y/n)";
		cin>>opt;
							}
	 }
	while(opt=='y' && opt!='n');
	
	
	
	return 0;
}
