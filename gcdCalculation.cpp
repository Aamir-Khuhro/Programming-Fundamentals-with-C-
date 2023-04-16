#include<iostream>
using namespace std;
int gcd(int n1, int n2);




int main(){
	int a,b;
	cout<<"Enter number1 : ";
	cin>>a;
	cout<<"Enter number2 : ";
	cin>>b;
	cout<<"GCD : "<<gcd(a,b);
}





int gcd(int n1, int n2){
	int arr1=0 , arr2=0, arr3=0, max=1;
		for(int i=1; i<=n1;i++)
		if(n1%i==0)
			arr1++;
	
	for(int i=1; i<=n2;i++)
		if(n2%i==0)
			arr2++;	
			
			
	int list1[arr1];
	
	for(int i=1,j=0; i<=n1;i++)
		if(n1%i==0){
			list1[j]=i;
			j++;
		}
			
			
	
	int list2[arr2];
	
	for(int i=1,j=0; i<=n2;i++)
		if(n2%i==0){
			list2[j]=i;
			j++;
		}

	for(int i=0; i<arr1; i++){
		for(int j=0; j<arr2; j++){
			if(list1[i]==list2[j]){
				arr3++;
			}
		}
	}
	
	int list3[arr3];
	int k=0;
	for(int i=0; i<arr1; i++){
		for(int j=0; j<arr2; j++){
			if(list1[i]==list2[j]){
				list3[k]=list1[i];
				++k;	
			}
		}
	}
	
	for(int i=0; i<arr3;i++){
		if(list3[i]>max){
			max=list3[i];
		}
	}
	
		return max;

}
