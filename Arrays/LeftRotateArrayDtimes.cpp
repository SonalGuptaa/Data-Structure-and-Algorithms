#include<bits/stdc++.h>
using namespace std;

// void RotateOne(int arr[], int n)
// {
//    int temp = arr[0];
//    for(int i = 1; i < n; i++)
//    {
//        arr[i - 1] = arr[i];
//    }
//    arr[n - 1] = temp;
// }

// void Rotate(int arr[], int n, int d)
// {
//     for(int i = 0; i < d; i++)
//     {
//         RotateOne(arr, n);
//     }
// }
void leftRotate(int arr[],int n,int d)
{
    int temp[d];
    for(int i=0;i<d;i++)
    {
        temp[i]=arr[i];
    }
    for(int i=d;i<n;i++)
    {
        arr[i-d]=arr[i];
    }
    for(int i=0;i<d;i++)
    {
        arr[n-d+i]=temp[i];
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    int d = 2;

    // Rotate(arr, n, d);
    leftRotate(arr,n,d);
    // Printing the rotated array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
