#include<stdio.h>
#include<string.h>
int main()
{
	int test;
	scanf("%d",&test);
	while(test--)
	{
		char a[100001];
		scanf("%s",a);
		int b[100001]={0},length,i,count=0,value=0,sri=0,j,d=0;
		length=strlen(a);
		if(a[0]=='J')
		b[0]=-100000;
		if(a[0]=='M')
			b[0]=49999;
		if(a[0]=='R')
			b[0]=50001;
		for(i=1;i<length;i++)
		{
			if(a[i]=='J')
				b[i]=-100000+b[i-1];
			if(a[i]=='M')
				b[i]=49999+b[i-1];
			if(a[i]=='R')
				b[i]=50001+b[i-1];
		}
		merge(b,0,length-1);




		int c[length];
		for(i=0;i<length;i++)
		{
		c[i]=0;
		}
		j=0;
		d=0;
		for(i=0;i<length-1;i++)
		{
		   if(b[i]==b[i+1])
		   {
			   if(b[i]!=0)
		    c[j]++; 
		   }
		   else
		   {
			   if(b[i]!=0)
		   c[j]++;
		   j++;
		   }
		   if(b[i]==0)
		   {
			   if(b[i]==b[i+1])
			   {
			   d++;
			   }
			   else
				   d++;
		   }
		   
			  
		}
		if(b[length-1]==b[length-2])
		{
		if(b[length-1]==0)
			d++;
		else
			c[j-1]++;
		}
		 if((b[length-1]!=b[length-2]))
		 {
			 if(b[length-1]!=0)
		 c[j]=1;
			 else
				 d++;
		 }



		 for(i=0;i<length;i++)
		 {
		 value=value+((c[i])*(c[i]-1))/2;
		 }
		 value=value+d+(d*(d-1))/2;
		 printf("%d\n",value);

	}
	return 0;
}

void sort(int array[], int low, int high, int mid)

{
	int swap[100001], i = low, j, l = low, m = mid + 1;
	while(l <= mid && m <= high)
	{
		if(array[l] <= array[m])
		{
			swap[i] = array[l];
			l++;
		}
		else
		{
			swap[i] = array[m];
			m++;
		}
		i++;
	}
	if(l > mid)
	{
		for(j = m; j <= high; j++)
		{
			swap[i] = array[j];
			i++;
		}
	}
	else
	{
		for(j = l; j <= mid; j++)
		{
			swap[i] = array[j];
			i++;
		}
	}
	for(j = low; j <= high; j++)
		array[j] = swap[j];
}
void merge(int array[], int low, int high)
{
	int mid;
	if(low < high)
	{
		mid = (low + high) /2;
		merge(array,low, mid);
		merge(array,mid + 1, high);
		sort(array,low, high, mid);
	}
}
