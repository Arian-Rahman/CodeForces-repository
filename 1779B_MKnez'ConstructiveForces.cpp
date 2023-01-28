#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
    while(t--){
		int n;cin>>n;
		if(n==3) cout<<"NO\n";
		else{
			cout<<"YES\n";
			if(n%2==0)
				while(n--) cout<<(n%2?"1 ":"-1 ");
			else{
				for(int i=0;i<n;i++) cout<<(i%2?n/2:1-(n/2))<<' ';
			}
			cout<<'\n';
		}
	}
	return 0;
}

