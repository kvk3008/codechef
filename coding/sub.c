#include<stdio.h>
int main()
{
	int test,temp,i,count;
	scanf("%d",&test);
	while(test--)
	{
		count=0;
                scanf("%d",&temp);
		char suff[temp];
	        scanf("%s",suff);
                for(i=0;i<temp;i++)
			if(suff[i]=='1')
				count++;
		printf("%d\n",((count*(count+1))/2)); 
	}
	return 0;
}
