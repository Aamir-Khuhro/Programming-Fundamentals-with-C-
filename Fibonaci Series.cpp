#include<iostream>
using namespace std;
int main(){
	int a1=0;
	int a2=1;
	int a3=a1+a2;
	int a4=a2+a3;    //Tn=(Tn-2)+(Tn-1);
	int a5=a3+a4;
	int a6=a4+a5;
	int a7=a5+a6;
	int a8=a6+a7;
	cout<<a1<<endl;
	cout<<a2<<endl;
	cout<<a3<<endl;
	cout<<a4<<endl;
	cout<<a5<<endl;
	cout<<a6<<endl;
	cout<<a7<<endl;
	cout<<a8<<endl;
	cout<<endl;
	cout<<"Enter Numbers of terms you want in Fibanoci Series: ";
	int terms;
	cin>>terms;
	int fib[terms+1];
	fib[1]=0;
	fib[2]=1;
	cout<<fib[1]<<" "<<fib[2]<<" ";
	for(int i=3;i<=terms;i++){
		fib[i]=fib[i-2]+fib[i-1];
		cout<<fib[i]<<" ";
	}
	return 0;
}
