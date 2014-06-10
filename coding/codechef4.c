#include<stdio.h>
int count=0;
void function(int n,int z)
{
	if((n/z)==0)
		return ;
	else
	{
		count=count+(n/z);
		function(n,(z*5));
	}
	return ;
}
int main()
{
	int test,z;
	scanf("%d",&test);
	while(test--)
	{
		count=0;
		scanf("%d",&z);
		function(z,5);
		printf("%d\n",count);      
	}

	return 0;
}
