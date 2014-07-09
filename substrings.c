#include<stdio.h>
int main()
{
	long long int test,temp,i,count;
	scanf("%lld",&test);
	while(test--)
	{
		count=0;
                scanf("%lld",&temp);
		char suff[temp];
	        scanf("%s",suff);
                for(i=0;i<temp;i++)
			if(suff[i]=='1')
				count++;	
	         count=((count*(count+1))/2); 
                printf("%lld\n",count);
	}
	return 0;
}
