#include<stdio.h>
int gcd(int a,int b)
{
        if(b==0)
                return a;
        else
                return gcd(b,a%b);
}
int check(int *a, int x, int y)
{
	int i, j, st = 0;
	for(i = x;i<y - x;i++)
	{
		for(j = i;j< y-x;j++)
		{
			if(gcd(a[i], a[j]) != 1)
			{
				st = -1;
				return -1;
			}
		}
	}
	return y-x+1;
}
int main()
{
	int tst;
	scanf("%d",&tst);
        while(tst--)
	{
		int num;
		scanf("%d", &num);
		int a[num],pre=0;
		int b[num], i, n;
		for(i=0;i<num;i++)
			b[i]= -1;
		for(i = 0; i< num;i++)
		{
			scanf("%d", &a[i]);
			if(i!= 0)
			{
				int t = gcd(a[i-1], a[i]);
				if(t == 1)
					b[i-1] = 1;
			}
		}
		int fi = 0;
		int ls = 0;
		for(i = 0;i< num-1;i++)
		{
			if(b[i] == 1)
			{
				ls = ls+1;
				continue;
			}
			else if(ls!= fi || (ls!=fi && i==num-2))
			{
				int y = check(a, fi, ls);
				if(y != -1 && y> pre)
					pre = y;
				ls = fi = i + 1;
			}
                }
                          if(ls!=fi)
                          {
                                int y = check(a, fi, ls);
                                if(y != -1 && y> pre)
                                        pre = y;
                                ls = fi = i + 1;
                        }
  
                if (pre==1  || pre==0)
	             printf("-1\n");
                else
                    printf("%d\n",pre+1);  
          }
	return 0;
}
