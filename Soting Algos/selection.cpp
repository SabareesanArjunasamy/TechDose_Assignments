#include<iostream>
using namespace std;
void swap(int *x,int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void selection(int arr[],int n)
{
    int i,j,min_index;
    for(i=0;i<n-1;i++)
    {
        min_index=i;
        for(j=i+1;j<n-1;j++)
        {
            if(arr[min_index]>arr[j])
            {
                min_index=j;
            }
        }
        swap(&arr[min_index],&arr[i]);
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
    int arr[]={58,77,24,45,11,10,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    selection(arr,n);
    cout << "soted array \n";
    print(arr,n);
    return 0;
}