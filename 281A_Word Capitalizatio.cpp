#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	cin>>s;
	char a = s[0];
    s.erase(0,1);
    s.insert(0,1,toupper(a));
	cout<<s;
}