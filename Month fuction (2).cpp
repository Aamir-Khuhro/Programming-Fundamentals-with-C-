#include<iostream>
using namespace std;
string month(int mon){
	string store;
	if(mon==1)          store="January";
	else if(mon==2)		store="Febuary";
	else if(mon==3)		store="March";
	else if(mon==4)		store="April";
	else if(mon==5)		store="May";
	else if(mon==6)		store="June";
	else if(mon==7)		store="July";
	else if(mon==8)		store="August";
	else if(mon==9)		store="September";
	else if(mon==10)	store="October";
	else if(mon==11)	store="Novermber";
	else if(mon==12)	store="December";
	return (store);
}
int main(){
	int num;
	string store;
	cout<<"Enter month No: ";
	cin>>num;
	store=month(num);
	cout<<store;
	return 0;
}
