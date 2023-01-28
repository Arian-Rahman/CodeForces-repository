    #include<iostream>
    using namespace std;
     
    int main(){
    	int n,s; cin>>n;
    	for(int i=0;i<n;i++){
    		int p,v,t;
    		cin>>p>>v>>t;
    		if(p+v+t>=2){s++;}
    	}
    	cout<<s<<endl;
    }