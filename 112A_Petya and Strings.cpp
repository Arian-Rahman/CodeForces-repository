    #include<bits/stdc++.h>
    using namespace std ;
     main(){
    	char a[101],b[101];
    	cin.getline(a,101);
    	cin.getline(b,101);
    	strupr(a);
    	strupr(b);
    	cout << strcmp(a,b);
    }