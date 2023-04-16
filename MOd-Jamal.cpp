#include<iostream>
using namespace std;
int main(){
	int a;
	cout<<"Enter Any five digit number ";
	//Say 48692
	cin>>a;  
	int unit_dt=a%10;  //2
	a=a/10;   //4869
	int ten_dt=a%10;  //9
	a=a/10;   //486
	int hun_dt=a%10;  //6
	a=a/10;  //48
	int tho_dt=a%10;  //8
	a=a/10;  //4
	int tet_dt=a%10;
	cout<<unit_dt<<endl;
	cout<<ten_dt<<endl;
	cout<<hun_dt<<endl;
	cout<<tho_dt<<endl;
	cout<<tet_dt<<endl;
	return 0;
}
