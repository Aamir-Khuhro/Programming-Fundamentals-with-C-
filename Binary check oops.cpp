#include<iostream>
#include<string>
using namespace std;
class binary{
	string s;
	public:
		void read(void);
		void chec_bin(void);
};
void binary :: read(void){
	cout<<"Enter a number : ";
	cin>>s;
}
void binary :: chec_bin(void){
	for(int i=0;i<s.length();i++){
		if(s.at(i)!='0' && s.at(i)!='1'){
			cout<<"Incorrect Bianry format...";
			exit(0);
		}
	}
}
int main(){
	binary obj1;
	obj1.read();
	obj1.chec_bin();


return 0;
}

