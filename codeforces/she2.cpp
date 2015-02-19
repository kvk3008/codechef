#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int i,x0,y0,temp=0,x1,x2,j,flag;
	cin >> i;
	float array[i],m;
	for(temp=0;temp<i;temp++)
 	array[temp]=0; 
        cin >> x0;
	cin >> y0;
	temp=2;
	while(i--)
	{
		flag=0;
                cin >> x1;
		cin >> x2;
	        m=0;
                if(y0!=x2 && x0!=x1)
                m=(float)(y0-x2)/(x0-x1);
		else if(y0==x2)
                array[0]=5;
                else if(x0==x1)
                array[1]=6;     
                for(j=2;j<=temp;j++)
		{
                     if(m == array[j])
                         flag=1;
		} 
                if(flag==0 && m!=0) 
                {
                  array[temp]=m;
                  temp +=1;
                }         
         }    
             if(array[0] < 2.00)
                temp -=1;
              if(array[1] < 2.00)
                   temp -=1;       
         cout << temp << endl;  
	return 0;
} 
