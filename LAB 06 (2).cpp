#include<iostream>
using namespace std;
int main(){
int rows;
cout<<"Enter the number of rows: ";
cin>>rows;
for(int i=1;i<=rows;i++)
{
	for(int j=rows;j>=i;j--)
	cout<<"*";
    cout<<endl;
}

cout<<endl;

int i,k;
for(i=1, k=1 ; i<5; i++, k++){
	for(int j=1;j<=i;j++){
		cout<<k<<" ";
	}
	cout<<endl;
}


return 0;
}

