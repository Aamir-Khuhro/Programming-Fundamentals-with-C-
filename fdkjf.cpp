#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	int num;
	cout<<"Enter ID: ";
	cin>>num;
	cout<<"Enter Name;";
	getline(cin,s);
	cout<<"Your name is "<<s;
	cout<<"\n Age: ";
	float d;
	cin>>d;
	return 0;
}
