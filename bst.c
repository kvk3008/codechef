#include<stdio.h>
#include<stdlib.h>
struct node
{
	int value;
	struct node *left,*right;
};
int tmp;
struct node* insert(struct node* root,int val){
	if(root==NULL){
		root=(struct node*)malloc(sizeof(struct node));
		root->value=val;
		root->right=NULL;
		root->left=NULL;
	}
	else{
		if(val<root->value)
                {
		    tmp =tmp + 1;
                    root->left=insert(root->left,val);
		}
                if(val>=root->value)
		{
                     tmp = tmp + 1;
                     root->right=insert(root->right,val);
                }   
            }
	return root;
}
int main()
{
	int test,index;
	scanf("%d",&test);
	struct node *root;
        while(test--)
	{
		struct node *root;
                root = (struct node*)malloc(sizeof(struct node*));                  
                scanf("%d",&index);
		int array[index],i,l,depth=0,ans;
		for(i=index-1;i>=0;i--)
			scanf("%d",&array[i]);
                ans = array[index-1];
                for(i=0;i<index;i++)
                 { 
                   tmp=0;
                   root = insert(root,array[i]);
                   if(depth < tmp)
                     depth = tmp;       
	         }
                printf("%d %d\n",ans,depth-1); 
        }
	return 0;
}
