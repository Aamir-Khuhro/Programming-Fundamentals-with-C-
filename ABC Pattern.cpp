#include<iostream>
using namespace std;
int main(){
for(int i=1;i<=5;i++){
	int j; char alp;
	for(j=1,alp='A';j<=i;j++,alp++){
		cout<<alp<<" ";
	}
	cout<<endl;
}
for(int i=1;i<6;i++){
	for(char j='A';j<=(j+i);j++)
	cout<<j<<" ";
}

return 0;
}

