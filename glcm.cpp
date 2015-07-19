#include<iostream>
#include<stdio.h>
using namespace std;
long long int GCD(long long int A, long long int B)
{
if(B==0)
 return A;
else
 return GCD(B,A%B);
}
int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		int A,B;
	         cin >> A;
		cin >> B;
		long long int G,L;
		G=GCD(A,B);
		L=(A*B)/G;
                printf("%lld %lld\n",G,L); 
          }
	return 0;
}
