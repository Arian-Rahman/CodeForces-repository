    #include <bits/stdc++.h>
    using namespace std;

    int main() {
    	int x=0,t;
        string s;
    	for(cin>>t;t--;){
            cin>>s;
            s[1]=='+'?x++:x--;
            }
    	cout<<x<<'\n';
    }