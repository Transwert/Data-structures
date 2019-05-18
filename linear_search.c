#include<stdio.h>

int main()
{
	printf("please enter the size of array to be used: \n");

	int n,i;
	scanf("%d",&n);
	int a[n];

	for(i=0;i<=n-1;i++)
	{
		printf("enter the no.:\n");
		scanf("%d",&a[i]);
	}

	/*
	for(i=0;i<=n-1;i++)
	{printf("%d ",a[i]); 
	} 
	*/

	int key;
	printf("enter the no. to be searched in the array.\n");
	scanf("%d",&key);
	
	for(i=0;i<=n-1;i++) 
	{ 
		if(key == a[i])
		{
			printf(" the  no. is on %dth position. \n",i+1); 
			break;
		}
	}

	return 0;
}
