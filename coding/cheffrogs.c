#include<stdio.h>
int main()
{
	long long int N,K,P,j,i;
	scanf("%lld %lld %lld",&N,&K,&P);
	long long int A[N],k,m,test,new;
	test=0;
	for(i=0;i<N;i++)
	{		
		scanf("%lld",&A[i]);
		if(test<A[i])
			test=A[i]; 
	}
	long long int lump[test];
	m=test;
	test=N; 
	while(P--)
	{
		for(i=0;i<m;i++)
			lump[i]=0;
		scanf("%lld %lld",&i,&j);    
		i=i-1;
                j=j-1;
                N=A[j]-A[i];   
		for(k=0;k<test;k++)
			if(A[k]>A[i] && A[k]<A[j])
				lump[A[k]]++;  
		for(k=0;k<m;k++)
		{  
			if(lump[k]>0 && k-A[i]<=3)
			{    
				j=k-A[i];
				N=N-j;
			        A[i]=k; 
                        }
		}
		if(N<=K)
			printf("Yes\n");
		else            
			printf("No\n");
	}
	return 0;
}
