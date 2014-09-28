#include<stdio.h>
int gcd(int a,int b)
{
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}
int main() 
{
	int test,i,N,j;
	scanf("%d",&test);
	while(test--)
	{
		int temp,max=0,count=0;
		scanf("%d",&N);
                int array[N]; 
		for(i=0;i<N;i++)
		   scanf("%d",&array[i]);
                for(i=0;i<N;i++)
                {
                   if(gcd(array[i],array[i-1])==1 && i!=0)
                   {
                     max=1;
                     break; 
                   }  
                } 
                if(max==0)
                   printf("-1\n");
                else
                  printf("%d\n",N);   
	}
	return 0;
}
