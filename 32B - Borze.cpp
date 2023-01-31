#include<bits/stdc++.h>
using namespace std;
string s;
//string c=".";
int i=0;
int main()
{   
  cin>>s;

  while(i<s.length()){
    if(s[i]=='.') cout<<"0",i++; 
    else 
        if(s[i+1]=='.') cout<<"1",i+=2; 
        else   cout<<"2",i+=2;

  }
}