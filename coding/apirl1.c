#include<stdio.h>
int main()
{
	int test,N;
	scanf("%d",&test);
	while(test--)
	{
		scanf("%d",&N);
		int array[N],i,count=0;
		for(i=0;i<N;i++)
			scanf("%d",&array[i]);
		for(i=0;i<N;i++)
		{

			if(i==0)
			{
				if(array[i+1]!=array[i])
					count +=1;
			}
                        else if(i==N-1)
                        {
                         if(array[i]!=array[i-1])
                                 count +=1;  
                        }   
                        else
                        {
                           if(array[i]!=array[i-1] || array[i]!=array[i+1])
                                count+=1;
                        }   
		}
 	        printf("%d\n",count);  
        }
	return 0;
}
