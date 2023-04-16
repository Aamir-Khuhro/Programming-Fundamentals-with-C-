#include<iostream>
using namespace std;
void sqr(void);
int main(){
	cout<<"We are here in main function"<<endl;
	cout<<"How many iterations do you want in downward star pattern?\n";
	int it;
	cin>>it;
	for(int i=1;i<=it;i++){
		for(int j=1;j<=i;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"\"Welcome to Square Calculator\"";
	cout<<endl;
	sqr();
	return 0;
}

void sqr(void){
	cout<<"Enter a number: ";
	int no;
	cin>>no;
	int sqr;
	sqr=no*no;
	cout<<"Square of given number is "<<sqr;
}
