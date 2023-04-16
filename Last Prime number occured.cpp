#include<iostream>
#include<process.h>
using namespace std;
int main(){
//int num;
//cin>>num;
//for(int i=num-1;i>1;i--){
////	int count = 0;
//	for(int j=2;j<i;j++){
//		if(i%j==0) break;
//		else{
//			cout<<"The last prime is "<<i<<" before "<<num<<endl;
//		}
//	}
////	cout<<"The last prime is "<<i<<" before "<<num<<endl;
////	break;
//}

int num;
cin>>num;
for(int i=num-1;i>1;i--){
	int count=0;
	for(int j=2;j<i/2;j++){
		if(i%j==0)  count++;
		}
	 if(count==0){
	 	cout<<"The last prime is "<<i<<" before "<<num<<endl;
	 	break;
//	 	exit(0);   Also allpiciable here.. this will work fine..
	 }
//	 break;   No output will be shown...
	}

return 0;
}

