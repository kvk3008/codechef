#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		int number,square,i,j,count=0,fr=0;
		cin >> number;
		square=sqrt(number);
                for(i=1;i<=square;i++)
		{
                   if(number%i==0)
                   {
                      j=number/i;
                      if(j==i)
                          count = count + i;
                      else if(i==1)
                           count = count + i;  
                      else
                          count = count + i + j;    
                   }     
		}
                if(number != square)
                cout << count << "\n";
                else
                cout << 0 << "\n";  
	}
	return 0;
}
