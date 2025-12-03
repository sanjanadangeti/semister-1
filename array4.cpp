#include<stdio.h>
int main()
{
	int key,i,n,roll_num[59];
	int found=0;
	printf("enter n value");
	scanf("%d",&n);
	printf("enter array elemennts");
	for(i=0;i<n;i++)
	{
		scanf("%d",&roll_num[i]);
	}
	printf("enter key value");
	scanf("%d",&key);
	for(i==0;i<n;i++)
	{
		if(key==roll_num[i])
		{
			printf("element found at index%d\n",i);
			found=1;
			break;
		}
	}
	if(!found)
	{
		printf("element not found\n");
	}
	return 0;
}
