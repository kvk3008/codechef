#include<stdio.h>
int main()
{
long long int s,n;
long long int min=10000000;
for(n=1;n<=(7257426/2);n++)
{
s=((7257426/n)+n-1);
if(min>s)
 min=s;
}
printf("%lld\n",min);
return 0;
}
