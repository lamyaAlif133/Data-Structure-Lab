#include <iostream>
using namespace std;
int main()
{
    cout<<"Enter the size of first array: "<<endl;
    int p,q;
    cin>>p;

    cout<<"Enter the size of second array: "<<endl;
    cin>>q;

    int a[p];
    int b[q];
    int c[p+q];

   cout<<"\nEnter the elements of first array: "<<endl;
    for(int i=0;i<p;i++)
        {
        cin>>a[i];
        }

    cout<<"\nEnter the elements of second array: "<<endl;

    for(int i=0;i<q;i++)
    {
        cin>>b[i];
    }

    for(int i=0;i<p;i++)
    {
        c[i]=a[p-(i+1)];
 }
    int k=q-1;
    for(int i=p;i<p+q;i++)
    {
        c[i]=b[k];
        k--;
    }
    for(int i=0;i<p+q;i++)
    {
        cout<<c[i]<<" ";
    }



}

