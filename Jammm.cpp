#include<iostream>
using namespace std;
int main(){
	int a;
	cout<<"Enter any 5 digit number: "; //12345
	cin>>a;
	int d1= a%10;  //5
	a=a/10;  //1234
	int d2 = a%10;  //4
	a=a/10;  //123
	int d3 = a%10; //3
	a=a/10;  //12
	int d4 = a%10; //2
	a=a/10;  //1
	int d5 = a%10;  //1
	cout<<d1<<endl<<d2<<endl<<d3<<endl<<d4<<endl<<d5;
}
