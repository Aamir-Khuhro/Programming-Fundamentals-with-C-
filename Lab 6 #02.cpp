#include<iostream>
using namespace std;
int main(){
int rows;
cout<<"Enter number : ";
cin>>rows;
int i,start=1;
for(i=1; i<=rows; i++)
{
	for(int j=1;j<=i;j++){
		cout<<start<<" ";
		++start;
		
	}
	cout<<endl;
}

return 0;
}
