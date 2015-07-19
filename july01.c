#include<stdio.h>
int main()
{
	int test;
	scanf("%d",&test);
	while(test--)
	{
		int M,x,y;
		int f,lower=0,upper=0,flag=0;
		scanf("%d %d %d",&M,&x,&y);
		int array[M],i,count1[105]={0},count,j;
                for(i=0;i<M;i++)
                 scanf("%d",&array[i]);
                for(i=0;i<M;i++)
		{
			f = array[i];
                        lower = f - (x*y)-1 ;
			if(lower < 0)
				lower = 0;
			upper = f + (x*y)-1;
			if(upper > 100)
				upper = 100 ;
                        for(j=lower;j<=upper;j++)
                             count1[j]=1;         
                }
		count =0;
                 for(i=0;i<100;i++)
                       if(count1[i]==0)
                         count++;
                    printf("%d\n",count);   
	}
	return 0;
}
