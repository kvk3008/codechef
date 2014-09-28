#include<stdio.h>
int main()
{
	int N;
	scanf("%d",&N);
	int task[N][2],i;
	for(i=0;i<N;i++)
        {
		scanf("%d",&task[i][0]);
                task[i][1]=i;
        }
        for(i=0;i<N;i++)
          printf("%d\n",task[i][0]);
    	return 0;
}
