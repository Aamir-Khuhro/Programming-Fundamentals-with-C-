#include<iostream>
using namespace std;
int main(){
	int a,b,c,max;
	cout<<"Enter three integers seperated with space"<<endl;
	cin>>a>>b>>c;
	max=a;
	if(b>max) max=b;  //Don't worry if c becomes maximum. Maximum will get updated
	if(c>max) max=c;
	cout<<"Largest: "<<max;
	
	
	return 0;
}
