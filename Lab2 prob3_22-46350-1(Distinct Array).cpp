#include <iostream>
using namespace std;

void printDistinct(int arr[], int n)
{

    for (int i=0; i<n; i++)
    {
        int j;
        for (j=0; j<i; j++)
           if (arr[i] == arr[j])
               break;

        if (i == j)
          cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {1, 5, 7, 4, 9, 20, 4, 1, 20};
    int n = sizeof(arr)/sizeof(arr[0]);
    printDistinct(arr, n);
    return 0;
}
