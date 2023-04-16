#include<iostream>
using namespace std;
void p1(){
	cout<<"Enter a number: ";
	int num;
	cin>>num;
	for(int i=num;i>=1;i--){
		for(int j=1;j<=num;j++){
			cout<<"*";
		}
		cout<<endl;
	}
}
void p2(){
	cout<<"Enter a number: ";
	int num;
	cin>>num;
	for(int i=num;i>=1;i--){
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
}
void p3(){
	cout<<"Type number: ";
	int num;
	cin>>num;
	for(int i=1;i<=num;i++){
		for(int j=1;j<=num;j++){
			cout<<"*";
		}
		cout<<endl;
	}
}
void p4(){
	cout<<"Type number: ";
	int num;
	cin>>num;
	for(int i=1;i<=num;i++){
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
}


}void p7(){
	cout<<"Type number: ";
	int num;
	cin>>num;
	for(int i=1;i<=num;i++){
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
}void p8(){
	cout<<"Type number: ";
	int num;
	cin>>num;
	for(int i=1;i<=num;i++){
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
}
int main(){
	p1();
	cout<<endl;
	p2();
	cout<<endl;
	p3();
	cout<<endl;
	p4();
	cout<<endl;
//	p5();
//	cout<<endl;
	p6();
	cout<<endl;
	p7();
	cout<<endl;
	p8();
	cout<<endl;
	return 0;
}
