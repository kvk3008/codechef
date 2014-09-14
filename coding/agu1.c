#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int test,len,i;
	char s[100000];
	scanf("%d",&test);
	while(test--)
	{
		scanf("%s",s);
		getchar();
		len=strlen(s);
		int count=0,countt=0;
		for(i=0;i<len;i++)
		{

			if(s[i]=='a')
			{
				if(((i+1)<len && s[i+1]=='b') ||  count==2) 
					count++; 
			}     
			if(count==3)
			{
				countt++;      
				count=0;
			}  
		}          
		countt++;
		printf("%d\n",countt);  	
	} 
	return 0;
} 
