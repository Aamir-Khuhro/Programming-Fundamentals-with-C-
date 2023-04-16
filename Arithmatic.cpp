#include<iostream>
using namespace std;
void arithematic(int,int);
int main(){
	int no1,no2;
	cout<<"Enter two numbers: ";
	cin>>no1>>no2;	
	arithematic(no1,no2);
	return 0;
}
void arithematic(int x,int y){
	cout<<x<<" + "<<y<<" = "<<x+y<<endl;
	cout<<x<<" - "<<y<<" = "<<x-y<<endl;
	cout<<x<<" * "<<y<<" = "<<x*y<<endl;
	cout<<x<<" / "<<y<<" = "<<(float)x/y<<endl;
	cout<<x<<" % "<<y<<" = "<<x%y<<endl;
}
