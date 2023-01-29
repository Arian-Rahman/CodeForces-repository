#import<bits/stdc++.h>
using namespace std;int i,n,p,t,a[60];
main(){
    cin>>t;
    while(t--){
        cin>>n;
        for(i=0;i++<n;) cin>>a[i];
        sort(a,a+i);
        for(i=p=0;++i<n;){
            if(a[i]+1<a[i+1])
            p++;
        }

        if(p)
            cout<<"NO"<<endl;
        else 
            cout<<"YES"<<endl;
}}
