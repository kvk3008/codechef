    #include <stdio.h>
    #include <unistd.h>
    long long p=1000000007;
    long long a[200001];
     
    long long inverse(int m)
    {
    long long x = 1;
    long long y = m;
    int a = p-2;
    while(a>0)
    {
    if(a%2 ==1)
    {
    x=x*y;
    if(x>p)
    x=x%p;
    }
    y=y*y;
    if(y>p)
    y=y%p;
    a=a/2;
    }
    return x;
    }
     
    long long int combi(int n, int r)
    {
    int i;
    a[0]=1;
    a[1]=1;
    for(i=2; i<=n; i++)
    a[i]=(a[i-1]*i)%p;
    long long int den;
    den = (inverse(a[r]) * inverse(a[n-r]))%p;
    return ((a[n]*den)%p);
    }
     
     
     
    int main()
    {
    int t, n, r;
    scanf("%d", &t);
    while(t--)
    {
    scanf("%d %d", &n, &r);
    long long int ans = combi(n, r);
    printf("%lld\n", ans);
    }
    return 0;
    }

