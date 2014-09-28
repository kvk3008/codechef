#include<stdio.h>
int main()
{
int array[6];
int i,count,one,two,flag,temp; 
count=0;
for(i=0;i<6;i++)
{
 scanf("%d",&array[i]);
 if(array[i]==array[i-1] && i>0)
   count=array[i];
}
one=0;
two=0;
flag=0;
temp=0;
for(i=0;i<6;i++)
{
if(array[i]!=count && flag==0 && count!=0)
{
  one=array[i];
  flag=1;
}
else if(array[i]!=count && flag==1 && count!=0)
 two=array[i];
if(count==array[i])
 temp++;
}
if(count==0 || temp!=4)
 printf("Alien");
else if(one!=two)
 printf("Bear");
else if(one==two)
  printf("Elephant");
return 0;
}
