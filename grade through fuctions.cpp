#include<iostream>
using namespace std;
char cal_grades(float);
int main(){
	cout<<"Enter your marks: ";
	float mark;
	char grade;
	cin>>mark;
	grade=cal_grades(mark);
	cout<<"Your grade is "<<grade;
}
char cal_grades(float a){
	if(a>=0 && a<=100){
		
			if(a>=93){
				char g='A+';
				cout<<g;
			}
	     	if(a>=87){
				char g='A-';
				cout<<g;
			}
			if(a>=78){
				char g='B+';
				cout<<g;
			}
			if(a>=72){
				char g='B-';
				cout<<g;
			}
			if(a>=68){
				char g='C+';
				cout<<g;
			}
			if(a>=60){
				char g='C-';
				cout<<g;
			}
			if(a<60){
				char g='F';
				cout<<g;
			}	
	      }
	      else{
	      	cout<<"Invalid Input";
		  }
		  return 'g';
}
