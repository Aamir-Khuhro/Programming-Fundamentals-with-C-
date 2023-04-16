#include <iostream>
using namespace std;
int main()
{
    int arr[10],*ptr,count=0;
    ptr=arr;
    for(int i=1;i<=10;i++)
    {
        ptr[i-1]=i;
    }
    for(int i=0;i<9;i++)
    {
        if(ptr[i]%2==0)
        {
            count+=ptr[i];
        }
    }
cout<<"Total Sum of even numbers is:\t "<<count<<endl<<endl;
    return 0;
}
