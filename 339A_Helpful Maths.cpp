#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;int l;
	cin>>s;
	sort(s.begin(), s.end());
	l=s.length();
	s.erase(0,(l-1)/2); // erease the + symbols which should be from 0 to (l-1)/2 position
	for(int i=1;i<l;i=i+2){
		s.insert(i,"+");
	}
	cout<<s;
}