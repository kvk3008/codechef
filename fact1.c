#include<stdio.h>
#include<string.h>
int main()
{
	int test,a[300];
	scanf("%d",&test);
	while(test--)
	{
		a[0]=1;
                int N,M,X,temp,i,j;
                scanf("%d",&N);
                temp=0;
                X=1;
                for(i=1;i<=N;i++)
                {
                  for(j=0;j<X;j++)
                  {
                     M=a[j]*i+temp;
                     a[j]=M%10;
                     temp=M/10;
                  }       
                  while(temp>0)
                  {
                     a[X]=temp%10;
                     temp=temp/10;
                     X++; 
                  }                
                }         
             for(i=X-1;i>=0;i--)
                   printf("%d",a[i]); 
                printf("\n");      
	}
	return 0;
}
