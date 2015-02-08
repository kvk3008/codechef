#include<stdio.h>
#include<string.h>
int main()
{
	        long long int test,a[300];
		a[0]=1;
                long long int N,M,X,temp,i,j;
                temp=0;
                N=57885161;
                X=1;
                for(i=1;i<=N;i++)
                {
                  for(j=0;j<X;j++)
                  {
                     M=a[j]*2+temp;
                     a[j]=M%10;
                     temp=M/10;
                  }       
                  while(temp>0)
                  {
                     a[X]=temp%10;
                     temp=temp/10;
                     if(X!=299)
                     X++; 
                  }                
                }         
             for(i=0;i<10;i++)
                   printf("%lld",a[i]); 
                printf("\n");      
	return 0;
}
