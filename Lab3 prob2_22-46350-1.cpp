#include<iostream>
using namespace std;
int main()
{

    int x,temp;
    string arr;

    cout<<"Enter the Sentence: ";
    getline(cin,arr);

    for(int i=0; i<arr.size(); i++)
        cout<<arr[i];

    cout<<"\nEnter The Number of Changing Value: ";
    cin>>x;

    for(int i=2;i<arr.size();i+=3)
    {
        temp=arr[i];
        arr[i]=char(temp+x);

    }
    cout<<"\nThe Changed Sentence is: ";

    for(int i=0;i<arr.size();i++)
        cout<<arr[i];


}
