#include <iostream>
using namespace std;
int max(int val1, int val2) { return val1 > val2 ? val1 : val2; }

int knapsack(int w,int wt[],int val[],int n)
{
    //base condition
    if(n == 0 || w == 0) {return 0;}
    //checking weight of nth item with bag capacity
    if(wt[n-1] > w)
    {
        return knapsack(w,wt,val,n-1);
    }
    //returning max of two cases (1)inclusion (2)exclusion
    else
    {
        return max(val[n-1]+knapsack(w-wt[n-1],wt,val,n-1),knapsack(w,wt,val,n-1));
    }


}
int main()
{
    int val[] = { 3, 2, 4 };
    int wt[] = { 8, 5, 9 };
    int w = 7,n = sizeof(val)/sizeof(val[0]);
    cout << knapsack(w,wt,val,n);
    return 0;
}