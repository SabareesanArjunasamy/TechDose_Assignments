#include<iostream>
using namespace std;
int main()
{
    int num,key=0;
    cin >> num;
    for(int i=2;i<num/2;i++)
    {
        if(num%i==0)
        {
            cout << num << "not a prime";
            key=1;
            break;
        }
    }
    if(key==0){
        cout << num << "is prime";
    }
}