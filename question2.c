#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	int i;
	for(i=1;i<=t;i++)
	{
		int s;
		scanf("%d",&s);
		int j,k;
		scanf("%d %d",&j,&k);
		int arr[s];
		for(i=0;i<s;i++)
		{
			scanf("%d",&arr[i]);
		}
		int max=arr[0];
		for(i=0;i<s;i++)
		{
			if(max<arr[i])
			{
				max=arr[i];
			}
		}
		if(k>=2)
		{
			printf("yes\n");
		}
		else if(arr[j-1]==max && k==1)
		{
			printf("yes\n");
		}
		else
		{
			printf("no\n");
		}
	}
}
