#include<stdio.h>
int main()
{
	int test,j;
	scanf("%d",&test);
	for(j=1;j<=test;j++)
	{
		int S,i,men=0;
		scanf("%d",&S);
                char str[S+1];	
                scanf("%s",str);
                int array,count=0;
                for(i=0;i<=S;i++)
                {
                   men=men + str[i]-48;
                   if(str[i]=='0' && men <= i)
                   {
                      count=count + 1;
                      men = men + 1; 
                   }
                 } 
		printf("Case #%d: %d\n",j,count);
	}
	return 0;
}
