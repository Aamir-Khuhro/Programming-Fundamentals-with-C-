#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"Enter 1st no: ";
	cin>>a;
	cout<<"Enter 2nd no: ";
	cin>>b;
	cout<<"Enter 2nd no: ";
	cin>>c;
	if(a<b && a<c)
		cout<<a<<endl;
	if(b<c && b<a)
		cout<<a<<endl;
	if(c<a && c<b)
		cout<<a<<endl;
}
