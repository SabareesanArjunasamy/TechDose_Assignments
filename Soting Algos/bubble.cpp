#include<iostream>
using namespace std;
void swap(int *x,int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void bubble(int arr[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}
void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[]={5,9,7,5,6,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubble(arr,n);
    cout << "bubbled : \n";
    print(arr,n);
}