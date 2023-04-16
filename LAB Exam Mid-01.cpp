#include<iostream>
using namespace std;
int main(){
int num1,num2;
cin>>num1;
cin>>num2;
for(int i=num1;i<=num2;++i){
	if     (i==1)  cout<<"one\n";
	else if(i==2)  cout<<"two\n";
	else if(i==3)  cout<<"three\n";
	else if(i==4)  cout<<"four\n";
	else if(i==5)  cout<<"five\n";
	else if(i==6)  cout<<"six\n";
	else if(i==7)  cout<<"seven\n";
	else if(i==8)  cout<<"eight\n";
	else if(i==9)  cout<<"nine\n";
	
	if(i>9){
		if(i%2==0)  cout<<"Even\n";
		else		cout<<"Odd\n";
	}
}


return 0;
}

