#include<iostream>
using namespace std;
int main(){
//	int i,j,k,n,q;
//	cout<<"Enter 5 values on the same line: ";
//	cin>>i;
//	cin>>j;
//	cin>>k;
//	cin>>n;
//	cin>>q;
//	if((i=2*j) || (j<k && j<n) || (q<0)){
//		cout<<"hello";
//	}
//	
//	int num;
//	cout<<endl;
//	cin>>num;
//	if(!(num>=6 && num<=9)){
//		cout<<"Hello";
//	}
//	cout<<endl;
	int w=3,z=5;
	w=w+2*z+4;
	int m=3,f=5;
	m+=2*f+4;
	cout<<"My form: "<<w<<endl<<"Given form: "<<m;
	
	int a=5,b=6;
	a=(b++)+3;
	cout<<endl<<a<<endl;
	b=--a;
	cout<<b<<endl;
	cout<<endl<<"a="<<a<<endl<<"b="<<b;
	return 0;
}
