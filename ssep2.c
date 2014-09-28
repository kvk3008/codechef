#include<stdio.h>
#include<math.h>
int prime2[1000001],h;
void prime()
{
	long long int x,i,j,flag;
	h=0;
	for(i=1;i<1000001;i++)
	{
		flag=0;
		if(i<2)
		{ 
			prime2[h]=i;
			h++;  
		}
		else if(i<4)
		{
			prime2[h]=1; 
			h++; 
		}
		else
		{
			x=sqrt(i);
			for(j=2;j<x;j++)
			{
				if(i%j==0) 
				{
					flag=1;
					break;
				}
				if(flag==1)
				{
					prime2[h]=j;
					h++;    
				}

			} 
		} 
	} 
}
int main()
{
	int test,N,i,j;
	scanf("%d",&test);
	prime();   
	while(test--)
	{
		scanf("%d",&N);
		long long int array[N];
		int temp,count,rep,repmax,answer;
		for(i=0;i<N;i++)
			scanf("%lld",&array[i]);
		count=temp=answer=0;
		for(j=0;j<h;j++)
		{ 	
			repmax=0;
			for(i=0;i<N;i++)
			{
				if(array[i]!=1 && array[i]>prime2[j] && array[i]%prime2[j]==0)
				{
					rep=0; 
					while(array[i]%prime2[j]==0 && array[i]>=prime2[j])
					{
						array[i]=array[i]/prime2[j];
						rep++;
					}
					if(rep>repmax)
						repmax=rep;
				}
				else
				{
					count++;
					continue;
				}
			}
			answer=answer+repmax;
			if(count==N)
				break; 
		} 
		printf("%d\n",answer); 
	}
	return 0;
}
