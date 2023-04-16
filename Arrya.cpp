#include<iostream>
using namespace std;
struct student{
	string name;
	float marks;
	string department;
};
int main(){
student r[3];
int n;
cout<<"Teams : ";
cin>>n;
for(int i=1;i<=n;++i){
	cout<<"<----Team "<<i<<"---->"<<endl;
	for(int j=0;j<3;j++){
		cout<<"Studetn "<<j+1<<endl;
		cout<<"Name : ";
		cin.ignore();
		getline(cin,r[j].name);
		cout<<"Marks :";
		cin>>r[j].marks;
		cin.ignore();
			cout<<"Department : ";
		getline(cin,r[j].department);
		cout<<endl;
	}
	cout<<endl<<endl;
}


return 0;
}

