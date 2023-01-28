#include <iostream>
using namespace std;

int main (){
    float n,a,s=0;
    cin>>n;
    while(cin>>a){
        s+=a;
    }
    cout<<s/n;
}