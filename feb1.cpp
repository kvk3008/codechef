#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{
        char s[100000]; 
	int test;
	cin >> test;
	while(test--)
	{
		int i,flag=-1,count=0,count1=0,max;
                cin >> s;
		for(i=0;i<strlen(s);i++)
		{
                  if(i%2==0)
                     if(s[i]=='-')
                          count++;
                     else
                          count1++;
                 else
                    if(s[i]=='+')
                         count++;
                    else
                         count1++;                     
                }
         max=count;
        if(count>count1)
           max=count1;
       cout <<  max << endl;
        }
	return 0;
}
