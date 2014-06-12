#include<stdio.h>
#include<math.h>
int main()
{
	int test,num,i,count,i2;
	scanf("%d",&test);
	while(test--)
	{
		scanf("%d",&num);
		count=1; 
		for(i=2;i<=sqrt(num);i++) 
		{
			if(num%i==0) 
			{
				i2=num/i;
				if(i2==i)
					count=count+i;
				else
					count=count+i+i2;  
			}     
		} 
	     printf("%d\n",count);
          }
	return 0;
}
