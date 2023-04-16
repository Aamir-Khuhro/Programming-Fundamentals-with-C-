#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
using namespace std;
int main(){
	char str[100];
	cin.get(str,99);
	cout<<"System gives length: "<<strlen(str);
	cout<<endl<<"Let's now find length by Null Character Concept..."<<endl;
	int L=0;
	while(str[L]!='\0'){     //while(str[L]!="\0"){  //Here double quotes are mistake
		L++;
	}
	cout<<"Null Character Length: "<<L<<endl;
	
	
	return 0;
}
