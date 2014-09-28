#include<stdio.h>
int cmpfunc (const void * a, const void * b)
{
	return ( *(long long int*)a - *(long long int*)b );
}
int main()
{
	int test,N,i;
	scanf("%d",&test);
	while(test--)
	{
		scanf("%d",&N);
		long long int array[N],temp;
		for(i=0;i<N;i++)
			scanf("%lld",&array[i]);
		qsort(array,N,sizeof(long long int),cmpfunc);
		temp=0;
		for(i=N-1;i>=0;i=i-2)
			temp=temp+array[i];
		printf("%lld\n",temp);
	}
	return 0;
}
