    #include<bits/stdc++.h>
    using namespace std;

    int main(){
        set<int> s;
        int n,p,q,x;
        cin>>n;
        cin>>p;
        while(p--) {           
            cin>>x;
            s.insert(x);
        }
        
        cin>>q;

        while(q--) {
            cin>>x;
            s.insert(x);
        }

        cout<<(s.size()==n?"I become the guy.\n" : "Oh, my keyboard!\n");
        
    }

