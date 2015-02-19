#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
	char t[256];
	int i,len;
	cin >> t;
	len = strlen(t);
        for(i=0;i<len;i++)
	{
		if(t[i] >= 53 && i!=0)
			t[i] = 57 - t[i] + 48 ;
	        if(i==0 && t[i]>=53 && t[i]!=57)
                   t[i] = 57 - t[i] + 48 ;
        }
        cout << t << endl;
	return 0;
}
