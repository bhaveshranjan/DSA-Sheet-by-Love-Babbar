#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int x;
    x=arr[n-1];
    int i=0,j=1;
    for(int i=n-1;i>0;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=x;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<",";
    }


    return 0;
}