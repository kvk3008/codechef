#include<stdio.h>
int main()
{
	long long int test,N,M,x_e,x_o;
	scanf("%lld",&test);
	while(test--)
	{

		scanf("%lld %lld",&N,&M);
		
                if(N%2==1 && M%2==1)
                { 
                x_o=((N*M)/2);
		x_e=(N*M);
                printf("%lld/%lld\n",x_o,x_e);  
                }
                else
                printf("1/2\n");
 
	}
	return 0;
}
