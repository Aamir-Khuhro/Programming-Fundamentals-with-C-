#include<iostream>
using namespace std;
void fun1();
void fun2();
void fun3();
void fun4();
int main(){
	cout<<"***Factor***"<<endl;
	fun1();
	cout<<endl;
	cout<<endl;
	cout<<"***Leap Year***"<<endl;
	fun2();
	cout<<endl;
	cout<<endl;
	cout<<"***Vowel or Consonant***"<<endl;
	fun3();
	cout<<endl;
	cout<<endl;
	cout<<"***Check wether a character is alphabet, digit or special character***"<<endl;
	fun4();
	cout<<endl;
	cout<<endl;
	
	
	
//	if(no%5=0 && no%11=0) cout<<"Divisibel by 5 and 11";
//	else cout<<"Not divisibel by 5 and 11";
	return 0;
}


void fun1(){
	int no;
	cout<<"Number: ";
	cin>>no;
	if(no%5==0 && no%11==0) cout<<"Divisibel by 5 and 11";
	else cout<<"Not divisibel by 5 and 11";
}
void fun2(){
	int year;
	cout<<"Year: ";
	cin>>year;
	if(year%4==0){
		cout<<year<<" is a leap year...";
	}
	else{
		cout<<year<<" is not a leap year...";
	}
}
void fun3(){
	char alp;
	cout<<"Enter a letter: ";
	cin>>alp;
	if(alp=='a' || alp=='e' || alp=='i' || alp=='o' || alp=='u' || alp=='A' || alp=='E' || alp=='I' || alp=='O' || alp=='U'){
		cout<<alp<<" is vowel....";
	}
	else{
		cout<<alp<<" is consonant";
	}
}

void fun4(){
	char alp;
	cout<<"Enter a character: ";
	cin>>alp;
	if(alp=='a' || alp=='e' || alp=='i' || alp=='o' || alp=='u' || alp=='A' || alp=='E' || alp=='I' || alp=='O' || alp=='U' ||  alp=='z' || alp=='y' || alp=='x' || alp=='w' || alp=='v' || alp=='t' || alp=='s' || alp=='r' || alp=='q' || alp=='p' || alp=='n' || alp=='m' || alp=='h' || alp=='l' || alp=='g' || alp=='k' || alp=='f' || alp=='j' || alp=='d' || alp=='c' || alp=='Y' || alp=='b' || alp=='Z' || alp=='X' || alp=='W' || alp=='V' || alp=='T' || alp=='S' || alp=='R' || alp=='Q' || alp=='P' || alp=='N' || alp=='M' || alp=='L' || alp=='K' || alp=='J' || alp=='H' || alp=='G' || alp=='F' || alp=='D' || alp=='C' || alp=='B'){
	cout<<""		
	}
}






