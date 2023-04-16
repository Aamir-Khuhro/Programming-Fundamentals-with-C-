#include<iostream>
using namespace std;

int main(){
	/*Simple interest Calculator
	  By taking input from user*/
	  float p, r, t; //Declearation
	cout<<"Enter Principal Amout"<<endl;
	cin>>p;  //intialization   //Defination
	cout<<"Enter rate (Decimal form)"<<endl;
	cin>>r;
	cout<<"Enter time period"<<endl;
	cin>>t;
	float i;
	i=p*r*t;
	cout<<"The interest is = ";
	cout<<i;
}
