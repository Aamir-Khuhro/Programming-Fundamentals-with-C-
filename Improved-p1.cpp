#include<iostream>
#include<fstream>
#include<string>

using namespace std;
int main(){
//	Create and open file
//	ofstream Mywritefile("index.txt");
	ofstream Mywritefile;
	Mywritefile.open("index.txt");
	
//Write to the file
	Mywritefile<<"Aamir Ali\nAbdulRehman\nAbdul Waheed\nZubair";
	
//Read form the file
	string text;
	ifstream MyReadfile("Rehman.txt");
	while(getline(MyReadfile,text)){
		cout<<text;
	}
	
	

	return 0;
}
