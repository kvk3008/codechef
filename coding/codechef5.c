#include<stdio.h>
long long int a[200],b[200],c[200];
void factorial(long long int n,long long int m)
{
	if(n==1)
		return ;
	else
	{
		long long int i=0,temp=n,temp2=m,j=0;
		while(temp)
		{
			a[i]=temp/10;
                        temp=temp%10; 
		        i++;
                }
                	
	}
}
int main()
{
	long long int test,n,result,i;
	scanf("%lld",&test);
	while(test--)
	{
		for(i=0;i<200;i++)
			a[i]=b[i]=c[i]=-1;
		scanf("%lld",&n);
		result=factorial(n);
		printf("%lld\n",result);
	}
	return 0;
}
