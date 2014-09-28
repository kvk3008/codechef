#include<stdio.h>
int main()
{
	int N,i;
	scanf("%d",&N);
	int array[N];
	for(i=0;i<N;i++)
           scanf("%d",&array[i]);
        int qr,fi,ls,k,p;
	scanf("%d",&qr);
	while(qr--)
	{
		scanf("%d",&i);
		if(i==1)
		{
                    scanf("%d %d %d",&fi,&ls,&p);
                    for(k=fi-1;k<ls;k++)
                    {
                     if(array[k]%p==0 && array[k]>=p)
                      array[k]=array[k]/p; 
		    } 
               }
                else if(i==2)
               {
                 scanf("%d %d",&fi,&ls);
                 array[fi-1]=ls;
               } 
	}
        for(i=0;i<N;i++) 
              printf("%d ",array[i]);
	printf("\n");
        return 0;
}
