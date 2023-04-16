#include<iostream>
using namespace std;
void grade1(){
	float quiz, mid_term, final,total,total1,total2,total3,average,per;
	cout<<"Quiz Score: ";
	cin>>quiz; cout<<"Out of "; cin>>total1;
	cout<<endl;
	cout<<"Mid-term Score: ";
	cin>>mid_term; cout<<"Out of ";  cin>>total2;
	cout<<endl;
	cout<<"Final term Score: ";
	cin>>final; cout<<"Out of "; cin>>total3;
	cout<<endl;
	total=total1+total2+total3;
	average=(quiz+mid_term+final)/total;
	per=average*100;
	if(per>=90 && per<=100){
		cout<<"Grade: A";
	}
	else if(per>=70 && per<90){
		cout<<"Grade: B";
	}
	else if(per>=50 && per<70){
		cout<<"Grade: C";
	}
	else if(per<50){
		cout<<"Grade: F";
	}
	else{
		cout<<"Invalid Score(s)....";
	}
}
void grade2(){
		cout<<"\n\n \"Other Method\" \n";
	float a,b,c,per;
	cout<<"Marks of three subjects: ";
	cin>>a>>b>>c;
	per=(a+b+c)/3;
	if(per>=90 && per<=100){
		cout<<"Grade: A";
	}
	else if(per>=70 && per<90){
		cout<<"Grade: B";
	}
	else if(per>=50 && per<70){
		cout<<"Grade: C";
	}
	else if(per<50){
		cout<<"Grade: F";
	}
	else{
		cout<<"Invalid Score(s)....";
	}
}
int main(){
grade1();
grade2();
	

	return 0;
}
