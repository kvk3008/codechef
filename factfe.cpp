#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
long long int factorial(long long int x,long long int N)
{
   if(x!=1)
     return (x%N)*factorial(x-1,N);
   return 1;
} 
long long int function(long long int x,long long int N)
{
   if(x%2==0)
      return (((x/2)%N)*(x%N)*(x+1)); 
   return (x%N)*(x%N)*(((x+1)/2)%N);
}
int main()
{
	long long int N,M,ans=0;
	cin >> N;
	cin >> M;
	while(N--)
	{
		long long int temp,x=0;
                cin >> temp;
                if(temp+1<M) 
                 x=factorial(temp+1,M)%M;                
                x=(x-1+(function(temp,M)%M))%M;
                ans +=x; 
	}
        ans = ans%M;
        cout << ans << endl;  
	return 0;
}
