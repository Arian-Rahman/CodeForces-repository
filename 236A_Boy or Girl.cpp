#include <bits/stdc++.h>
using namespace std;

int main()
{

	char input;
    set<char> set; // only stores one of each element

	while(cin>>input){
        set.insert(input);
    }

	int size = set.size();
    cout<< (size%2==0? "CHAT WITH HER!":"IGNORE HIM!");

	return 0;
}
