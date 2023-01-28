// Problem : Find an element that appears exactly once , you can scan only one time. 

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n ; 
    cin>> n;
    vector<int> a(n);

    int res = 0;
    for (int &i:a){  //&i for modification access to array, just i for read only acccess to array
        cin >> i;
        res ^= i; // will xor all values to itself and the only once appearing one will remain 
    }


    cout<< res; 
    
    return 0;
} 
