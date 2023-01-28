#include<cstdio>
#include<bits/stdc++.h>

using namespace std;

int main()
{ 
  int T;
  cin>>T;
  while(T--){
  string s;
  cin>>s;
  cout<<(s.size()>10?s[0]+to_string(s.size()-2)+s[s.size()-1]:s)<< endl;
}
}

