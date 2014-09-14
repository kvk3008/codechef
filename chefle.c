#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int test;
	long long int f=1000000007,x,t;
	char s[1000000]; 
	scanf("%d",&test);
	while(test--)
	{

		int z;
		scanf("%s",s);
		z=0;
		x=t=1;
               	while(s[z]!='\0')  
		{ 
			if(s[z]=='l')
			{
				if(t%2==0)
					x=(2*x)-1;
				else
					x=2*x; 
			}
			else if(s[z]=='r')
			{
				if(t%2==0)
					x=(2*x)+1;
				else
					x=(2*x)+2;   
			}
                        x=x%f;
			z++;			
		        t++;  
                }
		printf("%lld\n",x);
	}
	return 0;
}
