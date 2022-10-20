#include<iostream>
using namespace std;

 int binarySearch(int array[],int size,int searchValue)
 {
     int low=0;
     int high=size-1;

     int mid;
     while(low<=high)
     {
     mid=(low+high)/2;

     if(searchValue==array[mid])
     {
         return mid;
     }
     else if(searchValue>array[mid])
     {
        low=mid+1;
     }
     else
     {
         high=mid-1;
     }
   }
   return -1;
 }
int main()
{
    int a[]={12,22,34,47,55,64,82,95};

    int userValue;

    cout<<"Enter an integer: ";
  cin>>userValue;

  int result=binarySearch(a,8,userValue);
  if(result>=0)
  {
    cout<<"The number "<<a[result]<<" was found in position "<<result<<endl;
  }
    else{
        cout<<"The number "<<userValue<<" was not found. "<<endl;
    }
}
