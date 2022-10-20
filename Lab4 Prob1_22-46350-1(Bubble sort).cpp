

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int myArray[10]= {9,5,8,6,1,12,7,45,15,23};
    for(int i=0; i<10-1; i++)
        for(int j=0; j<10-i-1; j++)
            if(myArray[j]>myArray[j+1])
                swap(myArray[j],myArray[j+1]);

    for(int i=0; i<10; i++)
        cout<<myArray[i]<<"\n";


    return 0;
}
