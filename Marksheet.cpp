#include<iostream>
using namespace std;

int main(){
	string name,fn,sch;
	char gender;
	int bir;
	float Eng1,Ps,Sin,Chem,Bio,Eng2,Isl,Math,Phy,Ur,sum1,sum2, total1,total2,per, per1;
	//Bio Data
	cout<<"Name          : ";
	cin>>name;
	cout<<"Gendr (M/F)   : ";
	cin>>gender;
	cout<<"Father's Name : ";
	cin>>fn;
	cout<<"Year of Birth : ";
	cin>>bir;
	cout<<"School 		 : ";
	cin>>sch;
	cout<<endl;
	//Nineth grading
	cout<<"NINETH MARKS & GRADE\n";
	cout<<"Engish-I   : ";
	cin>>Eng1;
	cout<<"PS         : ";
	cin>>Ps;
	cout<<"Sindhi     : ";
	cin>>Sin;
	cout<<"Chemistry  : ";
	cin>>Chem;
	cout<<"Biology    : ";
	cin>>Bio;
	sum1=Eng1+Ps+Sin+Chem+Bio;
 	cout<<"Obtained Marks="<<sum1<<endl;
	cout<<"Total Marks= ";
	cin>>total1;
	per=sum1/total1*100;
	cout<<"Percentage="<<per<<"%"<<endl;
	if(per >= 90 && per <= 100){
		cout<<"Grade=A-1\n";
	}
	else if(per >= 80 && per < 90){
		cout<<"Grade=A\n";
	}
	else if(per >= 70 && per < 80){
		cout<<"Grade=B\n";
	}
	else if(per >= 60 && per < 70){
		cout<<"Grade=C\n";
	}
	else if(per >= 50 && per < 60){
		cout<<"Grade=D\n";
	}
	else if(per < 50){
		cout<<"Grade=FAIL\n";
	}
	else{
		cout<<"Invalid input";
	}
	cout<<endl<<endl;
	
	//Matric grading
	cout<<"MATRIC MARKS & GRADE\n";
	cout<<"Engish-II   : ";
	cin>>Eng2;
	cout<<"Isl         : ";
	cin>>Isl;
	cout<<"Math        : ";
	cin>>Math;
	cout<<"Phy         : ";
	cin>>Phy;
	cout<<"Ur          : ";
	cin>>Ur;
	sum2=Eng2+Ur+Math+Phy+Isl;
 	cout<<"Obtained Marks="<<sum2<<endl;
	cout<<"Total Marks= ";
	cin>>total2;
	per1=sum2/total2*100;
	cout<<"Percentage="<<per<<"%"<<endl;
	if(per1 >= 90 && per1 <= 100){
		cout<<"Grade=A-1\n";
	}
	else if(per1 >= 80 && per1 < 90){
		cout<<"Grade=A\n";
	}
	else if(per1 >= 70 && per1 < 80){
		cout<<"Grade=B\n";
	}
	else if(per1 >= 60 && per1 < 70){
		cout<<"Grade=C\n";
	}
	else if(per1 >= 50 && per1 < 60){
		cout<<"Grade=D\n";
	}
	else if(per1 < 50){
		cout<<"Grade=FAIL\n";
	}
	else{
		cout<<"Invalid Input";
	}
	cout<<endl;
	
	//Combined grading 9&10
	float cp=(per+per1)/2;
	cout<<"Cumilative percenage (9&10)="<<cp<<"%\n";
	if(cp >= 90 && cp <= 100){
		cout<<"Final Grade=A-1\n";
	}
	else if(cp >= 80 && cp < 90){
		cout<<"Final Grade=A\n";
	}
	else if(cp >= 70 && cp < 80){
		cout<<"Final Grade=B\n";
	}
	else if(cp >= 60 && cp < 70){
		cout<<"Final Grade=C\n";
	}
	else if(cp >= 50 && cp < 60){
		cout<<"Final Grade=D\n";
	}
	else if(cp < 50){
		cout<<"Final Grade=FAIL\n";
	}
	else{
		cout<<"Invalid Input";
	}
	
	return 0;
}
