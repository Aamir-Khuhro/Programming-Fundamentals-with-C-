#include<iostream>
using namespace std;
int main(){
	//12345
	int a,b,c,d,e,f,g,h,i,j,k,l,m;
	cout<<"Enter any 5 digit number: ";
	cin>>a;
	b=a%10;     //       (5)     //
	c=a-b;      //12340
	d=c/10;     //1234
	e=d%10;		//       (4)     //
	f=d-e;		//1230
	g=f/10;		//123
	h=g%10;		//       (3)     //
	i=g-h;		//120
	j=i/10;		//12
	k=j%10;     //       (2)     //
	l=j-k;      //10 
	m=l/10;		// 		 (1)     //
	cout<<b<<endl<<e<<endl<<h<<endl<<k<<endl<<m;6
}
