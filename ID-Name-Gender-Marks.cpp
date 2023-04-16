#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Number of students in class: ";
	cin>>n;
	int id[n];
	string name[n];
	char gender[n];
	float marks[n];
	
	for(int i=0;i<n;i++){
		cout<<"       Profile "<<i+1<<endl;
		cout<<"CMS ID: ";
		cin>>id[i];
		cout<<endl;
		cout<<"Name: ";
		cin>>name[i];
		cout<<endl;
		cout<<"Gender: ";
		cin>>gender[i];
		cout<<endl;
		cout<<"Marks: ";
		cin>>marks[i];
		cout<<endl;
	}
	return 0;
}
