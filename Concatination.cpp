#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main(){
	char s1[100];
	char s2[100];
	cout<<"Enter first name: ";
	cin.getline(s1,99);
	cout<<"Enter your last name: ";
	cin.getline(s2,99);
//	cout<<"Full Name: "<<strcat(s1,s2);
	strcat(s1," ");
	strcat(s1,s2);
	cout<<"Full Name: "<<s1;
	
	return 0;
}
