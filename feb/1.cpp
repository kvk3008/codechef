#include<iostream>
using namespace std;
int main()
{
	long long int test,temp;
	cin >> test;
	while(test--)
	{
		cin >> temp;
		if(temp>3) 
		{
			if(temp%2==0)
				temp = ((temp*temp)/8)-(temp/4);
			else
                        {
                        temp = temp-1;
			temp = ((temp*temp)/8)-(temp/4);
			}
                        cout << temp << endl;
		}
		else
			cout << 0 << endl;
	}
	return 0;
}
