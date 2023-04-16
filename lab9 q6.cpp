#include <iostream>
using namespace std;
typedef int ptrs;
void Swapp(int *p1,int *p2)
{
    int a,b;
    a=*p2;
    b=*p1;
    cout<<"\nValues After swapping:\nA= "<<a<<"\nB= "<<b;

}
int main()
{
    int a,b;
    cout<<"Enter values of A and B to swap:\t\n";cin>>a>>b;
    cout<<"Values before swapping:\nA= "<<a<<"\nB= "<<b;
    ptrs *p1=&a,*p2=&b;
    Swapp(p1,p2);


    return 0;
}
