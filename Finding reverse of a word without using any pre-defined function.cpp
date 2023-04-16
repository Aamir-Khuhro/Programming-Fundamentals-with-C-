#include<iostream>
using namespace std;
int main(){
	cout<<"Enter a word: ";
	char input[100];
	cin>>input;
	int i=0,length=0;
	while(input[i]!='\0'){
		++i;
		length++;
	}
	char reverse[length];
	for(int i=0;i<length;i++){
		reverse[i]=input[length-1-i];
	}
	cout<<"Reverse: ";
	for(int i=0;i<length;i++){
		cout<<reverse[i];
	}
	int palindrome=0;
	for(int i=0;i<length;i++){
		if(reverse[i]==input[i]){
			++palindrome;
		}
	}
	if(palindrome==length){
		cout<<"\nPalidrome as well..";
	}
	return 0;
}
