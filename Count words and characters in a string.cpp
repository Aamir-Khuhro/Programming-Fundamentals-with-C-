#include<iostream>
//#include<process.h>
#include<conio.h>
using namespace std;
int main(){
int c_ch=-1, c_word=1;
char ch;
while(ch!='\r'){
	ch=getche();
	if(ch==' ')
		c_word++;
	else 
		c_ch++;
}
cout<<endl<<"Characters in string : "<<c_ch;
cout<<endl<<"Words in string      : "<<c_word;
return 0;
}

