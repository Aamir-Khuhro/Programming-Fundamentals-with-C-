//  Nested structures....
#include<iostream>
using namespace std;
struct student{
	int id;
	string name;
	float marks;
};
struct records{
	student r1;
	student r2;
};
int main(){
	
records p;

p.r1.id=01;
p.r1.name="Aamir Ali";
p.r1.marks=23.25;

p.r2.id=02;
p.r2.name="Aabid Ali";
p.r2.marks=30.25;

cout<<"Record 01"<<endl;
cout<<"ID   : "<<p.r1.id<<endl;
cout<<"Name : "<<p.r1.name<<endl;
cout<<"Marks: "<<p.r1.marks<<endl<<endl;


cout<<"Record 02"<<endl;
cout<<"ID   : "<<p.r2.id<<endl;
cout<<"Name : "<<p.r2.name<<endl;
cout<<"Marks: "<<p.r2.marks<<endl<<endl;
return 0;
}

