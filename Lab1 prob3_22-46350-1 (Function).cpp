#include<iostream>
using namespace std;
int main()
{
    int Start,End;
    cout<<"Input Starting point: ";
    cin>>Start;

    cout<<"Input Ending point: ";
    cin>>End;

    if(Start>End)
    {
        cout<<"The number cannot be entered ";
    }
    else
        {
    if(Start%2==0)
    {
        Start++;
    }
    do{
        cout<<Start<<"\t";
        Start+=2;
    }
    while(Start<=End);
        }
}
