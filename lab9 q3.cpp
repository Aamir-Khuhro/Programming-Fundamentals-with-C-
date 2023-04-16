#include <iostream>
using namespace std;

void swap(int* a, int* b){
	int c=*a;
	int d=*b;
	*a=d;
	*b=c;	
}


void BubbleSort(int* p,int  len){
	for(int i=0;i<len; i++){
		for(int j=0; j<len; j++){
			if(p[i]<p[j]){
			swap(p[i], p[j]);
			}	
		}
		
	}
	for(int i=0; i<len; i++){
		cout<<p[i]<<"  ";
	}
}

int main(){
	int a[10]={2,6,4,7,9,45,35,87,0,5};
	
	BubbleSort(a, 10);

	
}
