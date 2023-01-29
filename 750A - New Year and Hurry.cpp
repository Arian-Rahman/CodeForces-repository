#include<iostream>
using namespace std;
int main()
{

    int problem_count,time;
    cin>>problem_count>>time;
    int i =1;
    while (time<=240 && i<=problem_count)
    {   

        i++;
        if((time +(i*5)) >=240) 
        { //cout<<"break"<<endl;
            i--;
            cout<<i;
            goto there;}
        time= time +(i*5);
        //cout<<time<<endl;   
    }
     cout<<i-1;	
     there:;
}

/* int a,b,c=0;
	cin>>a>>b;
	while(b<=240 && c<=a)
	{
		c++;
		b+=5*c;
	}
	cout<<c-1; */