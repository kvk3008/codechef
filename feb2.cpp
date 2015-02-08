#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
int test;
cin >> test;
while(test--)
{
int N,i;
cin >> N;
int A[N],test[100001],max=-1,num;
for(i=0;i<=100000;i++)
 test[i]=0;  
for(i=0;i<N;i++)
{
   cin >> A[i];
   test[A[i]] += 1;
   if(max<test[A[i]])
       max=test[A[i]]; 
}
cout << N-max  << endl;
}
return 0;
}
