#include<iostream>
using namespace std;
void month(int);
int main(){
	int no;
	cout<<"Enter month no: ";
	cin>>no;
	month(no);
	
}
void month(int x){
	if(x==1){
		cout<<"January";
	}
	if(x==2){
		cout<<"Febuary";
	}
	if(x==3){
		cout<<"March";
	}
	if(x==4){
		cout<<"April";
	}if(x==5){
		cout<<"May";
	}if(x==6){
		cout<<"June";
	}if(x==7){
		cout<<"July";
	}
	if(x==8){
		cout<<"August";
	}
	if(x==9){
		cout<<"September";
	}if(x==10){
		cout<<"October";
	}
	if(x==11){
		cout<<"November";
	}
	if(x==12){
		cout<<"December";
	}
}
