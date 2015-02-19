#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
long long int factorial(long long int x,long long int N)
{
   if(x!=1)
     return (x*factorial(x-1,N))%N;
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
	long long int array[M+1];
        for(ans=1;ans<=M;ans++) 
         array[ans]=factorial(ans,M);    
        ans=0;
        while(N--)
	{
		long long int temp,x=0;
                cin >> temp;
                if(temp+1<M) 
                 x=array[temp+1];                
                x=(x-1+(function(temp,M)%M))%M;
                ans +=x; 
	}
        ans = ans%M;
        cout << ans << endl;  
	return 0;
}
