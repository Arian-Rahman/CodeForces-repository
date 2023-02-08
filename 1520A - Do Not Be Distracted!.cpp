#import <bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        bool flag= false;
        cin>>n;
        char a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
/*         for(int i=0;i<n;i++){
            cout<<a[i]<<endl;
        }
 */
        for (int i=0;i<n-1;i++){
            if(a[i]!=a[i+1]){
            //  cout<<a[i]<< " and "<<a[i+1]<<" not equal"<<endl;
                for(int j=i+1;j<n;j++){
            //     cout<<"entered loop 2"<<endl;
            //        cout<<"comp "<<a[i]<<"to"<<a[j]<<endl;
                    if(a[i]==a[j]) {
            //            cout<<"loop entered"<<endl;
                        flag=true; 
                        goto output;
                        }
                    else continue;
                } 
            }else continue;
        }
        output : 
        flag==true? cout<<"NO"<<endl : cout<<"YES"<<endl;
       }   
}
