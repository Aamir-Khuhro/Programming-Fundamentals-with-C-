#include<iostream>
#include<cstring>
using namespace std;
struct person{     //Structure data type user defined.. store different data types under a single name  
					//Globally defined sturuct data type
	char name[50];    //member attributes
	int age;
	float salary;
}p1,p2;  //structure variables..   //two objects/records
int main(){
//	p1.name="Aamir Ali"; // Assigning values to member vairables through member access operator
//	p1.age=23;
//	p1.salary=3434.54;
//	p2.name="Saleem Ahmed";
//	p2.age=23;
//	p2.salary=76454.54;
//	cout<<"\nName: "<<p1.name<<endl;
//	cout<<"Age: "<<p1.age<<endl;
//	cout<<"Salary: "<<p1.salary<<endl;
//	cout<<"Name: "<<p2.name<<endl;
//	cout<<"Age: "<<p2.age<<endl;
//	cout<<"Salary: "<<p2.salary<<endl;
// Structure Initialization.... 
//  Assignment can be made in of two structures
person p3={"Nitesh Kumar",18,343.434};
cout<<endl<<"Name: "<<p3.name<<endl<<"Age: "<<p3.age<<endl<<"Salary: "<<p3.salary<<endl;
cout<<endl;
cout<<"Name: ";
cin.get(p1.name,30);
cout<<"Age: ";
cin>>p1.age;
cout<<"Salary: ";
cin>>p1.salary;
cout<<endl;
cout<<"    Dispaly Entered Information"<<endl;
cout<<"Name: "<<p1.name<<endl;
cout<<"Age: "<<p1.age<<endl;
cout<<"Salary: "<<p1.salary<<endl;

cout<<endl;
p2=p1;

cout<<"Name: "<<p2.name<<endl;
cout<<"Age: "<<p2.age<<endl;
cout<<"Salary: "<<p2.salary<<endl;	
	
	
	
	
	return 0;
}
