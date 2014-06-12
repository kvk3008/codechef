#include<stdio.h>
int main()
{
	int test,num,count,five,temp;
	scanf("%d",&test);
	while(test--)
	{
		scanf("%d",&num);
		count=0,five=5,temp=num;
		while(temp)
		{
			count=count+num/five;
			temp=num/five;
			five=five*5;
		} 
		printf("%d\n",count);
	}	
	return 0;
}
