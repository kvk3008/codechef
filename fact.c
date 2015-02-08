#include<stdio.h>
int main()
{
long long int ans,i;
ans=0;
for(i=1;i<=100;i=i+2)
{
ans += (i*(i+1));
}
printf("%lld\n",ans);
return 0;
}
