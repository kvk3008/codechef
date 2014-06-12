#include<stdio.h>
///#include<time.h>
long long int array[1000000]={0} ;
long long int c_prime(long long int t)
{
	long long int flag=0,i;
	if(t==2) 
		flag=1; 
	if(t%2==0 || t==1)
		return flag;
	else
		for(i=3;i<(t/2);i=i+2)
			if(t%i==0)
				return flag;  

	flag=1;
	return flag;
}
int main()
{
	//clock_t tic=clock();
	long long int test,S,E,i,t;
	scanf("%lld",&test);
	while(test--)
	{
		scanf("%lld %lld",&S,&E);
		for(i=S;i<=E;i++)
		{
			if(array[i]==0 && i<1000000)
			{
				t=c_prime(i);
				if(t==1)
				{ 
					printf("%lld\n",i);       
					array[i]=1;
				}    
			}
			else
				printf("%lld\n",i);     
		} 
	}
	//clock_t toc=clock();
	//	printf("%f",(double)(toc-tic)); 
	return 0;
}
