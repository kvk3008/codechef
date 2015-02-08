#include<stdio.h>
//#include<math.h>
int main()
{
	long long int x1,x2,x3,ans,i,t1,t2,z;
	z=10000007;
	x1=0,x2=3,x3=1;
	for(i=1;i<100;i++)
	{
		if(i%2==0)
			ans=((2*(x2+x3))%z)- (x1%z) + (5*(-1)%z);
		else
			ans=((2*(x2+x3)%z))-(x1%z)+(5%z);
		ans=ans%z;
		x1=x2;
		x2=x3;
		x3=ans;
		printf("%lld\n",ans);
	}
	return 0;
}
