#include<bits/stdc++.h>
using namespace std;
char a[101];
int u=0,l=0;
int main()
{
  cin>>a;
  for(int i=0;i<strlen(a);i++)isupper(a[i])?u++:l++;
  cout<<(u<=l?strlwr(a):strupr(a));
}