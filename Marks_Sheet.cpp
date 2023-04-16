#include<iostream>
#include<string>
using namespace std;

int main(){
	string name,fn,sch;
	char gender;
	int bir;
	float Eng1,Ps,Sin,Chem,Bio,Eng2,Isl,Math,Phy,Ur,sum1,total,per;
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
	cin>>total;
	cout<<endl;
	per=sum1/total*100;
	cout<<"Percentage="<<per<<"%";
	
	if(per >= 90 && per <= 100){
		cout<<"Grade=A-1";
	}
	else if(per >= 80 && per < 90){
		cout<<"Grade=A";
	}
	else if(per >= 70 && per < 80){
		cout<<"Grade=B";
	}
	else if(per >= 60 && per < 70){
		cout<<"Grade=C";
	}
	else if(per >= 50 && per < 60){
		cout<<"Grade=D";
	}
	else if(per < 50){
		cout<<"Grade=FAIL";
	}
	
	
	
	
}
