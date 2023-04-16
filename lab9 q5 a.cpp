#include <iostream>
using namespace std;
int main()
{
    int arr[10],*ptr;
    ptr=arr;
    for(int i=1;i<=10;i++)
    {
        ptr[i-1]=i;
    }

    for(int i=0;i<=9;i++)
    {
        cout<<arr[i];
    }

    return 0;
}
