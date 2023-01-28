    #include<cstdio>
    char s[101];
    int main()
    {
    	int T,n,i,c; // T test case , n digit 
        //printf("enter test case count: ");
    	scanf("%d",&T);
    	while(T--)
    	{   
          //  printf("enter digit number , followed by the binary array : ");
    		scanf("%d%s",&n,s);
              // printf(s[0]);
              // printf(s[1]);
            c=s[0]=='1';
    		for(i=1;i<n;i++)
    	     putchar(s[i]=='1'?"-+"[c^=1]:'+');
            putchar(10);


    	}
    }