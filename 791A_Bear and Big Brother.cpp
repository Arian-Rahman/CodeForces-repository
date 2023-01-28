#include<iostream>
using namespace std;
int a,b,i;
int main()
{
  cin>>a>>b;
  while(a<=b){
    a*=3,b*=2,i++;
    };
  cout<<i;
}