#include<stdio.h>
#include<malloc.h>
int gcd(int a,int b)
{
	if(a==0)
		return b;
	return gcd(b%a,a);
}
int main()
{
	int T;
	int N,Q,*a,*b,*c,L,R,i;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d %d",&N,&Q);
		a=(int*)malloc(N*sizeof(int));
		b=(int*)malloc(N*sizeof(int));
		c=(int*)malloc(N*sizeof(int));
		scanf("%d",a);
		b[0]=a[0];
		for(i=1;i<N;i++)
		{
			scanf("%d",a+i);
			b[i]=gcd(b[i-1],a[i]);
		}
		c[N-1]=a[N-1];
		for(i=N-2;i+1;i--)
		{
			c[i]=gcd(c[i+1],a[i]);
		}
		while(Q--)
		{
			scanf("%d %d",&L,&R);
			if(L==1)
				printf("%d\n",c[R]);
			else if(R==N)
				printf("%d\n",b[L-2]);
			else
				printf("%d\n",gcd(b[L-2],c[R]));
		}
		free(a);
		free(b);
		free(c);
	}
	return 0;
}

