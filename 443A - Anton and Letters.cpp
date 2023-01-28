#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    getline(cin,s);
    set<char> t;
    for(int i=1;i<s.length()-1;i+=3){
        t.insert(s[i]);
    }
    cout<<t.size();
}


