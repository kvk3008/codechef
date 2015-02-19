#include<iostream>
using namespace std;
int main()
{
	char a[1000000];
	cin >> a;
	long long int q;
	cin >> q;
	while(q--) 
	{
		long long int st,end,c[100000],i=0,j,k,temp=0;
		c[i]=0;
		char s,e;
		cin >> s;
		cin >> e;
                cin >> st;
                cin >> end;
                st -=1;
                end -=1;
                for(j=end;j>=st;j--)
                {
                    if(a[j]==s)
                     {
                        c[i]=temp;
                        i +=1;
                        c[i]=0;  
                     }
                    if(a[j]==e)
                    {
                        temp +=1;
                    }        
                } 
	        st=0;
                for(k=0;k<i;k++)
                { 
                     st +=c[k];
                }
                cout << st << endl;  
        }
	return 0; 
}
