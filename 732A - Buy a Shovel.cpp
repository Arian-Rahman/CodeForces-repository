#include <bits/stdc++.h>
using namespace std;


int k,r,counter=1;

int main(){
    cin>>k>>r;
    while( 1){
        if((k*counter)%10 !=0 && (((k*counter)%10)-r)!=0)
        {
/*             cout<<"k : ";
            cout<< k<<endl;
            cout<< "10 division result : " ;
            cout<< (k*counter)%10<<endl;
            cout<<"minus R result: ";
            cout<<(((k*counter)%10)-r)<<endl;
*/
            counter++; 
        }
        else 
         break;
    }
    cout<<counter;
    }

