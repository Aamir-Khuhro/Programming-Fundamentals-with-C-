#include<iostream>
using namespace std;
char calc_grade(int per);
int main(){
	int per,check;
	char store;
	do{
	cout<<"Enter your Percentage(%): ";
	cin>>per;
	store=calc_grade(per);
	cout<<"Your grade is "<<store;
	cout<<"\nEnter 1 to contune and 0 to exit....";
	cin>>check;
	}
	while(check!=0);
	return 0;
}char calc_grade( int per){
	char grade;
	if(per>=0 && per<=100){
		if(per>=90){
		grade='A';
	}
	else if(per>=80){
		grade='B';
	}
	else if(per>=70){
		grade='C';
	}
	else if(per>=60){
		grade='D';
	}
	else {
		grade='F';
	}
	}
	else{
		cout<<"Invalid percentage entered.....";
	}
	return grade;
}
