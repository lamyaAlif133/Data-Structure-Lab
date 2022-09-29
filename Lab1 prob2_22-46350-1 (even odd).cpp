#include<iostream>
using namespace std;
int main()
{
    int arr[50],n;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enters the elements of array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"\nEeven numbers are: ";
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            cout<<arr[i]<<" ";
        }
    }
    cout<<"\nOdd numbers are: ";
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==1)
        {
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}
