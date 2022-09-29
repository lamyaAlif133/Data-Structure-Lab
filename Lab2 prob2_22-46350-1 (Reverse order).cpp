#include<iostream>
using namespace std;
int main()
 {

int a1[6],a2[8],a3[10],i,j,k=0,x,tot;

cout<<"Enter elements for First array: ";

   for(i=0;i<6;i++)
    cin>>a1[i];

cout<<"Enter elements for Second array: ";
   for(i=0; i<8; i++)
      cin>>a2[i];

for(i=0; i<6; i++)
   {
      for(j=0; j<8; j++)
      {
           if(a1[i]==a2[j])
         {  tot= 0;
            for(x=0; x<k; x++)
            {
               if(a1[i]==a3[x])
            tot++;
           }

 if(tot==0)
            {
               a3[k] = a1[i];
               k++;
            }
    }
        }
           }
cout<<"\nThe Common Elements are:\n";

   for(i=0; i<k; i++)
       cout<<a3[i]<<" ";
        cout<<endl;

   return 0;
}
