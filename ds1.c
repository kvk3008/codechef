#include<stdio.h>
long long int c[100000];
long long int func(long long int a)
{
	long long int b=0,p,i=0,s=0,k;
	p=a-1;
	for(i=0;i<a-1;i++)
	{
		if(s==1&&c[i]<c[p])
		{
			k=c[i];
			c[i]=c[b];
			c[b]=k;
		}
		if(c[i]<c[p])
		{
			b++;
			s=0;
		}
		else
		{
			s=1;
		}
	}
	return b;
}
int main()
{
	long long int test;
	scanf("%lld",&test);
	while(test--)
	{
		long long int a,b,i,k,j,su,sp;
		scanf("%lld%lld",&a,&b);
		j=a;
		for(i=0;i<a;i++)
		{
			scanf("%lld",&c[i]);
		}
		k=func(a);
		su=c[a-1];
		
		while(b-1>k)
		{
			su=c[a-1];
			c[a-1]=c[k];
			c[k]=su;
			k=func(a);
		}
		while(b-1<k)
		{
			a=k;
			k=func(a);
		}
                if(b-1==k)
		{
		su=c[a-1];
		c[a-1]=c[k];
		c[k]=su;
		}

		printf("%lld\n",c[k]);
	}
	return 0;
}
