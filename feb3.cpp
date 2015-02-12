#include<iostream>
#include<stdio.h> 
#include<math.h>
using namespace std;
int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		long long int N,S;
		cin >> N;
		cin >> S;
		long long int ans=1,temp,i;
                if(S==(N*(N+1)/2))
                   cout << 0 << endl;
                else
                {
                 S -=N;
                 temp=1;
		 while(S>=temp)
		 {
                  ans +=1;
                  S -=temp;
                  temp +=1;
                 }   	         
                 cout << N-ans << endl;
                }  
          }
	return 0;
}
