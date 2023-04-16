#include<iostream>
using namespace std;
int main(){

int a=23;
a+++7;
cout<<a<<endl;

cout<<"What are you doing? "<<endl<<endl;
cout<<"Enter 1 for watching tv. "<<endl;
cout<<"Enter 2 for eating meal. "<<endl;
cout<<"Enter 3 for watching tv and eating meal. "<<endl;
int check;
cout<<"Enter number : ";
cin>>check;
if(check==1){
	if(!(1 && 0)){
		cout<<"Good habit...";
	}
	else{
		cout<<"Bad habit...";
	}
}
else if(check==2){
	if(!(0 && 1)){
		cout<<"Good habit...";
	}
	else{
		cout<<"Bad habit...";
	}
}
else if(check==3){
	if(!(1 && 1)){
	cout<<"Good habit...";
}
	else{
		cout<<"Bad habit...";
	}
}
return 0;
}

