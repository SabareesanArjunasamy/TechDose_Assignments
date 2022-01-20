#include<iostream>
using namespace std;
void power(int x,unsigned int y)
{
  int res=1;
  while(y>0)
  {
    if(y%2==0){
      res=res*x;
    }
    y=y/2;
    x=x*x;
  }
  cout << res;
}
int main(){
  int x;
  unsigned int y;
  cin >> x >> y;
  power(x,y);
}