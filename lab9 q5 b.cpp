#include <iostream>
using namespace std;
int main()
{
    int arr[10],*ptr,input;
    ptr=arr;
    for(int i=1;i<=10;i++)
    {
        ptr[i-1]=i;
    }

    cout<<"Enter value:\t";
    cin>>input;
    for(int i=0;i<9;i++)
    {
        if(input==ptr[i])
        {
            cout<<"Address: "<<&ptr[i]<<" Value : "<<ptr[i];
        }
    }

    return 0;
}
