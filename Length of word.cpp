#include<iostream>
using namespace std;
int main(){
	int check;
	do{
	char input[100];
	cout<<"Enter a word: ";
	cin>>input;
	int i=0,L=0;
	while(input[i]!='\0'){
		i++;
		L++;
	}
	for(int i=1;i<=L;i++){
		cout<<input[L-i];
	}
	cout<<"\nDo you want to continue? (y/n)";
	char opt;
	cin>>opt;
	if(opt=='y' || opt=='Y'){
		check=1;
	}
	else{
		check=0;
	}
	}
	while(check==1);
	return 0;
}
