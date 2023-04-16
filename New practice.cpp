#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main(){
	char s[40]="Saleem";
	int n;
	n=strlen(s);
	cout<<"Word: ";
	for(int i=0;i<n;i++){
		cout<<s[i];
	}
	cout<<endl;
	cout<<"Reverse: "<<strrev(s)<<endl;
	cout<<"Lower: "<<strlwr(s)<<endl;
	cout<<"Upper: "<<strupr(s)<<endl;
	cout<<"Lenth: "<<strlen(s)<<endl;
	cout<<"Copying: "<<strcpy(s,"Copy")<<endl;
	cout<<"Comapring: "<<strcmp(s,"Copy")<<endl;
	cout<<"Concatinate: "<<strcat(s,"Saleem")<<endl;
	
	string str("Aamir");   //Index based calculation is done in stirng functions
	string aim="Saleem";
	cout<<str+" "+aim<<endl;
	cout<<"Length of Aamir: "<<str.length()<<endl;
	cout<<"Replacing: "<<str.replace(2,3,"qib")<<endl;
	cout<<"Substrig: "<<aim.substr(2,4)<<endl;
	cout<<"Erase: "<<aim.erase(2,2)<<endl;
	cout<<"Find: "<<str.find("q")<<endl;
	string my="Aamir";
	cout<<"Assign: "<<my.assign("Ahmad")<<endl;
	string yu;
	yu.assign(my,0,3);
	cout<<yu<<endl;
	cout<<"Conat: "<<yu.append("Saleem",2,4);
	
	
	
	cout<<endl<<endl;
	string name;
	int m;
	cout<<"enter num ";
	cin>>m;
	cout<<"enter name ";
	getline(cin,name);
	cin.ignore();
//	cout<<"Copying: "<<str("Aamir",2,3);
	return 0;
}
