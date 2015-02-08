#include<stdio.h>
long long int gcd(long long int x,long long int y)
{ 
	while(y>0)
	{
		long long int temp=y;
		y=x%y;
		x=temp;
	}
	return x;
}
int main()
{
	long long int test,i;
	scanf("%lld",&test);
	while(test--)
	{
		long long int A,B,result;
		scanf("%lld %lld"&A,&B);    
		long long int C[A],q1,q2; 
		for(i=0;i<A;i++)
			scanf("%lld",&C[i]); 
		for(i=0;i<B;i++)
		{       	  
			scanf("%lld %lld"&A,&B);    
                        A=A-1;
                              
		}   
	}
	return  0;
} 
