#include<iostream>
using namespace std;
int main(){
		int num1;
		cout<<"Input first integer: ";
		cin>>num1;
		int num2;
		cout<<"Input second integer: ";
		cin>>num2;
		if(num1!=num2) cout<<num1<<"!="<<num2<<endl;
		if(num1<num2) cout<<num1<<"<"<<num2<<endl;
		if(num1<=num2) cout<<num1<<"<="<<num2<<endl;
		else{
			if(num2!=num1) cout<<num2<<"!="<<num1<<endl;
			if(num2<num1) cout<<num2<<"<"<<num1<<endl;
			if(num2<=num1) cout<<num2<<"<="<<num1<<endl;
		}
}
