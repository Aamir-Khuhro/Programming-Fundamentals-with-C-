#include <iostream>
using namespace std;
int main()
{
    int *p[5], arr[5]={1,2,3,4,5};

    for(int i=0;i<5;i++){
        p[i]=&arr[i];
    }
    for(int i=0;i<5;i++){

    cout<<"\n\nValue : "<<arr[i];
    cout<<"\nAddress : "<<p[i]<<endl<<endl;}
    return 0;
}
