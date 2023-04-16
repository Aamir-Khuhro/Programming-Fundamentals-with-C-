#include<iostream>
using namespace std;
struct car{
	string color;
	int model;
	int engine;
	float price;
};
struct car_number{
	car c1;
	car c2;
};
int main(){
//	Structures in C++


//	car s1,car s2;          Bug
	car s1,s2;  
//	s1.color=blue;          Bug
	s1.color="Blue";
//	s2.color=black;         Bug 
	s2.color="Black"; 
	s1.model=2020;
//	s2.model=2021  			Bug
	s2.model=2021;
	s1.engine=234;
	s2.engine=345;
	s1.price=344555;
	s2.price=803999;
	cout<<"Car 01\n";
	cout<<"Color: "<<s1.color<<endl;
	cout<<"Model: "<<s1.model<<endl;
	cout<<"Engine: "<<s1.engine<<endl;
	cout<<"Price: "<<s1.price<<endl;
	cout<<"**************"<<endl;
	cout<<"Car 02\n";
	cout<<"Color: "<<s2.color<<endl;
	cout<<"Model: "<<s2.model<<endl;
	cout<<"Engine: "<<s2.engine<<endl;
	cout<<"Price: "<<s2.price<<endl;
	car_number r1;
	cout<<"Show "<<r1.c1.engine<<endl;
	return 0;
}
