#include <iostream>
#include<stdio.h> 
#include<string>
using namespace std;
int main()
{
	int test;
	std::cin >> test;
	while(test--)
	{
		std::string input,output;
		std::cin >> input;  
                output = input;
                char s;
		int i,j,temp=0,count=0,temp1=0,k,flag=0;
		j = input.size();
                if(j%2==1)
                {
			if(input[j/2]=='9')
				count = count + 1;
			if(input[j/2]+1 <= '9')
			{
				input[j/2]=input[j/2]+1;
				output[j/2]=input[j/2]+1;
                                temp=1;
			        temp1=1; 
                        }
			else
                        { 
				input[j/2]='0';   
		                output[j/2]='0';  
                                temp1=2;   
                        } 
                }
                for(i=(j/2)-1;i>=0;i--)
		{
			if(input[i]==input[j-i-1])
                                if(input[i]=='9')
                                        count = count +2;

                        if((input[i] <= input[j-i-1]) && temp==0)
			{
				if(input[i]+1 > '9') 
					s=input[i];
				else
				{
                                    s=input[i]+1;
				    temp=1;
                                }  
				input[i]=s;
				input[j-i-1]=s;
			}
			else 
			{
				s=input[i];
				input[i]=s;
				input[j-i-1]=s;
                                temp=1;  
                        }
		}
                for(k=0;k<(j/2) && temp1!=2 ;k++)
                {
                        if((output[k] <= output[j-k-1]) && temp1==0)
                        {
                                if(output[k]+1 > '9')
                                        s=output[k];
                                else
                             {      
                                  s=output[k]+1;
                                temp1=1;
                             }
                                output[k]=s;
                                output[j-k-1]=s;
                        }
                        else 
                       {
                                s=output[k];
                                output[k]=s;
                                output[j-k-1]=s;
                                temp1=1;
                       }
                }
		if(count!=j)
                  {       
                   for(k=j-1;k>=0;k--)
                   {   
                         if(input[k] < output[k])
                               temp=2;
                          if(input[k] > output[k])
                               temp=1;    
                   }              
                  if(temp==2 || temp1==2 )
                     std::cout <<  input << "\n";
                  else
                     std::cout << output << "\n";        
                  }
                 else
		{
			j=j+1;
			char str[j];
			for(i=0;i<j;i++)
			{
				if(i==0 || i==j-1)
					str[i]='1';
				else
					str[i]='0';

				cout << str[i];
			}
			cout << "\n";     
		}       
	}
	return 0;
}
