#include<stdio.h>
#include<math.h>
int main()
{
	int test;
	scanf("%d",&test);
	while(test--)
	{
		long long int N,x,count=0,i,j;
		scanf("%lld",&N);
                x=sqrt(N);
                for(i=1;i<=x;i++)
		{
                        if(N%i==0)
			{
                          j=N/i;
                          if(i!=j)
                            count=count+i+j;    
			  else
                            count=count+i;  
                        } 
		}
                printf("%lld\n",count); 	
        }
	return 0;
}
