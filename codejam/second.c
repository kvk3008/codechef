#include<stdio.h>
int cmpfunc (const void * a, const void * b)
{
	return ( *(int*)a - *(int*)b );
}
int main()
{
	int test,i;
	scanf("%d",&test);
	for(i=1;i<=test;i++)
	{
		int j,D,max;
		scanf("%d",&D);
		int array[D];
		for(j=0;j<D;j++)
			scanf("%d",&array[j]);
                qsort(array,D,sizeof(int),cmpfunc);
                for(j=0;j<D;j++)
                        printf("%d\n",array[j]);       
	}
}
