#include<iostream>
#include<math.h>
using namespace std;
long long int cnt,a[1000010];
void put(long long int j)
{
long long int k=j%10;
if(j!=0)
{
put(j/10);
a[cnt++]=k;

}
}

int main()
{
long long int i=1,j,k,l;
cnt=1;
while(cnt<=1000000)
{
j=i*i;
put(j);
i++;
}

//for(i=0;i<100;i++)
//{
 // cout<<a[i];
//}


cout<<a[1]<<endl;
cout<<a[10]<<endl;
cout<<a[100]<<endl;
cout<<a[1000]<<endl;
cout<<a[10000]<<endl;
cout<<a[100000]<<endl;
cout<<a[1000000]<<endl;





return 0;
}
