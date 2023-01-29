#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {int n;
    cin>>n;
    int nn= (int)sqrt(n);
    int x,y;
    for(x=1;x<nn ;x++){
    for (y=1;y<=nn; y++){
       // cout<<"X and Y : "<<x<<" "<<y <<endl;
      //  cout<<(pow(x,y)*y)+(pow(y,x)*x)<<endl;
         if ((pow(x,y)*y)+(pow(y,x)*x)==n)
            {cout<<x<<" "<<y<<endl;
                goto finish;
            };
        } }
    cout<<-1;
    finish: ; }
 }