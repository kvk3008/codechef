#include<stdio.h>
int main()
{
	long long int test,i;
	scanf("%lld",&test);
	while(test--)
	{
		long long int N,K,max=0;
		scanf("%lld %lld",&N,&K);
		long long int A[N],B,x;
		for(i=0;i<N;i++)
			scanf("%lld",&A[i]);
		for(i=0;i<N;i++)
                {
                       scanf("%lld",&B);
                       x=K/A[i];
                       if((x*B)>max)
                           max=x*B;
               }     
               printf("%lld\n",max);
	}
	return 0;
}
