#include<bits/stdc++.h>
using namespace std;
 
int main(){
int t;
cin>>t;
while(t--)
{
	long long int n;

	cin>>n;

	long long int  a[n];

	map<long long int ,long long int>map;

	long long int counter;

	for(int i=0;i<n;i++){
		cin>>a[i];
		map[a[i]]++; //track each int iteration count
	}

	sort(a,a+n);
	
    if(map.size()==1){
		cout<<(n-1)*n<<endl;
	}
    else{
		counter=map[a[0]]*map[a[n-1]]*2; // times 2 because of two permutations being possible for each pair
		cout<<counter<<endl;
	}
 
 
}
return 0;
}