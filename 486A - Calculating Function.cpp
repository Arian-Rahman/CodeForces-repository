    #include<bits/stdc++.h>
    using namespace std;
    int main(){
        long long n;cin>>n;
        //cout<<(n&1?-(n/2+1):2n/2); 
        cout<<(n%2?-(((n-1)/2 )+1): n/2);
    }


/* #include<bits/stdc++.h>
using namespace std;

int main()
{
  long long t;cin>>t;
  t++;
  long long sum=0;
  while(t--){
    (t%2==0 ? sum+=t:sum-=t); 
  }
  cout<<sum;
} */