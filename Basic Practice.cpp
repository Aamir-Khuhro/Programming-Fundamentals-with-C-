#include<iostream>
using namespace std;
int main(){
	int Xe=23; 
	cout<<"Number "<<Xe<<endl;   //What about variable name rule
//	int 2x=34;   //Error
//	cout<<2x;
	cout<<"Welcome to Pakistan \f"<<endl;
	cout<<"Welcome to Pakistan \v"<<endl;
	cout<<"Welcome to Pakistan \\"<<endl;
	const float PI=3.14;
	cout<<"Pi="<<PI;
//	short int 23;   //Not named
//	short signed int=-45;  //Identifier not mentioned
	short unsigned int var=23;
	short signed int Var=-34;
	cout<<"Sum of "<<var<<" and "<<Var<<" is "<<var+Var;
	
	
	
	short unsigned int age;
	cout<<"Enter your age: ";
	cin>>age;
	cout<<4*age;  //If not given right input incorrect output will be shown
//	PI=34;   //Error
//	system("PAUSE");
	return 0;
}
