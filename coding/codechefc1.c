#include<stdio.h>
int main()
{
	int test,num,maxcount,count;
	scanf("%d",&test);
	count=0,maxcount=0;
	while(test--)
	{
		scanf("%d",&num);
		if(num==0)
			count=0;
		else
		{
			count++;
			if(maxcount<count)
				maxcount=count;
		}
	}
        printf("%d\n",maxcount);
	return 0;
}
