#include<iostream>
using namespace std;
int n,a,b,c,i;
main()
{
	cin>>n;
	while(i<n)
	{
		cin>>a;
		b=max(b,a);
		c+=a;
		i++;
	}
	cout<<b*n-c;
}