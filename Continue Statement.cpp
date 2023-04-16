#include<iostream>
using namespace std;
int main(){
for(int i=1;i<30;i++){
	if(i%2==0)  continue;
	cout<<i<<" ";
}


cout<<endl<<"----------------------------------------------------"<<endl;
for(int i=1;i<30;i++){
	if(i%2!=0)  continue;
	cout<<i<<" ";
}


cout<<endl<<"----------------------------------------------------"<<endl;
for(int i=1;i<30;i+=2){
	cout<<i<<" ";
}


cout<<endl<<"----------------------------------------------------"<<endl;
for(int i=2;i<30;i+=2){
	cout<<i<<" ";
}
cout<<endl<<"----------------------------------------------------"<<endl;
return 0;
}

