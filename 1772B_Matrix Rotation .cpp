#include <bits/stdc++.h>
using namespace std;


int t,a,b,c,d;

main(){
    cin>>t;
    while(t--){
        cin>>a>>b>>c>>d;
        cout<<(a>b^c<d&&a>c^b<d?"YES\n":"NO\n");} // True if  d >> b,c >> a 
    }

