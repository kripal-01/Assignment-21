 int i,j,sum,m,n;
   int k,t;
 cin>>t;
   for(k=0;k<t;k++)
   {
       sum=0;
        cin>>m;
        cin>>n;
    for(i=0;i<pow(n,m);i++)
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        sum+=i&j;
    }
    cout<<sum<<endl;
   }
	// your code g
