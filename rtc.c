#include<stdio.h>
int main()
{
	int test;
	long long int x,y;
	scanf("%d",&test);
	while(test--)
	{
		scanf("%lld  %lld",&x,&y);
		x=abs(x);
		y=abs(y);
		if(x==y)
		{ 
			x=x+y;
			printf("%lld\n",x);	
		} 
		else if (x>y)
		{
			if((x-y)%2==0)
				x=(2*(x));
			else
				x=(2*(x))+1;
			printf("%lld\n",x);   
		}
		else
		{
			if((y-x)%2==0)
				x=(2*(y));
			else
				x=(2*y)-1; 
			printf("%lld\n",x);
		}

	}
	return 0;
}
