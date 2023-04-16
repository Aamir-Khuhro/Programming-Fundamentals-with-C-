#include<iostream>
using namespace std;
int main(){
//{  int a;
//
//		do
//		{
//		cout<<"We are fancies"<<endl;
//		cout<<"Enter 1 for continue"<<endl;
//		cin>>a;
//}
//
//	while(a==1);
//return 0;
//1
//23
//457
//78910
//11121314
	char gender;   //there is not initializer before "char" i-e "{" after mian()
do{
	cout<<"Welcome to our shop: \n";
	cout<<"Enter your gender (F/M): ";
	cin>>gender;
}
while(gender == 'F');
return 0;
}
