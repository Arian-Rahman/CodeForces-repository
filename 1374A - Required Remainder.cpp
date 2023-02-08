#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n,x,y;
    cin>>t;
    while(t--)
   { cin>>x>>y>>n;
    cout<< (n-((n-y)%x))<<endl;}
}